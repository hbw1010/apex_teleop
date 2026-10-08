// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from manus_ros2_msgs:msg/ManusRawNode.idl
// generated code does not contain a copyright notice

#ifndef MANUS_ROS2_MSGS__MSG__DETAIL__MANUS_RAW_NODE__TRAITS_HPP_
#define MANUS_ROS2_MSGS__MSG__DETAIL__MANUS_RAW_NODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "manus_ros2_msgs/msg/detail/manus_raw_node__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace manus_ros2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ManusRawNode & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_id
  {
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << ", ";
  }

  // member: parent_node_id
  {
    out << "parent_node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_node_id, out);
    out << ", ";
  }

  // member: joint_type
  {
    out << "joint_type: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_type, out);
    out << ", ";
  }

  // member: chain_type
  {
    out << "chain_type: ";
    rosidl_generator_traits::value_to_yaml(msg.chain_type, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ManusRawNode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << "\n";
  }

  // member: parent_node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parent_node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_node_id, out);
    out << "\n";
  }

  // member: joint_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_type: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_type, out);
    out << "\n";
  }

  // member: chain_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chain_type: ";
    rosidl_generator_traits::value_to_yaml(msg.chain_type, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ManusRawNode & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace manus_ros2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use manus_ros2_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const manus_ros2_msgs::msg::ManusRawNode & msg,
  std::ostream & out, size_t indentation = 0)
{
  manus_ros2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use manus_ros2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const manus_ros2_msgs::msg::ManusRawNode & msg)
{
  return manus_ros2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<manus_ros2_msgs::msg::ManusRawNode>()
{
  return "manus_ros2_msgs::msg::ManusRawNode";
}

template<>
inline const char * name<manus_ros2_msgs::msg::ManusRawNode>()
{
  return "manus_ros2_msgs/msg/ManusRawNode";
}

template<>
struct has_fixed_size<manus_ros2_msgs::msg::ManusRawNode>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<manus_ros2_msgs::msg::ManusRawNode>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<manus_ros2_msgs::msg::ManusRawNode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MANUS_ROS2_MSGS__MSG__DETAIL__MANUS_RAW_NODE__TRAITS_HPP_
