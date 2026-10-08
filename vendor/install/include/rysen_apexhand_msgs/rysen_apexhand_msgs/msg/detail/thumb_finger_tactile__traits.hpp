// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rysen_apexhand_msgs:msg/ThumbFingerTactile.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__THUMB_FINGER_TACTILE__TRAITS_HPP_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__THUMB_FINGER_TACTILE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rysen_apexhand_msgs/msg/detail/thumb_finger_tactile__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'prox_pad'
// Member 'mid_pad'
// Member 'dist_pad'
#include "rysen_apexhand_msgs/msg/detail/tactile_image__traits.hpp"

namespace rysen_apexhand_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ThumbFingerTactile & msg,
  std::ostream & out)
{
  out << "{";
  // member: prox_pad
  {
    out << "prox_pad: ";
    to_flow_style_yaml(msg.prox_pad, out);
    out << ", ";
  }

  // member: mid_pad
  {
    out << "mid_pad: ";
    to_flow_style_yaml(msg.mid_pad, out);
    out << ", ";
  }

  // member: dist_pad
  {
    out << "dist_pad: ";
    to_flow_style_yaml(msg.dist_pad, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ThumbFingerTactile & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: prox_pad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prox_pad:\n";
    to_block_style_yaml(msg.prox_pad, out, indentation + 2);
  }

  // member: mid_pad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mid_pad:\n";
    to_block_style_yaml(msg.mid_pad, out, indentation + 2);
  }

  // member: dist_pad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist_pad:\n";
    to_block_style_yaml(msg.dist_pad, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ThumbFingerTactile & msg, bool use_flow_style = false)
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
  const rysen_apexhand_msgs::msg::ThumbFingerTactile & msg,
  std::ostream & out, size_t indentation = 0)
{
  rysen_apexhand_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rysen_apexhand_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rysen_apexhand_msgs::msg::ThumbFingerTactile & msg)
{
  return rysen_apexhand_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rysen_apexhand_msgs::msg::ThumbFingerTactile>()
{
  return "rysen_apexhand_msgs::msg::ThumbFingerTactile";
}

template<>
inline const char * name<rysen_apexhand_msgs::msg::ThumbFingerTactile>()
{
  return "rysen_apexhand_msgs/msg/ThumbFingerTactile";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::msg::ThumbFingerTactile>
  : std::integral_constant<bool, has_fixed_size<rysen_apexhand_msgs::msg::TactileImage>::value> {};

template<>
struct has_bounded_size<rysen_apexhand_msgs::msg::ThumbFingerTactile>
  : std::integral_constant<bool, has_bounded_size<rysen_apexhand_msgs::msg::TactileImage>::value> {};

template<>
struct is_message<rysen_apexhand_msgs::msg::ThumbFingerTactile>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__THUMB_FINGER_TACTILE__TRAITS_HPP_
