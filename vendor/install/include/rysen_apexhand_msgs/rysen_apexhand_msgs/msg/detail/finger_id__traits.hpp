// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rysen_apexhand_msgs:msg/FingerId.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__FINGER_ID__TRAITS_HPP_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__FINGER_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rysen_apexhand_msgs/msg/detail/finger_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rysen_apexhand_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FingerId & msg,
  std::ostream & out)
{
  out << "{";
  // member: finger_id
  {
    out << "finger_id: ";
    rosidl_generator_traits::value_to_yaml(msg.finger_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FingerId & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: finger_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "finger_id: ";
    rosidl_generator_traits::value_to_yaml(msg.finger_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FingerId & msg, bool use_flow_style = false)
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
  const rysen_apexhand_msgs::msg::FingerId & msg,
  std::ostream & out, size_t indentation = 0)
{
  rysen_apexhand_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rysen_apexhand_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rysen_apexhand_msgs::msg::FingerId & msg)
{
  return rysen_apexhand_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rysen_apexhand_msgs::msg::FingerId>()
{
  return "rysen_apexhand_msgs::msg::FingerId";
}

template<>
inline const char * name<rysen_apexhand_msgs::msg::FingerId>()
{
  return "rysen_apexhand_msgs/msg/FingerId";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::msg::FingerId>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rysen_apexhand_msgs::msg::FingerId>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rysen_apexhand_msgs::msg::FingerId>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__FINGER_ID__TRAITS_HPP_
