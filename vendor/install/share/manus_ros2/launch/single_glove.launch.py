from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue


def generate_launch_description():
    calibration_file_arg = DeclareLaunchArgument(
        "calibration_file",
        default_value="",
        description="Relative or absolute path to the single glove .mcal calibration file",
    )
    calibration_glove_id_arg = DeclareLaunchArgument(
        "calibration_glove_id",
        default_value="",
        description="Glove ID for single glove calibration (decimal or 0x hex string)",
    )
    runtime_calibration_file_arg = DeclareLaunchArgument(
        "runtime_calibration_file",
        default_value="",
        description="Runtime MANUS pose calibration YAML; empty uses ROS_HOME",
    )

    manus_node = Node(
        package="manus_ros2",
        executable="manus_data_publisher",
        name="manus_data_publisher",
        output="screen",
        parameters=[
            {
                "calibration_file": ParameterValue(
                    LaunchConfiguration("calibration_file"), value_type=str
                ),
                "calibration_glove_id": ParameterValue(
                    LaunchConfiguration("calibration_glove_id"), value_type=str
                ),
                "runtime_calibration_file": ParameterValue(
                    LaunchConfiguration("runtime_calibration_file"), value_type=str
                ),
            }
        ],
    )

    return LaunchDescription(
        [
            calibration_file_arg,
            calibration_glove_id_arg,
            runtime_calibration_file_arg,
            manus_node,
        ]
    )
