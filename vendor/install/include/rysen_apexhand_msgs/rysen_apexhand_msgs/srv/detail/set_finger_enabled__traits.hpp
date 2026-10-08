// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rysen_apexhand_msgs:srv/SetFingerEnabled.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_FINGER_ENABLED__TRAITS_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_FINGER_ENABLED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rysen_apexhand_msgs/srv/detail/set_finger_enabled__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'finger_ids'
#include "rysen_apexhand_msgs/msg/detail/finger_id__traits.hpp"

namespace rysen_apexhand_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetFingerEnabled_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: ip
  {
    out << "ip: ";
    rosidl_generator_traits::value_to_yaml(msg.ip, out);
    out << ", ";
  }

  // member: finger_ids
  {
    if (msg.finger_ids.size() == 0) {
      out << "finger_ids: []";
    } else {
      out << "finger_ids: [";
      size_t pending_items = msg.finger_ids.size();
      for (auto item : msg.finger_ids) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetFingerEnabled_Request & msg,
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

  // member: finger_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.finger_ids.size() == 0) {
      out << "finger_ids: []\n";
    } else {
      out << "finger_ids:\n";
      for (auto item : msg.finger_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetFingerEnabled_Request & msg, bool use_flow_style = false)
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
  const rysen_apexhand_msgs::srv::SetFingerEnabled_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rysen_apexhand_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rysen_apexhand_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rysen_apexhand_msgs::srv::SetFingerEnabled_Request & msg)
{
  return rysen_apexhand_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rysen_apexhand_msgs::srv::SetFingerEnabled_Request>()
{
  return "rysen_apexhand_msgs::srv::SetFingerEnabled_Request";
}

template<>
inline const char * name<rysen_apexhand_msgs::srv::SetFingerEnabled_Request>()
{
  return "rysen_apexhand_msgs/srv/SetFingerEnabled_Request";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::srv::SetFingerEnabled_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rysen_apexhand_msgs::srv::SetFingerEnabled_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rysen_apexhand_msgs::srv::SetFingerEnabled_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rysen_apexhand_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetFingerEnabled_Response & msg,
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
  const SetFingerEnabled_Response & msg,
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

inline std::string to_yaml(const SetFingerEnabled_Response & msg, bool use_flow_style = false)
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
  const rysen_apexhand_msgs::srv::SetFingerEnabled_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rysen_apexhand_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rysen_apexhand_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rysen_apexhand_msgs::srv::SetFingerEnabled_Response & msg)
{
  return rysen_apexhand_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rysen_apexhand_msgs::srv::SetFingerEnabled_Response>()
{
  return "rysen_apexhand_msgs::srv::SetFingerEnabled_Response";
}

template<>
inline const char * name<rysen_apexhand_msgs::srv::SetFingerEnabled_Response>()
{
  return "rysen_apexhand_msgs/srv/SetFingerEnabled_Response";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::srv::SetFingerEnabled_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rysen_apexhand_msgs::srv::SetFingerEnabled_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rysen_apexhand_msgs::srv::SetFingerEnabled_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rysen_apexhand_msgs::srv::SetFingerEnabled>()
{
  return "rysen_apexhand_msgs::srv::SetFingerEnabled";
}

template<>
inline const char * name<rysen_apexhand_msgs::srv::SetFingerEnabled>()
{
  return "rysen_apexhand_msgs/srv/SetFingerEnabled";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::srv::SetFingerEnabled>
  : std::integral_constant<
    bool,
    has_fixed_size<rysen_apexhand_msgs::srv::SetFingerEnabled_Request>::value &&
    has_fixed_size<rysen_apexhand_msgs::srv::SetFingerEnabled_Response>::value
  >
{
};

template<>
struct has_bounded_size<rysen_apexhand_msgs::srv::SetFingerEnabled>
  : std::integral_constant<
    bool,
    has_bounded_size<rysen_apexhand_msgs::srv::SetFingerEnabled_Request>::value &&
    has_bounded_size<rysen_apexhand_msgs::srv::SetFingerEnabled_Response>::value
  >
{
};

template<>
struct is_service<rysen_apexhand_msgs::srv::SetFingerEnabled>
  : std::true_type
{
};

template<>
struct is_service_request<rysen_apexhand_msgs::srv::SetFingerEnabled_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rysen_apexhand_msgs::srv::SetFingerEnabled_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_FINGER_ENABLED__TRAITS_HPP_
