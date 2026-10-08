// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rysen_apexhand_msgs:srv/GetVersionInfo.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__GET_VERSION_INFO__TRAITS_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__GET_VERSION_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rysen_apexhand_msgs/srv/detail/get_version_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rysen_apexhand_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetVersionInfo_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: ip
  {
    out << "ip: ";
    rosidl_generator_traits::value_to_yaml(msg.ip, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetVersionInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ip: ";
    rosidl_generator_traits::value_to_yaml(msg.ip, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetVersionInfo_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rysen_apexhand_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rysen_apexhand_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rysen_apexhand_msgs::srv::GetVersionInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rysen_apexhand_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rysen_apexhand_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rysen_apexhand_msgs::srv::GetVersionInfo_Request & msg)
{
  return rysen_apexhand_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rysen_apexhand_msgs::srv::GetVersionInfo_Request>()
{
  return "rysen_apexhand_msgs::srv::GetVersionInfo_Request";
}

template<>
inline const char * name<rysen_apexhand_msgs::srv::GetVersionInfo_Request>()
{
  return "rysen_apexhand_msgs/srv/GetVersionInfo_Request";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::srv::GetVersionInfo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rysen_apexhand_msgs::srv::GetVersionInfo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rysen_apexhand_msgs::srv::GetVersionInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rysen_apexhand_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetVersionInfo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sdk_version
  {
    out << "sdk_version: ";
    rosidl_generator_traits::value_to_yaml(msg.sdk_version, out);
    out << ", ";
  }

  // member: hand_firmware_version
  {
    out << "hand_firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_firmware_version, out);
    out << ", ";
  }

  // member: touch_sensor_version
  {
    out << "touch_sensor_version: ";
    rosidl_generator_traits::value_to_yaml(msg.touch_sensor_version, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetVersionInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sdk_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sdk_version: ";
    rosidl_generator_traits::value_to_yaml(msg.sdk_version, out);
    out << "\n";
  }

  // member: hand_firmware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_firmware_version, out);
    out << "\n";
  }

  // member: touch_sensor_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "touch_sensor_version: ";
    rosidl_generator_traits::value_to_yaml(msg.touch_sensor_version, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetVersionInfo_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rysen_apexhand_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rysen_apexhand_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rysen_apexhand_msgs::srv::GetVersionInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rysen_apexhand_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rysen_apexhand_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rysen_apexhand_msgs::srv::GetVersionInfo_Response & msg)
{
  return rysen_apexhand_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rysen_apexhand_msgs::srv::GetVersionInfo_Response>()
{
  return "rysen_apexhand_msgs::srv::GetVersionInfo_Response";
}

template<>
inline const char * name<rysen_apexhand_msgs::srv::GetVersionInfo_Response>()
{
  return "rysen_apexhand_msgs/srv/GetVersionInfo_Response";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::srv::GetVersionInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rysen_apexhand_msgs::srv::GetVersionInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rysen_apexhand_msgs::srv::GetVersionInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rysen_apexhand_msgs::srv::GetVersionInfo>()
{
  return "rysen_apexhand_msgs::srv::GetVersionInfo";
}

template<>
inline const char * name<rysen_apexhand_msgs::srv::GetVersionInfo>()
{
  return "rysen_apexhand_msgs/srv/GetVersionInfo";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::srv::GetVersionInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<rysen_apexhand_msgs::srv::GetVersionInfo_Request>::value &&
    has_fixed_size<rysen_apexhand_msgs::srv::GetVersionInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<rysen_apexhand_msgs::srv::GetVersionInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<rysen_apexhand_msgs::srv::GetVersionInfo_Request>::value &&
    has_bounded_size<rysen_apexhand_msgs::srv::GetVersionInfo_Response>::value
  >
{
};

template<>
struct is_service<rysen_apexhand_msgs::srv::GetVersionInfo>
  : std::true_type
{
};

template<>
struct is_service_request<rysen_apexhand_msgs::srv::GetVersionInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rysen_apexhand_msgs::srv::GetVersionInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__GET_VERSION_INFO__TRAITS_HPP_
