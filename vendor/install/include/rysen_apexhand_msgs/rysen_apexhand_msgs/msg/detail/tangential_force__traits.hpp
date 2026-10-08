// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rysen_apexhand_msgs:msg/TangentialForce.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__TANGENTIAL_FORCE__TRAITS_HPP_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__TANGENTIAL_FORCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rysen_apexhand_msgs/msg/detail/tangential_force__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rysen_apexhand_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TangentialForce & msg,
  std::ostream & out)
{
  out << "{";
  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << ", ";
  }

  // member: magnitude
  {
    out << "magnitude: ";
    rosidl_generator_traits::value_to_yaml(msg.magnitude, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TangentialForce & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }

  // member: magnitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "magnitude: ";
    rosidl_generator_traits::value_to_yaml(msg.magnitude, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TangentialForce & msg, bool use_flow_style = false)
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
  const rysen_apexhand_msgs::msg::TangentialForce & msg,
  std::ostream & out, size_t indentation = 0)
{
  rysen_apexhand_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rysen_apexhand_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rysen_apexhand_msgs::msg::TangentialForce & msg)
{
  return rysen_apexhand_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rysen_apexhand_msgs::msg::TangentialForce>()
{
  return "rysen_apexhand_msgs::msg::TangentialForce";
}

template<>
inline const char * name<rysen_apexhand_msgs::msg::TangentialForce>()
{
  return "rysen_apexhand_msgs/msg/TangentialForce";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::msg::TangentialForce>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rysen_apexhand_msgs::msg::TangentialForce>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rysen_apexhand_msgs::msg::TangentialForce>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__TANGENTIAL_FORCE__TRAITS_HPP_
