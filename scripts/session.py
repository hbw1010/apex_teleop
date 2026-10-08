#!/usr/bin/env python3
"""管理一键真机遥操作的生命周期；运动安全流程只由 control.py 实现。"""

import argparse
from contextlib import contextmanager
import fcntl
import math
import os
from pathlib import Path
import signal
import subprocess
import sys
import time

from ros_client import StartupRejected, ipv4_address, positive_timeout

ROOT = Path(__file__).resolve().parent.parent
PREFIX = "/rysen/apexhand/"


def home_tolerance(value):
    number = float(value)
    if not math.isfinite(number) or number <= 0:
        raise argparse.ArgumentTypeError("回零容差必须是有限正数（rad）")
    return number


def parse_args():
    parser = argparse.ArgumentParser(
        description="启动真实遥操作；启动/退出均回零。请清空手周围空间并准备物理急停。"
    )
    parser.add_argument("--side", choices=("left", "right", "both"), default="left")
    parser.add_argument("--left-ip", type=ipv4_address, default="192.168.0.102")
    parser.add_argument("--right-ip", type=ipv4_address, default="192.168.0.103")
    parser.add_argument("--no-viewer", action="store_true", help="不打开 MuJoCo 窗口")
    parser.add_argument("--timeout", type=positive_timeout, default=60.0,
                        help="每次服务就绪/控制操作超时秒数，默认 60")
    parser.add_argument("--home-tolerance", type=home_tolerance, default=0.10,
                        help="回零每关节允许误差（rad），默认 0.10")
    args = parser.parse_args()
    if args.side == "both" and args.left_ip == args.right_ip:
        parser.error("双手模式的左右手 IP 必须不同")
    return args


