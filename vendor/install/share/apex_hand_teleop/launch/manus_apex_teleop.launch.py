from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue


def generate_launch_description():
    """Launch ONLY the teleop manager.

    Glove publisher and retargeting stay stopped until
    /rysen/apexhand/start_manus_teleop is called with a start command.
    """
    glove_topic_arg = DeclareLaunchArgument(
        "glove_topic",
        default_value="/manus_glove_0",
        description="Primary MANUS glove topic used after teleop start.",
    )
    calibration_file_arg = DeclareLaunchArgument(
        "calibration_file",
        default_value="",
        description="Relative or absolute path to the single glove .mcal calibration file.",
    )
    calibration_glove_id_arg = DeclareLaunchArgument(
        "calibration_glove_id",
        default_value="",
        description="Glove ID for single glove calibration, decimal or 0x hex string.",
    )
    runtime_calibration_file_arg = DeclareLaunchArgument(
        "runtime_calibration_file",
        default_value="",
        description="Runtime MANUS pose calibration YAML; empty uses ROS_HOME.",
    )
    model_xml_arg = DeclareLaunchArgument(
        "model_xml",
        default_value="",
        description="Optional MuJoCo XML path. Empty uses packaged Apex left hand scene.",
    )
    rate_hz_arg = DeclareLaunchArgument(
        "rate_hz",
        default_value="500.0",
        description="IK update frequency for the retarget child process.",
    )
    enable_viewer_arg = DeclareLaunchArgument(
        "enable_viewer",
        default_value="false",
        description="Open MuJoCo viewer in the retarget child (after service start).",
    )
    follow_topic_suffix_arg = DeclareLaunchArgument(
        "follow_topic_suffix",
        default_value="move_j_position_follow_command",
        description="ApexHand follow topic suffix under rysen/apexhand/ip_<IP>/.",
    )
    apexhand_ip_arg = DeclareLaunchArgument(
        "apexhand_ip",
        default_value="192.168.0.102",
        description="Fallback ApexHand IP (routing prefers get_connection_info).",
    )
    apexhand_command_filter_window_size_arg = DeclareLaunchArgument(
        "apexhand_command_filter_window_size",
        default_value="10",
        description="Moving-average window size for SDK joint commands.",
    )

    manager_node = Node(
        package="apex_hand_teleop",
        executable="manus_teleop_manager",
        name="manus_teleop_manager",
        output="screen",
        parameters=[
            {
                "glove_topic": ParameterValue(
                    LaunchConfiguration("glove_topic"), value_type=str
                ),
                "calibration_file": ParameterValue(
                    LaunchConfiguration("calibration_file"), value_type=str
                ),
                "calibration_glove_id": ParameterValue(
                    LaunchConfiguration("calibration_glove_id"), value_type=str
                ),
                "runtime_calibration_file": ParameterValue(
                    LaunchConfiguration("runtime_calibration_file"), value_type=str
                ),
                "model_xml": ParameterValue(
                    LaunchConfiguration("model_xml"), value_type=str
                ),
                "rate_hz": ParameterValue(
                    LaunchConfiguration("rate_hz"), value_type=float
                ),
                "enable_viewer": ParameterValue(
                    LaunchConfiguration("enable_viewer"), value_type=bool
                ),
                "follow_topic_suffix": ParameterValue(
                    LaunchConfiguration("follow_topic_suffix"), value_type=str
                ),
                "apexhand_ip": ParameterValue(
                    LaunchConfiguration("apexhand_ip"), value_type=str
                ),
                "apexhand_command_filter_window_size": ParameterValue(
                    LaunchConfiguration("apexhand_command_filter_window_size"),
                    value_type=int,
                ),
            }
        ],
    )

    return LaunchDescription(
        [
            glove_topic_arg,
            calibration_file_arg,
            calibration_glove_id_arg,
            runtime_calibration_file_arg,
            model_xml_arg,
            rate_hz_arg,
            enable_viewer_arg,
            follow_topic_suffix_arg,
            apexhand_ip_arg,
            apexhand_command_filter_window_size_arg,
            manager_node,
        ]
    )
