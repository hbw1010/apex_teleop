"""真机启停的唯一编排入口：停止转发、回零、反馈确认、再交接控制。"""

import fcntl
import math
import os
from pathlib import Path
import signal
import time

import rclpy
from rclpy.context import Context
from rclpy.executors import SingleThreadedExecutor
from rclpy.qos import qos_profile_sensor_data
from rclpy.signals import SignalHandlerOptions
from sensor_msgs.msg import JointState
from rysen_apexhand_msgs.srv import Connect, GetConnectionInfo, SetAllFingersEnable, StartTeleop
from ros_client import StartupRejected

JOINT_NAMES = tuple(
    f"{finger}_j{index}"
    for finger, count in (("thumb", 5), ("index", 4), ("middle", 4), ("ring", 4), ("pinky", 4))
    for index in range(count)
)
HOME_TOLERANCE = 0.10
HOME_SPEED = 0.30
HOME_ACCELERATION = 0.60
HOME_STABLE_SECONDS = 0.15


class HomeFeedback:
    """只接受命令发出后的完整、新鲜反馈；不要求精确零位或零速度。"""

    def __init__(self, tolerance, after_stamp_ns):
        self.tolerance = tolerance
        self.last_stamp_ns = after_stamp_ns
        self.last_received = None
        self.stable_since = None
        self.max_error = None
        self.positions = None

    def update(self, message, now):
        stamp = message.header.stamp.sec * 1_000_000_000 + message.header.stamp.nanosec
        if stamp <= self.last_stamp_ns:
            return
        self.last_stamp_ns = stamp
        if self.last_received is not None and now - self.last_received > 0.5:
            self.stable_since = None
        self.last_received = now
        self.positions = None
        if len(message.name) != len(message.position) or len(set(message.name)) != len(message.name):
            self.stable_since = None
            return
        positions = dict(zip(message.name, message.position))
        if any(name not in positions or not math.isfinite(positions[name]) for name in JOINT_NAMES):
            self.stable_since = None
            return
        self.positions = positions
        self.max_error = max(abs(positions[name]) for name in JOINT_NAMES)
        if self.max_error > self.tolerance:
            self.stable_since = None
        elif self.stable_since is None:
            self.stable_since = now

    def reached(self, now):
        return (self.stable_since is not None and self.last_received is not None
                and now - self.last_received <= 0.5
                and self.last_received - self.stable_since >= HOME_STABLE_SECONDS)


