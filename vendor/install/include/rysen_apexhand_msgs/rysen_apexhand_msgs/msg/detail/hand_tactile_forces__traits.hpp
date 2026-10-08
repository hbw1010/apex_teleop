// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rysen_apexhand_msgs:msg/HandTactileForces.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__HAND_TACTILE_FORCES__TRAITS_HPP_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__HAND_TACTILE_FORCES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rysen_apexhand_msgs/msg/detail/hand_tactile_forces__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'index'
// Member 'middle'
// Member 'ring'
// Member 'little'
#include "rysen_apexhand_msgs/msg/detail/common_finger_tactile__traits.hpp"
// Member 'thumb'
#include "rysen_apexhand_msgs/msg/detail/thumb_finger_tactile__traits.hpp"
// Member 'palm_center'
#include "rysen_apexhand_msgs/msg/detail/tactile_image__traits.hpp"

namespace rysen_apexhand_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HandTactileForces & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: index
  {
    out << "index: ";
    to_flow_style_yaml(msg.index, out);
    out << ", ";
  }

  // member: middle
  {
    out << "middle: ";
    to_flow_style_yaml(msg.middle, out);
    out << ", ";
  }

  // member: ring
  {
    out << "ring: ";
    to_flow_style_yaml(msg.ring, out);
    out << ", ";
  }

  // member: little
  {
    out << "little: ";
    to_flow_style_yaml(msg.little, out);
    out << ", ";
  }

  // member: thumb
  {
    out << "thumb: ";
    to_flow_style_yaml(msg.thumb, out);
    out << ", ";
  }

  // member: palm_center
  {
    out << "palm_center: ";
    to_flow_style_yaml(msg.palm_center, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HandTactileForces & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index:\n";
    to_block_style_yaml(msg.index, out, indentation + 2);
  }

  // member: middle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "middle:\n";
    to_block_style_yaml(msg.middle, out, indentation + 2);
  }

  // member: ring
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ring:\n";
    to_block_style_yaml(msg.ring, out, indentation + 2);
  }

  // member: little
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "little:\n";
    to_block_style_yaml(msg.little, out, indentation + 2);
  }

  // member: thumb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thumb:\n";
    to_block_style_yaml(msg.thumb, out, indentation + 2);
  }

  // member: palm_center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "palm_center:\n";
    to_block_style_yaml(msg.palm_center, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HandTactileForces & msg, bool use_flow_style = false)
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

}  // namespace rysen_apexhand_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rysen_apexhand_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rysen_apexhand_msgs::msg::HandTactileForces & msg,
  std::ostream & out, size_t indentation = 0)
{
  rysen_apexhand_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rysen_apexhand_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rysen_apexhand_msgs::msg::HandTactileForces & msg)
{
  return rysen_apexhand_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rysen_apexhand_msgs::msg::HandTactileForces>()
{
  return "rysen_apexhand_msgs::msg::HandTactileForces";
}

template<>
inline const char * name<rysen_apexhand_msgs::msg::HandTactileForces>()
{
  return "rysen_apexhand_msgs/msg/HandTactileForces";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::msg::HandTactileForces>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<rysen_apexhand_msgs::msg::CommonFingerTactile>::value && has_fixed_size<rysen_apexhand_msgs::msg::TactileImage>::value && has_fixed_size<rysen_apexhand_msgs::msg::ThumbFingerTactile>::value> {};

template<>
struct has_bounded_size<rysen_apexhand_msgs::msg::HandTactileForces>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<rysen_apexhand_msgs::msg::CommonFingerTactile>::value && has_bounded_size<rysen_apexhand_msgs::msg::TactileImage>::value && has_bounded_size<rysen_apexhand_msgs::msg::ThumbFingerTactile>::value> {};

template<>
struct is_message<rysen_apexhand_msgs::msg::HandTactileForces>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__HAND_TACTILE_FORCES__TRAITS_HPP_
