// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rysen_apexhand_msgs:srv/GetConnectionInfo.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__GET_CONNECTION_INFO__TRAITS_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__GET_CONNECTION_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rysen_apexhand_msgs/srv/detail/get_connection_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rysen_apexhand_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetConnectionInfo_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetConnectionInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetConnectionInfo_Request & msg, bool use_flow_style = false)
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
  const rysen_apexhand_msgs::srv::GetConnectionInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rysen_apexhand_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rysen_apexhand_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rysen_apexhand_msgs::srv::GetConnectionInfo_Request & msg)
{
  return rysen_apexhand_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rysen_apexhand_msgs::srv::GetConnectionInfo_Request>()
{
  return "rysen_apexhand_msgs::srv::GetConnectionInfo_Request";
}

template<>
inline const char * name<rysen_apexhand_msgs::srv::GetConnectionInfo_Request>()
{
  return "rysen_apexhand_msgs/srv/GetConnectionInfo_Request";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::srv::GetConnectionInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rysen_apexhand_msgs::srv::GetConnectionInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rysen_apexhand_msgs::srv::GetConnectionInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rysen_apexhand_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetConnectionInfo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ips
  {
    if (msg.ips.size() == 0) {
      out << "ips: []";
    } else {
      out << "ips: [";
      size_t pending_items = msg.ips.size();
      for (auto item : msg.ips) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: connected
  {
    if (msg.connected.size() == 0) {
      out << "connected: []";
    } else {
      out << "connected: [";
      size_t pending_items = msg.connected.size();
      for (auto item : msg.connected) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: device_ips
  {
    if (msg.device_ips.size() == 0) {
      out << "device_ips: []";
    } else {
      out << "device_ips: [";
      size_t pending_items = msg.device_ips.size();
      for (auto item : msg.device_ips) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: hand_sides
  {
    if (msg.hand_sides.size() == 0) {
      out << "hand_sides: []";
    } else {
      out << "hand_sides: [";
      size_t pending_items = msg.hand_sides.size();
      for (auto item : msg.hand_sides) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: hardware_uids
  {
    if (msg.hardware_uids.size() == 0) {
      out << "hardware_uids: []";
    } else {
      out << "hardware_uids: [";
      size_t pending_items = msg.hardware_uids.size();
      for (auto item : msg.hardware_uids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetConnectionInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ips
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ips.size() == 0) {
      out << "ips: []\n";
    } else {
      out << "ips:\n";
      for (auto item : msg.ips) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.connected.size() == 0) {
      out << "connected: []\n";
    } else {
      out << "connected:\n";
      for (auto item : msg.connected) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: device_ips
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.device_ips.size() == 0) {
      out << "device_ips: []\n";
    } else {
      out << "device_ips:\n";
      for (auto item : msg.device_ips) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: hand_sides
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hand_sides.size() == 0) {
      out << "hand_sides: []\n";
    } else {
      out << "hand_sides:\n";
      for (auto item : msg.hand_sides) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: hardware_uids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hardware_uids.size() == 0) {
      out << "hardware_uids: []\n";
    } else {
      out << "hardware_uids:\n";
      for (auto item : msg.hardware_uids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetConnectionInfo_Response & msg, bool use_flow_style = false)
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
  const rysen_apexhand_msgs::srv::GetConnectionInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rysen_apexhand_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rysen_apexhand_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rysen_apexhand_msgs::srv::GetConnectionInfo_Response & msg)
{
  return rysen_apexhand_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rysen_apexhand_msgs::srv::GetConnectionInfo_Response>()
{
  return "rysen_apexhand_msgs::srv::GetConnectionInfo_Response";
}

template<>
inline const char * name<rysen_apexhand_msgs::srv::GetConnectionInfo_Response>()
{
  return "rysen_apexhand_msgs/srv/GetConnectionInfo_Response";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::srv::GetConnectionInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rysen_apexhand_msgs::srv::GetConnectionInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rysen_apexhand_msgs::srv::GetConnectionInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rysen_apexhand_msgs::srv::GetConnectionInfo>()
{
  return "rysen_apexhand_msgs::srv::GetConnectionInfo";
}

template<>
inline const char * name<rysen_apexhand_msgs::srv::GetConnectionInfo>()
{
  return "rysen_apexhand_msgs/srv/GetConnectionInfo";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::srv::GetConnectionInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<rysen_apexhand_msgs::srv::GetConnectionInfo_Request>::value &&
    has_fixed_size<rysen_apexhand_msgs::srv::GetConnectionInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<rysen_apexhand_msgs::srv::GetConnectionInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<rysen_apexhand_msgs::srv::GetConnectionInfo_Request>::value &&
    has_bounded_size<rysen_apexhand_msgs::srv::GetConnectionInfo_Response>::value
  >
{
};

template<>
struct is_service<rysen_apexhand_msgs::srv::GetConnectionInfo>
  : std::true_type
{
};

template<>
struct is_service_request<rysen_apexhand_msgs::srv::GetConnectionInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rysen_apexhand_msgs::srv::GetConnectionInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__GET_CONNECTION_INFO__TRAITS_HPP_
