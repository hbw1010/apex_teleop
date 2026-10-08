"""检查真实二进制、ROS 序列化和左右手 IK；不发送硬件控制命令。"""

import ctypes
import importlib
import importlib.metadata
from pathlib import Path

import mink
import mujoco
import numpy as np
from ament_index_python.packages import get_package_share_directory
from rclpy.serialization import deserialize_message, serialize_message
from rosidl_runtime_py.utilities import get_message, get_service


def main():
    for name in (
        "apex_hand_teleop._teleop_core",
        "apex_hand_teleop._manus_apex_retarget_node",
        "apex_hand_teleop.manus_teleop_manager",
    ):
        importlib.import_module(name)
        print(f"二进制/节点导入通过：{name}")

    backend = Path(__file__).resolve().parents[1] / "install/lib/librysen_apexhand_node.so"
    if backend.is_file():
        ctypes.CDLL(str(backend))
        print("真机后端动态依赖装载通过（未连接或使能硬件）")
    else:
        print("未构建真机后端；如需真机运行，先执行 pixi run -e native build-backend。")

    # 实际装载消息类型支持，避免仅导入 Python 包掩盖 ABI 缺失。
    for package in ("manus_ros2_msgs", "rysen_apexhand_msgs"):
        share = Path(get_package_share_directory(package))
        for path in sorted((share / "msg").glob("*.msg")):
            cls = get_message(f"{package}/msg/{path.stem}")
            value = cls()
            if deserialize_message(serialize_message(value), cls) != value:
                raise RuntimeError(f"消息序列化不一致：{path.stem}")
        for path in sorted((share / "srv").glob("*.srv")):
            cls = get_service(f"{package}/srv/{path.stem}")
            for subtype in (cls.Request, cls.Response):
                value = subtype()
                if deserialize_message(serialize_message(value), subtype) != value:
                    raise RuntimeError(f"服务序列化不一致：{path.stem}")
        print(f"全部自定义消息及服务序列化通过：{package}")

    share = Path(get_package_share_directory("apex_hand_teleop"))
    for side in ("left", "right"):
        model = mujoco.MjModel.from_xml_path(str(share / "apex_hand" / f"scene_{side}.xml"))
        config = mink.Configuration(model)
        task = mink.PostureTask(model, cost=1.0)
        target = config.q.copy()
        # 在第一个有界单自由度关节上施加小幅目标偏移，实际调用 DAQP。
        joint = next(i for i in range(model.njnt) if model.jnt_limited[i])
        address = model.jnt_qposadr[joint]
        lower, upper = model.jnt_range[joint]
        target[address] = lower + 0.3 * (upper - lower)
        task.set_target(target)
        before = np.linalg.norm(task.compute_error(config))
        velocity = mink.solve_ik(config, [task], dt=0.002, solver="daqp")
        config.integrate_inplace(velocity, dt=0.002)
        after = np.linalg.norm(task.compute_error(config))
        if not np.all(np.isfinite(velocity)) or not after < before:
            raise RuntimeError(f"{side} IK 未向目标收敛：{before} -> {after}")
        print(f"{side} 模型与 DAQP 求解通过：误差 {before:.6g} -> {after:.6g}")

    for package in ("numpy", "scipy", "mujoco", "mink", "qpsolvers", "daqp"):
        print(f"{package}=={importlib.metadata.version(package)}")
    print("无硬件自检完成；真实手套采集、姿态标定及灵巧手联调仍需实机验收。")


if __name__ == "__main__":
    main()
