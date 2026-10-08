// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rysen_apexhand_msgs:msg/HardwareErrors.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__HARDWARE_ERRORS__TRAITS_HPP_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__HARDWARE_ERRORS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rysen_apexhand_msgs/msg/detail/hardware_errors__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rysen_apexhand_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HardwareErrors & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: device_error_code
  {
    out << "device_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.device_error_code, out);
    out << ", ";
  }

  // member: thumb_error_code
  {
    out << "thumb_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.thumb_error_code, out);
    out << ", ";
  }

  // member: index_error_code
  {
    out << "index_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.index_error_code, out);
    out << ", ";
  }

  // member: middle_error_code
  {
    out << "middle_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.middle_error_code, out);
    out << ", ";
  }

  // member: ring_error_code
  {
    out << "ring_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.ring_error_code, out);
    out << ", ";
  }

  // member: little_error_code
  {
    out << "little_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.little_error_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HardwareErrors & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: device_error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.device_error_code, out);
    out << "\n";
  }

  // member: thumb_error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thumb_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.thumb_error_code, out);
    out << "\n";
  }

  // member: index_error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.index_error_code, out);
    out << "\n";
  }

  // member: middle_error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "middle_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.middle_error_code, out);
    out << "\n";
  }

  // member: ring_error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ring_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.ring_error_code, out);
    out << "\n";
  }

  // member: little_error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "little_error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.little_error_code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HardwareErrors & msg, bool use_flow_style = false)
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
  const rysen_apexhand_msgs::msg::HardwareErrors & msg,
  std::ostream & out, size_t indentation = 0)
{
  rysen_apexhand_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rysen_apexhand_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rysen_apexhand_msgs::msg::HardwareErrors & msg)
{
  return rysen_apexhand_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rysen_apexhand_msgs::msg::HardwareErrors>()
{
  return "rysen_apexhand_msgs::msg::HardwareErrors";
}

template<>
inline const char * name<rysen_apexhand_msgs::msg::HardwareErrors>()
{
  return "rysen_apexhand_msgs/msg/HardwareErrors";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::msg::HardwareErrors>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rysen_apexhand_msgs::msg::HardwareErrors>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rysen_apexhand_msgs::msg::HardwareErrors>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__HARDWARE_ERRORS__TRAITS_HPP_
