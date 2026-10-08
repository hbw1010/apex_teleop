#!/usr/bin/env python3
"""统一的真机启停/回零与 MANUS 标定入口；纯仿真必须显式选择。"""

import argparse
import ipaddress

from ros_client import StartupRejected, ipv4_address, positive_timeout, request_services
import sys

def parse_args():
    parser = argparse.ArgumentParser(
        description="真机启动先回零，停止先断转发再回零失能；请先运行 backend 和 teleop。"
    )
    commands = parser.add_subparsers(dest="command", required=True)
    for name, description in (
        ("start-left", "左手回零到位后启动遥操作"),
        ("start-right", "右手回零到位后启动遥操作"),
        ("status", "查询指定 IP 的 active/forwarding 状态"),
        ("stop", "停止目标手转发，回零到位后关闭使能"),
    ):
        command = commands.add_parser(name, help=description)
        command.add_argument("--ip", required=True, type=ipv4_address, help="目标灵巧手 IP")
        command.add_argument(
            "--timeout", type=positive_timeout, default=60.0, help="整次操作总超时秒数，默认 60"
        )
        if name != "status":
            command.add_argument("--home-tolerance", type=positive_timeout, default=0.10,
                                 help="回零允许的每关节位置误差（rad），默认 0.10")
            command.add_argument("--simulation", action="store_true",
                                 help="仅仿真：不连接、不使能、不回零真机；禁止使用真实设备地址")
        if name.startswith("start-"):
            command.add_argument("--no-opposition", action="store_true", help="使用原版无对指启动模式")
    calibration = commands.add_parser("calibration", help="运行时姿态标定；完成后需重新启动遥操作")
    steps = calibration.add_subparsers(dest="step", required=True)
    for name in ("run", "start", "open", "fist", "clear"):
        step = steps.add_parser(name)
        step.add_argument("--side", choices=("left", "right"), required=True, help="标定侧别")
        step.add_argument(
            "--timeout", type=positive_timeout, default=30.0,
            help="单步服务发现及响应超时秒数，不含等待按键时间，默认 30"
        )
    return parser.parse_args()


def run_calibration(args):
    if not sys.stdin.isatty():
        raise ValueError("交互标定需要终端输入；脚本调用请使用 start/open/fist 单步命令。")
    side = "左手" if args.side == "left" else "右手"
    print(f"{side}姿态标定：请先确认真实灵巧手已停止并关闭使能。")
    print("准备姿态时不计时；按 Ctrl+C 可取消，不会自动恢复转发。")
    stages = (
        ("start", None),
        ("open", "四指伸直并拢，拇指自然张开；摆好并保持，按 Enter 采集："),
        ("fist", "五指自然握拳；摆好并保持，按 Enter 采集："),
    )
    for step, prompt in stages:
        if prompt is not None:
            input(prompt)
            print("正在采集，请保持姿态，等待本步返回。")
        step_args = argparse.Namespace(**vars(args))
        step_args.step = step
        result = call_service(step_args)
        if result != 0:
            print("本步标定失败，已停止；不会继续下一步或恢复转发。", file=sys.stderr)
            return result
    print(f"{side}姿态标定完成。转发仍关闭；准备遥操作时请重新走正常启动入口。")
    return 0


def call_service(args):
    if args.command == "calibration" and args.step == "run":
        return run_calibration(args)

    from rosidl_runtime_py.convert import message_to_yaml
    from rysen_apexhand_msgs.srv import ManusCalibration, StartTeleop

    if getattr(args, "simulation", False):
        address = ipaddress.IPv4Address(args.ip)
        if not any(address in ipaddress.IPv4Network(network) for network in (
                "192.0.2.0/24", "198.51.100.0/24", "203.0.113.0/24")):
            raise ValueError("--simulation 只允许 TEST-NET 测试地址，不能绕过真实设备的回零流程。")

    if args.command in ("start-left", "start-right", "stop") and not args.simulation:
        from motion_control import run_motion
        response = run_motion(args.command, args.ip, timeout=args.timeout,
                              tolerance=args.home_tolerance,
                              no_opposition=getattr(args, "no_opposition", False))
        print(message_to_yaml(response), end="")
        return 0 if response.success else 1

    if args.command == "calibration":
        service_type = ManusCalibration
        service_name = {
            "start": "start_manus_calibration",
            "open": "calibrate_manus_open",
            "fist": "calibrate_manus_fist",
            "clear": "clear_manus_calibration",
        }[args.step]
        request = service_type.Request(side=args.side)
    else:
        service_type = StartTeleop
        service_name = "start_manus_teleop"
        code = {"start-left": 1, "start-right": 2, "status": 5, "stop": 0}[args.command]
        if getattr(args, "no_opposition", False):
            code = code * 10 + 1
        request = service_type.Request(command=f"{code}:{args.ip}")

    service_name = f"/rysen/apexhand/{service_name}"
    response = request_services(
        service_type, service_name, [request],
        timeout=args.timeout, node_name="manus_native_control",
    )[0]
    print(message_to_yaml(response), end="")
    return 0 if response.success else 1


def main():
    args = parse_args()
    try:
        return call_service(args)
    except StartupRejected as exc:
        print(f"启动已拒绝：{exc}", file=sys.stderr)
        return 3
    except KeyboardInterrupt:
        print("调用已中断；已发送的请求不一定被服务端取消。", file=sys.stderr)
        return 130
    except EOFError:
        print("标定已取消：终端输入结束，不会继续下一步或恢复转发。", file=sys.stderr)
        return 130
    except Exception as exc:
        print(f"服务调用失败：{exc}", file=sys.stderr)
        return 2


if __name__ == "__main__":
    sys.exit(main())
