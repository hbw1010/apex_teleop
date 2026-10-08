"""监控恰好在创建子进程期间运行，不得撤销启动；真实退出仍须停止。"""

import os
from types import SimpleNamespace
import unittest
from unittest.mock import patch

import rclpy
from rclpy.signals import SignalHandlerOptions
from apex_hand_teleop.manus_teleop_manager import ManusTeleopManager, StartTeleop


class StartupMonitorTests(unittest.TestCase):
    def test_timer_during_spawn_preserves_start_but_later_exit_stops_it(self):
        with patch.dict(os.environ, ROS_DOMAIN_ID='225', ROS_LOCALHOST_ONLY='1'):
            rclpy.init(args=[], signal_handler_options=SignalHandlerOptions.NO)
            manager = ManusTeleopManager()
            manager._timer.cancel()
            exits = {'manus': None, 'left': None}

            def spawn(command, **kwargs):
                role = 'manus' if 'manus_data_publisher' in command else 'left'
                # 固定触发用户日志里的顺序：Popen 尚未返回时监控执行。
                manager._on_timer()
                if role == 'manus':
                    manager._on_glove_activity(
                        SimpleNamespace(side='Left'), source_topic='/manus_glove_1'
                    )
                return SimpleNamespace(pid=100 if role == 'manus' else 101,
                                       poll=lambda: exits[role])

            with patch('apex_hand_teleop.manus_teleop_manager.subprocess.Popen', side_effect=spawn), \
                    patch.object(manager, '_arm_follow_publish', return_value=True), \
                    patch.object(manager, '_kill_process_list'):
                try:
                    response = manager._on_start_teleop(
                        StartTeleop.Request(command='1:192.0.2.91'), StartTeleop.Response()
                    )
                    self.assertTrue(response.success, response.message)
                    self.assertIn('forwarding=true', response.message)
                    # 修复不能只是让监控忽略缺失/退出的 MANUS 进程。
                    exits['manus'] = 1
                    manager._on_timer()
                    status = manager._on_start_teleop(
                        StartTeleop.Request(command='5:192.0.2.91'), StartTeleop.Response()
                    )
                    self.assertIn('active=false', status.message)
                    self.assertIn('forwarding=false', status.message)
                finally:
                    manager.destroy_node()
                    rclpy.shutdown()


if __name__ == '__main__':
    unittest.main()