class Session:
    def __init__(self, args):
        self.args = args
        self.hands = [(side, getattr(args, f"{side}_ip"))
                      for side in ("left", "right") if args.side in (side, "both")]
        self.owned = []
        self.attempted = []
        self.interrupted = False
        self.cleaning = False
        self.control_process = None
        self.control_deadline = 0.0
        self.node = None

    def signal_handler(self, signum, frame):
        # 不抛异常：重复 Ctrl+C/SIGTERM 也不能打断正在执行的回零。
        if self.cleaning:
            return
        self.interrupted = True

    def checkpoint(self):
        if self.cleaning:
            return
        if self.interrupted and not self.cleaning:
            raise InterruptedError("收到退出信号")
        for name, process in self.owned:
            code = process.poll()
            if code is not None:
                raise RuntimeError(f"本会话的 {name} 已退出（返回码 {code}）")

    def spin(self, duration=0.1):
        self.rclpy.spin_once(self.node, timeout_sec=max(0.0, duration))

    def wait_until(self, predicate, deadline, description):
        while not predicate():
            self.checkpoint()
            remaining = deadline - time.monotonic()
            if remaining <= 0:
                raise TimeoutError(f"{description}超时")
            self.spin(min(0.1, remaining))
        self.checkpoint()

    def response(self, client, request, deadline, description):
        self.wait_until(client.service_is_ready, deadline, f"等待{description}服务")
        future = client.call_async(request)
        try:
            self.wait_until(future.done, deadline, f"等待{description}响应")
            result = future.result()
            if result is None:
                raise RuntimeError(f"{description}没有返回响应")
            return result
        finally:
            if not future.done():
                future.cancel()  # 这里只取消本地只读查询，不声称取消服务端操作。

    @contextmanager
    def service_lock(self):
        # 同一目录的左右手会话串行完成发现/启动与最终回收，避免同时创建同名节点。
        cache = ROOT / ".cache"
        cache.mkdir(exist_ok=True)
        with (cache / "session-services.lock").open("a") as lock:
            deadline = time.monotonic() + self.args.timeout
            while True:
                self.checkpoint()
                try:
                    fcntl.flock(lock, fcntl.LOCK_EX | fcntl.LOCK_NB)
                    break
                except BlockingIOError:
                    if time.monotonic() >= deadline:
                        raise TimeoutError("等待另一会话完成共享服务启动/回收超时")
                    time.sleep(0.1)
            try:
                yield
            finally:
                fcntl.flock(lock, fcntl.LOCK_UN)

    def spawn(self, name, command, env=None):
        self.checkpoint()
        print(f"启动本会话的 {name}。", flush=True)
        process = subprocess.Popen(command, cwd=ROOT, env=env, start_new_session=True)
        self.owned.append((name, process))

    def ensure_service(self, name, client, node_name, command, env=None):
        # DDS 发现有延迟：以真实服务/节点图为准，不能用 sleep 当作就绪证明。
        discovery_deadline = time.monotonic() + min(3.0, self.args.timeout)
        while not client.service_is_ready():
            self.checkpoint()
            if node_name in self.node.get_node_names():
                break
            remaining = discovery_deadline - time.monotonic()
            if remaining <= 0:
                break
            self.spin(min(0.1, remaining))
        reused = client.service_is_ready() or node_name in self.node.get_node_names()
        if reused:
            print(f"复用已有 {name}；退出时不会结束其进程。", flush=True)
        else:
            if name == "ApexHand 后端":
                binary = ROOT / "install/lib/rysen_apexhand/rysen_apexhand_node_exe"
                if not os.access(binary, os.X_OK):
                    raise RuntimeError("后端未编译，请执行：pixi run -e native build-backend")
            self.spawn(name, command, env)
        self.wait_until(client.service_is_ready, time.monotonic() + self.args.timeout,
                        f"等待{name}就绪")
        return reused

    def setup(self):
        import rclpy
        from rclpy.signals import SignalHandlerOptions
        from rcl_interfaces.srv import GetParameters
        from rysen_apexhand_msgs.srv import (
            Connect, GetConnectionInfo, MoveJoint, SetAllFingersEnable, StartTeleop,
        )

        self.rclpy = rclpy
        self.connection_type = GetConnectionInfo
        self.teleop_type = StartTeleop
        rclpy.init(args=[], signal_handler_options=SignalHandlerOptions.NO)
        self.node = rclpy.create_node(f"apex_session_{os.getpid()}")
        self.connection = self.node.create_client(GetConnectionInfo, PREFIX + "get_connection_info")
        self.teleop = self.node.create_client(StartTeleop, PREFIX + "start_manus_teleop")
        backend_clients = [self.connection] + [
            self.node.create_client(service_type, PREFIX + name)
            for name, service_type in (
                ("connect", Connect), ("set_all_fingers", SetAllFingersEnable),
                ("move_joint", MoveJoint),
            )
        ]
        self.ensure_service(
            "ApexHand 后端", self.connection, "rysen_apexhand_node",
            ["bash", str(ROOT / "scripts/backend.sh")],
        )
        deadline = time.monotonic() + self.args.timeout
        self.wait_until(lambda: all(client.service_is_ready() for client in backend_clients),
                        deadline, "等待后端全部控制服务")
        self.response(self.connection, GetConnectionInfo.Request(), deadline, "后端连接状态")
        environment = os.environ.copy()
        environment["ENABLE_VIEWER"] = "false" if self.args.no_viewer else "true"
        self.ensure_service(
            "MANUS 管理器", self.teleop, "manus_teleop_manager",
            ["bash", str(ROOT / "scripts/runtime.sh"), "teleop"], environment,
        )
        deadline = time.monotonic() + self.args.timeout
        parameters = self.node.create_client(GetParameters, "/manus_teleop_manager/get_parameters")
        result = self.response(parameters, GetParameters.Request(names=["enable_viewer"]),
                               deadline, "MANUS 窗口配置")
        self.node.destroy_client(parameters)
        if (len(result.values) != 1 or result.values[0].type != 1
                or result.values[0].bool_value != (not self.args.no_viewer)):
            raise RuntimeError(
                "已有 MANUS 管理器的 enable_viewer 与本次参数不一致；"
                "请自行停止旧管理器后重试，或选择匹配的 --no-viewer。"
            )
        for _, ip in self.hands:
            self.status(ip, deadline)

    def status(self, ip, deadline):
        result = self.response(self.teleop, self.teleop_type.Request(command=f"5:{ip}"),
                               deadline, f"MANUS {ip} 状态")
        if not result.success:
            raise RuntimeError(f"MANUS {ip} 状态查询失败：{result.message}")
        # StartTeleop.srv 明确约定的机器可读前缀；不依赖中文摘要。
        return dict(item.split("=", 1) for item in result.message.split(";", 1)[0].split()
                    if "=" in item)

    @staticmethod
    def terminate_group(process, name):
        # 所有参数都来自本对象 Popen，绝不读取 PID 文件或匹配用户进程。
        for sig, timeout in ((signal.SIGTERM, 5.0), (signal.SIGKILL, 5.0)):
            try:
                os.killpg(process.pid, sig)
            except ProcessLookupError:
                return
            deadline = time.monotonic() + timeout
            while time.monotonic() < deadline:
                process.poll()  # 回收组长，但不能因组长退出而漏掉仍存活的同组子进程。
                try:
                    os.killpg(process.pid, 0)
                except ProcessLookupError:
                    return
                time.sleep(0.05)
            print(f"{name} 进程组未在 {timeout:g} 秒内退出，继续回收。", file=sys.stderr)
        raise RuntimeError(f"无法回收本会话的 {name}")

    def await_control(self):
        process = self.control_process
        if process is None:
            return 0
        while process.poll() is None:
            remaining = self.control_deadline - time.monotonic()
            if remaining <= 0:
                self.terminate_group(process, "control")
                self.control_process = None
                raise TimeoutError(
                    "control 超时；服务端在途请求可能仍会完成，不能保证回零或避免晚到启动。"
                    "请立即使用物理急停并检查硬件。"
                )
            try:
                process.wait(timeout=min(0.1, remaining))
            except subprocess.TimeoutExpired:
                pass
        self.control_process = None
        return process.returncode

    def control(self, command, ip):
        # 即使收到 signal，也先等在途 start 结束，再发 stop，避免晚到 start 反开。
        self.control_deadline = time.monotonic() + self.args.timeout + 10.0
        self.control_process = subprocess.Popen(
            [sys.executable, str(ROOT / "scripts/control.py"), command, "--ip", ip,
             "--timeout", str(self.args.timeout), "--home-tolerance", str(self.args.home_tolerance)],
            cwd=ROOT, start_new_session=True,
        )
        code = self.await_control()
        if code == 3 and command.startswith("start-"):
            raise StartupRejected(f"{ip} 启动在使能前被拒绝，跳过该次启动的回零收尾。")
        if code != 0:
            raise RuntimeError(f"control {command} --ip {ip} 失败（返回码 {code}）")

    def run(self):
        with self.service_lock():
            self.setup()
            for side, ip in self.hands:
                self.checkpoint()
                # 默认登记收尾；只有明确的运动前拒绝才移除，超时/在途请求仍须收尾。
                self.attempted.append((side, ip))
                try:
                    self.control(f"start-{side}", ip)
                except StartupRejected:
                    self.attempted.remove((side, ip))
                    raise
                self.checkpoint()
        print("真实遥操作已启动。Ctrl+C 将先停止转发、回零并关闭使能，再退出。", flush=True)
        print("软件退出不替代物理急停；断电、kill -9 或通信故障无法保证回零。", flush=True)
        while True:
            self.checkpoint()
            deadline = time.monotonic() + self.args.timeout
            connection = self.response(self.connection, self.connection_type.Request(),
                                       deadline, "后端连接状态")
            connected = dict(zip(connection.ips, connection.connected))
            for side, ip in list(self.attempted):
                if not connected.get(ip, False):
                    raise RuntimeError(f"{side} {ip} 连接已丢失")
                status = self.status(ip, time.monotonic() + self.args.timeout)
                if status.get("active") != "true" or status.get("forwarding") != "true":
                    print(
                        f"{side} {ip} 转发已停止，等待该手完整安全收尾；其他手继续运行。",
                        flush=True,
                    )
                    # 共享 per-IP 锁会等待外部 stop 完成；不能只凭 forwarding=false
                    # 就结束后端，否则可能打断手动 stop 仍在执行的回零。
                    self.control("stop", ip)
                    self.attempted.remove((side, ip))
                    self.checkpoint()
            if not self.attempted:
                print("所有目标手均已安全停止，会话正常结束。", flush=True)
                return
            # 有界轮询节流，不将经过时间视为服务就绪。
            until = time.monotonic() + 0.5
            while time.monotonic() < until:
                self.checkpoint()
                self.spin(min(0.1, until - time.monotonic()))

    def shared_services_in_use(self):
        """其他手仍连接时保留共享服务；查询失败也不能贸然杀掉共享进程。"""
        if not self.owned or self.node is None:
            return False
        try:
            result = self.response(
                self.connection, self.connection_type.Request(),
                time.monotonic() + self.args.timeout, "退出前共享后端连接状态",
            )
            targets = {ip for _, ip in self.hands}
            others = [ip for ip, connected in zip(result.ips, result.connected)
                      if connected and ip not in targets]
            if not others:
                return False
            print(
                f"其他手仍连接（{', '.join(others)}），保留共享后端/管理器，"
                "不影响另一终端的会话；其结束后请自行管理这些保留服务。",
                flush=True,
            )
        except Exception as exc:
            print(
                f"无法确认共享服务是否仍被使用：{exc}。为避免影响其他手，保留已有服务；"
                "请人工检查，不能保证异常情况下已回零。",
                file=sys.stderr,
            )
        return True

    def cleanup(self):
        self.cleaning = True
        success = True
        try:
            self.await_control()
        except Exception as exc:
            success = False
            print(f"等待在途 control 失败：{exc}", file=sys.stderr)
        for side, ip in reversed(self.attempted):
            print(f"正在收尾 {side} {ip}，请勿断电；重复信号不会跳过回零。", flush=True)
            try:
                self.control("stop", ip)
            except Exception as exc:
                success = False
                print(f"{side} {ip} 收尾失败：{exc}。不能保证回零，请使用物理急停。", file=sys.stderr)
        if self.owned:
            try:
                with self.service_lock():
                    if not self.shared_services_in_use():
                        for name, process in reversed(self.owned):
                            try:
                                self.terminate_group(process, name)
                            except Exception as exc:
                                success = False
                                print(str(exc), file=sys.stderr)
            except Exception as exc:
                success = False
                print(f"共享服务回收失败：{exc}；保留进程，请人工检查。", file=sys.stderr)
        if self.node is not None:
            self.node.destroy_node()
            self.rclpy.try_shutdown()
        return success


def main():
    args = parse_args()
    session = Session(args)
    previous = {sig: signal.signal(sig, session.signal_handler)
                for sig in (signal.SIGINT, signal.SIGTERM)}
    code = 0
    try:
        session.run()
    except InterruptedError:
        print("收到退出信号，将等待在途控制结束并安全收尾。", flush=True)
    except (ImportError, OSError) as exc:
        code = 2
        print(f"启动依赖/进程失败：{exc}\n"
              "Python 环境：pixi install -e native；发布物：git lfs pull；"
              "缺失 vendor 发布物：pixi run -e native bootstrap；"
              "编译后端：pixi run -e native build-backend。", file=sys.stderr)
    except Exception as exc:
        code = 1
        print(f"会话失败：{exc}", file=sys.stderr)
    finally:
        try:
            if not session.cleanup():
                code = 1
        finally:
            for sig, handler in previous.items():
                signal.signal(sig, handler)
    return code


if __name__ == "__main__":
    sys.exit(main())
