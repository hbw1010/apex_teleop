from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue


def generate_launch_description():
    left_calibration_file_arg = DeclareLaunchArgument(
        "left_calibration_file",
        default_value="",
        description="Absolute path to left glove .mcal calibration file",
    )
    left_calibration_glove_id_arg = DeclareLaunchArgument(
        "left_calibration_glove_id",
        default_value="",
        description="Left glove ID (decimal or 0x hex string)",
    )
    right_calibration_file_arg = DeclareLaunchArgument(
        "right_calibration_file",
        default_value="",
        description="Absolute path to right glove .mcal calibration file",
    )
    right_calibration_glove_id_arg = DeclareLaunchArgument(
        "right_calibration_glove_id",
        default_value="",
        description="Right glove ID (decimal or 0x hex string)",
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
                "left_calibration_file": ParameterValue(
                    LaunchConfiguration("left_calibration_file"), value_type=str
                ),
                "left_calibration_glove_id": ParameterValue(
                    LaunchConfiguration("left_calibration_glove_id"), value_type=str
                ),
                "right_calibration_file": ParameterValue(
                    LaunchConfiguration("right_calibration_file"), value_type=str
                ),
                "right_calibration_glove_id": ParameterValue(
                    LaunchConfiguration("right_calibration_glove_id"), value_type=str
                ),
                "runtime_calibration_file": ParameterValue(
                    LaunchConfiguration("runtime_calibration_file"), value_type=str
                ),
            }
        ],
    )

    return LaunchDescription(
        [
            left_calibration_file_arg,
            left_calibration_glove_id_arg,
            right_calibration_file_arg,
            right_calibration_glove_id_arg,
            runtime_calibration_file_arg,
            manus_node,
        ]
    )
