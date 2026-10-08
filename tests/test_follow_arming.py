"""旧 daemon 缓存缺少节点时，管理器仍须能真实打开/关闭参数与发布端。"""

import os
import threading
import time
from types import SimpleNamespace
import unittest
from xmlrpc.server import SimpleXMLRPCServer

import rclpy
from rclpy.executors import SingleThreadedExecutor
from rclpy.signals import SignalHandlerOptions
from rcl_interfaces.msg import SetParametersResult
from sensor_msgs.msg import JointState
from ros2cli.daemon import get_address, RequestHandler
from apex_hand_teleop.manus_teleop_manager import ManusTeleopManager


class FollowArmingTests(unittest.TestCase):
    def test_stale_daemon_cannot_block_arm_or_disarm(self):
        previous = {name: os.environ.get(name) for name in ('ROS_DOMAIN_ID', 'ROS_LOCALHOST_ONLY')}
        os.environ['ROS_DOMAIN_ID'] = '224'
        os.environ['ROS_LOCALHOST_ONLY'] = '1'
        # 真实 XMLRPC 协议的旧节点图：CLI 不得把该缓存当作目标不存在的依据。
        server = SimpleXMLRPCServer(get_address(), requestHandler=RequestHandler,
                                    allow_none=True, logRequests=False)
        server.register_introspection_functions()
        server.register_function(lambda: [], 'get_node_names_and_namespaces')
        server_thread = threading.Thread(target=server.serve_forever, daemon=True)
        server_thread.start()
        rclpy.init(args=[], signal_handler_options=SignalHandlerOptions.NO)
        manager = ManusTeleopManager()
        manager._timer.cancel()
        retarget = rclpy.create_node('manus_apex_retarget_left')
        retarget.declare_parameter('follow_publish_armed', False)
        holder = {'publisher': None}
        topic = '/rysen/apexhand/ip_192_0_2_90/move_j_position_follow_command'

        def set_parameters(parameters):
            for parameter in parameters:
                if parameter.name == 'follow_publish_armed':
                    if parameter.value and holder['publisher'] is None:
                        holder['publisher'] = retarget.create_publisher(JointState, topic, 10)
                    elif not parameter.value and holder['publisher'] is not None:
                        retarget.destroy_publisher(holder['publisher'])
                        holder['publisher'] = None
            return SetParametersResult(successful=True)

        retarget.add_on_set_parameters_callback(set_parameters)
        executor = SingleThreadedExecutor()
        executor.add_node(retarget)
        thread = threading.Thread(target=executor.spin, daemon=True)
        thread.start()
        try:
            deadline = time.monotonic() + 5
            while not manager._retarget_node_visible('manus_apex_retarget_left'):
                self.assertLess(time.monotonic(), deadline, '测试节点未进入真实 ROS 图')
                time.sleep(0.02)
            self.assertTrue(manager._arm_follow_publish(ip='192.0.2.90', side='left'))
            self.assertTrue(retarget.get_parameter('follow_publish_armed').value)
            self.assertIsNotNone(holder['publisher'])
            manager._procs['left'] = SimpleNamespace(poll=lambda: None)
            success, message = manager._disarm_follow_publish('left')
            self.assertTrue(success, message)
            self.assertFalse(retarget.get_parameter('follow_publish_armed').value)
            self.assertIsNone(holder['publisher'])
        finally:
            manager._procs.clear()
            executor.shutdown()
            thread.join(timeout=3)
            manager.destroy_node()
            retarget.destroy_node()
            rclpy.shutdown()
            server.shutdown()
            server.server_close()
            server_thread.join(timeout=3)
            for name, value in previous.items():
                if value is None:
                    os.environ.pop(name, None)
                else:
                    os.environ[name] = value


if __name__ == '__main__':
    unittest.main()
