"""通过隔离 ROS 服务验证真实 CLI/会话在连接拒绝后不会使能、回零或失能。"""

import os
from pathlib import Path
import subprocess
import sys
import threading
import unittest

import rclpy
from rclpy.context import Context
from rclpy.executors import SingleThreadedExecutor
from rclpy.signals import SignalHandlerOptions
from rysen_apexhand_msgs.srv import Connect, GetConnectionInfo, MoveJoint, SetAllFingersEnable, StartTeleop

ROOT = Path(__file__).resolve().parents[1]
IP = "192.0.2.80"


class ConnectionFailureTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.previous_domain = os.environ.get("ROS_DOMAIN_ID")
        cls.previous_local = os.environ.get("ROS_LOCALHOST_ONLY")
        os.environ["ROS_DOMAIN_ID"] = "220"
        os.environ["ROS_LOCALHOST_ONLY"] = "1"
        cls.context = Context()
        rclpy.init(args=[], context=cls.context, signal_handler_options=SignalHandlerOptions.NO)
        cls.node = rclpy.create_node("manus_teleop_manager", context=cls.context)
        cls.node.declare_parameter("enable_viewer", False)
        cls.actuations = []
        cls.connections = []

        def connect(request, response):
            cls.connections.append(request.ip)
            response.success = False
            response.message = "Timeout"
            return response

        def info(request, response):
            response.ips = [IP]
            response.connected = [False]
            response.hand_sides = ["unknown"]
            return response

        def manager(request, response):
            response.success = True
            response.message = "active=false forwarding=false exo_mode=none; not started"
            return response

        def actuate(request, response):
            cls.actuations.append(type(request).__name__)
            response.success = False
            response.message = "hand not connected"
            return response

        cls.services = [cls.node.create_service(kind, "/rysen/apexhand/" + name, callback)
                        for kind, name, callback in (
                            (Connect, "connect", connect), (GetConnectionInfo, "get_connection_info", info),
                            (StartTeleop, "start_manus_teleop", manager),
                            (SetAllFingersEnable, "set_all_fingers", actuate), (MoveJoint, "move_joint", actuate))]
        cls.executor = SingleThreadedExecutor(context=cls.context)
        cls.executor.add_node(cls.node)
        cls.thread = threading.Thread(target=cls.executor.spin, daemon=True)
        cls.thread.start()

    @classmethod
    def tearDownClass(cls):
        cls.executor.shutdown()
        cls.thread.join(timeout=3)
        cls.node.destroy_node()
        cls.context.try_shutdown()
        for name, previous in (("ROS_DOMAIN_ID", cls.previous_domain), ("ROS_LOCALHOST_ONLY", cls.previous_local)):
            if previous is None:
                os.environ.pop(name, None)
            else:
                os.environ[name] = previous

    def setUp(self):
        self.actuations.clear()
        self.connections.clear()

    def test_session_connection_rejected_has_no_motion_cleanup(self):
        result = subprocess.run([sys.executable, str(ROOT / "scripts/session.py"), "--side", "left",
                                 "--left-ip", IP, "--no-viewer", "--timeout", "4"],
                                capture_output=True, text=True, timeout=20)
        self.assertNotEqual(result.returncode, 0)
        self.assertIn("connect", result.stdout + result.stderr)
        self.assertIn("Timeout", result.stdout + result.stderr)
        self.assertEqual(self.connections, [IP])
        self.assertEqual(self.actuations, [], result.stdout + result.stderr)

    def test_stop_unconnected_reports_failure_without_enable_request(self):
        result = subprocess.run([sys.executable, str(ROOT / "scripts/control.py"), "stop", "--ip", IP,
                                 "--timeout", "3"], capture_output=True, text=True, timeout=10)
        self.assertNotEqual(result.returncode, 0)
        self.assertEqual(self.actuations, [], result.stdout + result.stderr)


if __name__ == "__main__":
    unittest.main()
