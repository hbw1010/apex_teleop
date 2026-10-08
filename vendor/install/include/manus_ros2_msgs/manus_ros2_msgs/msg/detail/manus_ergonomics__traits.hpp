// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from manus_ros2_msgs:msg/ManusErgonomics.idl
// generated code does not contain a copyright notice

#ifndef MANUS_ROS2_MSGS__MSG__DETAIL__MANUS_ERGONOMICS__TRAITS_HPP_
#define MANUS_ROS2_MSGS__MSG__DETAIL__MANUS_ERGONOMICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "manus_ros2_msgs/msg/detail/manus_ergonomics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace manus_ros2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ManusErgonomics & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ManusErgonomics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ManusErgonomics & msg, bool use_flow_style = false)
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
  const manus_ros2_msgs::msg::ManusErgonomics & msg,
  std::ostream & out, size_t indentation = 0)
{
  manus_ros2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use manus_ros2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const manus_ros2_msgs::msg::ManusErgonomics & msg)
{
  return manus_ros2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<manus_ros2_msgs::msg::ManusErgonomics>()
{
  return "manus_ros2_msgs::msg::ManusErgonomics";
}

template<>
inline const char * name<manus_ros2_msgs::msg::ManusErgonomics>()
{
  return "manus_ros2_msgs/msg/ManusErgonomics";
}

template<>
struct has_fixed_size<manus_ros2_msgs::msg::ManusErgonomics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<manus_ros2_msgs::msg::ManusErgonomics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<manus_ros2_msgs::msg::ManusErgonomics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MANUS_ROS2_MSGS__MSG__DETAIL__MANUS_ERGONOMICS__TRAITS_HPP_
