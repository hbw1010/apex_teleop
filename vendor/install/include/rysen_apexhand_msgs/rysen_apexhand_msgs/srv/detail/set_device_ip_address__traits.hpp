// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rysen_apexhand_msgs:srv/SetDeviceIPAddress.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_DEVICE_IP_ADDRESS__TRAITS_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_DEVICE_IP_ADDRESS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rysen_apexhand_msgs/srv/detail/set_device_ip_address__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rysen_apexhand_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDeviceIPAddress_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: original_ip
  {
    out << "original_ip: ";
    rosidl_generator_traits::value_to_yaml(msg.original_ip, out);
    out << ", ";
  }

  // member: new_ip
  {
    out << "new_ip: ";
    rosidl_generator_traits::value_to_yaml(msg.new_ip, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetDeviceIPAddress_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: original_ip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "original_ip: ";
    rosidl_generator_traits::value_to_yaml(msg.original_ip, out);
    out << "\n";
  }

  // member: new_ip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_ip: ";
    rosidl_generator_traits::value_to_yaml(msg.new_ip, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetDeviceIPAddress_Request & msg, bool use_flow_style = false)
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
  const rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rysen_apexhand_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rysen_apexhand_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request & msg)
{
  return rysen_apexhand_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request>()
{
  return "rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request";
}

template<>
inline const char * name<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request>()
{
  return "rysen_apexhand_msgs/srv/SetDeviceIPAddress_Request";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rysen_apexhand_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDeviceIPAddress_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetDeviceIPAddress_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetDeviceIPAddress_Response & msg, bool use_flow_style = false)
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
  const rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rysen_apexhand_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rysen_apexhand_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response & msg)
{
  return rysen_apexhand_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response>()
{
  return "rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response";
}

template<>
inline const char * name<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response>()
{
  return "rysen_apexhand_msgs/srv/SetDeviceIPAddress_Response";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rysen_apexhand_msgs::srv::SetDeviceIPAddress>()
{
  return "rysen_apexhand_msgs::srv::SetDeviceIPAddress";
}

template<>
inline const char * name<rysen_apexhand_msgs::srv::SetDeviceIPAddress>()
{
  return "rysen_apexhand_msgs/srv/SetDeviceIPAddress";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::srv::SetDeviceIPAddress>
  : std::integral_constant<
    bool,
    has_fixed_size<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request>::value &&
    has_fixed_size<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response>::value
  >
{
};

template<>
struct has_bounded_size<rysen_apexhand_msgs::srv::SetDeviceIPAddress>
  : std::integral_constant<
    bool,
    has_bounded_size<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request>::value &&
    has_bounded_size<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response>::value
  >
{
};

template<>
struct is_service<rysen_apexhand_msgs::srv::SetDeviceIPAddress>
  : std::true_type
{
};

template<>
struct is_service_request<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_DEVICE_IP_ADDRESS__TRAITS_HPP_