class MotionControl:
    def __init__(self, ip, timeout, tolerance):
        self.ip = ip
        self.deadline = time.monotonic() + timeout
        self.tolerance = tolerance
        self.context = Context()
        rclpy.init(args=[], context=self.context, signal_handler_options=SignalHandlerOptions.NO)
        self.node = rclpy.create_node("apex_safe_control", context=self.context)
        self.executor = SingleThreadedExecutor(context=self.context)
        self.clients = {}
        self.prefix = f"/rysen/apexhand/ip_{ip.replace('.', '_')}"
        self.feedback = None
        self.subscription = self.node.create_subscription(
            JointState, f"{self.prefix}/joint_states", self._feedback, qos_profile_sensor_data)
        self.hardware_touched = False
        self.start_sent = False

    def close(self):
        self.executor.shutdown()
        self.node.destroy_node()
        self.context.try_shutdown()

    def _feedback(self, message):
        if self.feedback is not None:
            self.feedback.update(message, time.monotonic())

    def remaining(self):
        remaining = self.deadline - time.monotonic()
        if remaining <= 0:
            raise TimeoutError("启停总超时；不能继续进入遥操作。")
        return remaining

    def client(self, service_type, suffix):
        if suffix not in self.clients:
            self.clients[suffix] = self.node.create_client(service_type, f"/rysen/apexhand/{suffix}")
        return self.clients[suffix]

    def call(self, service_type, suffix, request):
        client = self.client(service_type, suffix)
        if not client.wait_for_service(timeout_sec=self.remaining()):
            raise TimeoutError(f"等待服务超时：{suffix}")
        self.remaining()
        future = client.call_async(request)
        rclpy.spin_until_future_complete(self.node, future, executor=self.executor, timeout_sec=self.remaining())
        if not future.done():
            future.cancel()
            raise TimeoutError(f"服务 {suffix} 响应超时；已发送请求可能仍在执行，不能盲目重试。")
        response = future.result()
        if suffix == "connect" and response is not None and not response.success:
            raise StartupRejected(f"connect 失败：{response.message}；未发送使能或回零指令。")
        if response is None or (hasattr(response, "success") and not response.success):
            raise RuntimeError(f"{suffix} 失败：{getattr(response, 'message', '无响应')}")
        return response

    def teleop(self, code):
        return self.call(StartTeleop, "start_manus_teleop", StartTeleop.Request(command=f"{code}:{self.ip}"))

    def stop_forwarding(self, require_manager=False):
        client = self.client(StartTeleop, "start_manus_teleop")
        if client.wait_for_service(timeout_sec=min(1.0, self.remaining())):
            self.teleop(0)
        elif require_manager:
            raise RuntimeError("MANUS 管理器未就绪；未连接、使能或回零真机。")
        else:
            print("MANUS 管理器不可用；仅在确认指令发布端已消失后尝试回零。", flush=True)
        # 停止服务返回后还要等 DDS 端点消失，不能与其他控制源抢占同一只手。
        quiet_since = None
        while True:
            self.remaining()
            publishers = sum(self.node.count_publishers(f"{self.prefix}/{topic}") for topic in (
                "move_j_position_follow_command", "move_j_control_follow_command"))
            now = time.monotonic()
            if publishers:
                quiet_since = None
            elif quiet_since is None:
                quiet_since = now
            elif now - quiet_since >= 0.5:
                return
            rclpy.spin_once(self.node, executor=self.executor, timeout_sec=min(0.05, self.remaining()))

    def connection(self):
        info = self.call(GetConnectionInfo, "get_connection_info", GetConnectionInfo.Request())
        return next(((connected, side) for ip, connected, side in zip(
            info.ips, info.connected, info.hand_sides) if ip == self.ip), (False, "unknown"))

    def enable(self, enabled):
        self.hardware_touched = True
        return self.call(SetAllFingersEnable, "set_all_fingers",
                         SetAllFingersEnable.Request(ip=self.ip, enable=enabled))

    def home(self, *, stopping=False):
        print(f"{self.ip} 回零：21 关节目标 0 rad，允许误差 {self.tolerance:g} rad。", flush=True)
        self.feedback = HomeFeedback(self.tolerance, self.node.get_clock().now().nanoseconds)
        while self.feedback.positions is None:
            rclpy.spin_once(self.node, executor=self.executor, timeout_sec=min(0.05, self.remaining()))
        if stopping and self.feedback.max_error <= self.tolerance:
            while not self.feedback.reached(time.monotonic()):
                rclpy.spin_once(self.node, executor=self.executor, timeout_sec=min(0.05, self.remaining()))
                if self.feedback.positions is None or self.feedback.max_error > self.tolerance:
                    break
            else:
                print(f"{self.ip} 已在允许零位范围内，不重复使能或发送运动指令。", flush=True)
                return
        target = [self.feedback.positions[name] for name in JOINT_NAMES]
        topic = f"{self.prefix}/move_j_position_follow_command"
        publisher = self.node.create_publisher(JointState, topic, qos_profile_sensor_data)
        try:
            while publisher.get_subscription_count() == 0:
                rclpy.spin_once(self.node, executor=self.executor, timeout_sec=min(0.05, self.remaining()))
            self.enable(True)
            command = JointState(name=list(JOINT_NAMES))
            speed = 0.0
            previous = time.monotonic()
            # 使用非阻塞位置跟随接口缓慢回零，避免 SDK 阻塞 MoveJoint
            # 占住后端公共回调组、暂停另一只手的指令处理。
            while True:
                self.remaining()
                now = time.monotonic()
                if (self.feedback.positions is None or self.feedback.last_received is None
                        or now - self.feedback.last_received > 0.5):
                    raise RuntimeError("回零关节反馈缺失或过期；停止运动请求，不进入遥操作。")
                dt = min(now - previous, 0.05)
                previous = now
                speed = min(HOME_SPEED, speed + HOME_ACCELERATION * dt)
                step = speed * dt
                target = [math.copysign(max(0.0, abs(value) - step), value) for value in target]
                command.header.stamp = self.node.get_clock().now().to_msg()
                command.position = target
                publisher.publish(command)
                if self.feedback.reached(now):
                    break
                rclpy.spin_once(self.node, executor=self.executor, timeout_sec=min(0.02, self.remaining()))
            print(f"{self.ip} 回零到位，最大误差 {self.feedback.max_error:.4f} rad。", flush=True)
        finally:
            self.node.destroy_publisher(publisher)

    def run(self, command, no_opposition=False):
        self.stop_forwarding(require_manager=command.startswith("start-"))
        connected, actual_side = self.connection()
        if command.startswith("start-"):
            side = command.removeprefix("start-")
            if not connected:
                self.call(Connect, "connect", Connect.Request(ip=self.ip, connect=True, connection_type=1))
                connected, actual_side = self.connection()
            if not connected or actual_side != side:
                raise StartupRejected(f"目标设备侧别不符：请求 {side}，设备返回 {actual_side}；未发送使能或回零指令。")
            self.home()
            code = 1 if side == "left" else 2
            self.start_sent = True
            response = self.teleop(code * 10 + 1 if no_opposition else code)
            print(f"{self.ip} 已回零，开始 {side} 遥操作。", flush=True)
            return response
        if not connected:
            raise RuntimeError("设备未连接：转发已停止，但无法确认回零。")
        self.hardware_touched = True
        self.home(stopping=True)
        self.enable(False)
        return StartTeleop.Response(success=True, message="已停止转发、回零到位并关闭目标手全部使能。")

    def abort(self):
        # 不重新发送运动请求；只做有界的停止/失能补救，超时不等于服务端取消。
        cleanup_deadline = time.monotonic() + 5.0
        self.deadline = min(cleanup_deadline, time.monotonic() + 2.0)
        if self.start_sent:
            try:
                self.teleop(0)
            except Exception as exc:
                print(f"警告：停止转发未确认：{exc}", flush=True)
        self.deadline = cleanup_deadline
        if self.hardware_touched:
            try:
                self.enable(False)
            except Exception as exc:
                print(f"警告：失能未确认，请使用物理急停：{exc}", flush=True)


