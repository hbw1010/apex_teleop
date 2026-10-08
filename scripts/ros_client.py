"""遥操作与硬件 CLI 共用的服务超时、连接和参数约定。"""

import argparse
import ipaddress
import math
import time


class StartupRejected(RuntimeError):
    """设备连接或侧别被明确拒绝，当前启动未发送任何使能/运动请求。"""


def positive_timeout(value):
    seconds = float(value)
    if not math.isfinite(seconds) or seconds <= 0:
        raise argparse.ArgumentTypeError("超时必须是有限正数（秒）")
    return seconds


def ipv4_address(value):
    try:
        return str(ipaddress.IPv4Address(value))
    except ipaddress.AddressValueError as exc:
        raise argparse.ArgumentTypeError("请输入目标灵巧手的 IPv4 地址") from exc


def request_services(service_type, name, requests, *, timeout, node_name):
    """多个请求共用同一个总超时；不因超时而重发可能仍在执行的操作。"""
    import rclpy

    deadline = time.monotonic() + timeout
    rclpy.init(args=[])
    node = None
    try:
        node = rclpy.create_node(node_name)
        client = node.create_client(service_type, name)
        if not client.wait_for_service(timeout_sec=max(0.0, deadline - time.monotonic())):
            raise TimeoutError(f"等待服务超时：{name}。请检查对应后端和 ROS_DOMAIN_ID。")
        responses = []
        for request in requests:
            remaining = deadline - time.monotonic()
            if remaining <= 0:
                raise TimeoutError(f"总超时已耗尽：{name}，未发送下一请求。")
            future = client.call_async(request)
            rclpy.spin_until_future_complete(node, future, timeout_sec=remaining)
            if not future.done():
                future.cancel()
                raise TimeoutError(f"等待响应超时：{name}。请求已发送，服务端可能仍在执行，请先检查状态。")
            response = future.result()
            if response is None:
                raise RuntimeError(f"服务未返回结果：{name}")
            responses.append(response)
            if hasattr(response, "success") and not response.success:
                break
        return responses
    finally:
        if node is not None:
            node.destroy_node()
        rclpy.try_shutdown()
