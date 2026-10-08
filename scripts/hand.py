#!/usr/bin/env python3
"""显式调用 ApexHand 后端服务；连接与查询绝不隐式使能。"""

import argparse
import json
import sys

from ros_client import ipv4_address, positive_timeout, request_services


def parse_args():
    parser = argparse.ArgumentParser(
        description="调用真机服务；请先在另一个终端运行 pixi run -e native backend。"
    )
    commands = parser.add_subparsers(dest="command", required=True)
    for name, description in (
        ("connect", "仅连接指定灵巧手，不使能、不发送关节命令"),
        ("disconnect", "断开指定灵巧手连接"),
        ("status", "只读查询 IP、连接状态、左右手，不输出硬件 UID"),
        ("enabled", "只读查询指定灵巧手五指使能状态"),
        ("enable", "显式使能全部五指；可能引发真实动作，须先确认安全与授权"),
        ("disable", "显式关闭全部五指使能，不能替代物理急停"),
    ):
        command = commands.add_parser(name, help=description, description=description)
        if name != "status":
            command.add_argument("--ip", required=True, type=ipv4_address, help="目标灵巧手 IPv4")
        command.add_argument(
            "--timeout", type=positive_timeout, default=10.0,
            help="整个命令的服务发现与响应总超时（秒，默认 10）",
        )
    return parser.parse_args()


def call_service(args):
    from rysen_apexhand_msgs.srv import (
        Connect, GetConnectionInfo, IsFingerEnabled, SetAllFingersEnable,
    )

    if args.command in ("connect", "disconnect"):
        service_type, service_name = Connect, "connect"
        requests = [Connect.Request(ip=args.ip, connect=args.command == "connect", connection_type=1)]
    elif args.command == "status":
        service_type, service_name = GetConnectionInfo, "get_connection_info"
        requests = [GetConnectionInfo.Request()]
    elif args.command == "enabled":
        service_type, service_name = IsFingerEnabled, "is_finger_enabled"
        requests = [IsFingerEnabled.Request(ip=args.ip, finger_id=index) for index in range(5)]
    else:
        service_type, service_name = SetAllFingersEnable, "set_all_fingers"
        requests = [SetAllFingersEnable.Request(ip=args.ip, enable=args.command == "enable")]

    service_name = f"/rysen/apexhand/{service_name}"
    responses = request_services(
        service_type, service_name, requests,
        timeout=args.timeout, node_name="apexhand_native_control",
    )
    for request, response in zip(requests, responses):
        if args.command != "status" and not response.success:
            finger = f"，finger_id={request.finger_id}" if args.command == "enabled" else ""
            print(f"操作失败{finger}：{response.message}", file=sys.stderr)
            return 1

    if args.command == "status":
        response = responses[0]
        result = [
            {"ip": ip, "connected": connected, "side": side}
            for ip, connected, side in zip(response.ips, response.connected, response.hand_sides)
        ]
    elif args.command == "enabled":
        fingers = dict(zip(
            ("thumb", "index", "middle", "ring", "pinky"),
            (response.is_enabled for response in responses),
        ))
        result = {"ip": args.ip, "fingers": fingers, "all_enabled": all(fingers.values())}
    else:
        result = {"ip": args.ip, "success": responses[0].success, "message": responses[0].message}
    print(json.dumps(result, ensure_ascii=False, indent=2))
    return 0


def main():
    args = parse_args()
    try:
        return call_service(args)
    except KeyboardInterrupt:
        print("调用已中断；已发送的请求不一定被服务端取消。", file=sys.stderr)
        return 130
    except Exception as exc:
        print(f"服务调用失败：{exc}", file=sys.stderr)
        return 2


if __name__ == "__main__":
    sys.exit(main())