def run_motion(command, ip, *, timeout=60.0, tolerance=HOME_TOLERANCE, no_opposition=False):
    if not math.isfinite(tolerance) or tolerance <= 0:
        raise ValueError("回零容差必须为有限正数。")
    deadline = time.monotonic() + timeout
    # 同一 ROS domain/IP 的本机启停互斥；不同手互不阻塞。
    lock_dir = Path(__file__).resolve().parents[1] / "log" / "control"
    lock_dir.mkdir(parents=True, exist_ok=True)
    lock_path = lock_dir / f"{os.environ.get('ROS_DOMAIN_ID', '111')}-{ip}.lock"
    with lock_path.open("a") as lock:
        while True:
            try:
                fcntl.flock(lock, fcntl.LOCK_EX | fcntl.LOCK_NB)
                break
            except BlockingIOError as exc:
                if time.monotonic() >= deadline:
                    raise TimeoutError("等待该手上一条启停/回零命令结束超时。") from exc
                time.sleep(min(0.05, max(0.0, deadline - time.monotonic())))
        control = MotionControl(ip, max(0.0, deadline - time.monotonic()), tolerance)
        try:
            return control.run(command, no_opposition)
        except BaseException:
            previous_handlers = {sig: signal.signal(sig, signal.SIG_IGN)
                                 for sig in (signal.SIGINT, signal.SIGTERM)}
            try:
                control.abort()
            finally:
                for sig, handler in previous_handlers.items():
                    signal.signal(sig, handler)
            raise
        finally:
            control.close()
