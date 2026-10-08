// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rysen_apexhand_msgs:msg/TactileImage.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__TACTILE_IMAGE__TRAITS_HPP_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__TACTILE_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rysen_apexhand_msgs/msg/detail/tactile_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tangential_forces'
#include "rysen_apexhand_msgs/msg/detail/tangential_force__traits.hpp"

namespace rysen_apexhand_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TactileImage & msg,
  std::ostream & out)
{
  out << "{";
  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: gray_image
  {
    if (msg.gray_image.size() == 0) {
      out << "gray_image: []";
    } else {
      out << "gray_image: [";
      size_t pending_items = msg.gray_image.size();
      for (auto item : msg.gray_image) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tangential_forces
  {
    out << "tangential_forces: ";
    to_flow_style_yaml(msg.tangential_forces, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TactileImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: gray_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gray_image.size() == 0) {
      out << "gray_image: []\n";
    } else {
      out << "gray_image:\n";
      for (auto item : msg.gray_image) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tangential_forces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tangential_forces:\n";
    to_block_style_yaml(msg.tangential_forces, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TactileImage & msg, bool use_flow_style = false)
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
  const rysen_apexhand_msgs::msg::TactileImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  rysen_apexhand_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rysen_apexhand_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rysen_apexhand_msgs::msg::TactileImage & msg)
{
  return rysen_apexhand_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rysen_apexhand_msgs::msg::TactileImage>()
{
  return "rysen_apexhand_msgs::msg::TactileImage";
}

template<>
inline const char * name<rysen_apexhand_msgs::msg::TactileImage>()
{
  return "rysen_apexhand_msgs/msg/TactileImage";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::msg::TactileImage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rysen_apexhand_msgs::msg::TactileImage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rysen_apexhand_msgs::msg::TactileImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__TACTILE_IMAGE__TRAITS_HPP_
