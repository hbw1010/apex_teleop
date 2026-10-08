// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rysen_apexhand_msgs:srv/SetMaxJointSpeed.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_MAX_JOINT_SPEED__TRAITS_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_MAX_JOINT_SPEED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rysen_apexhand_msgs/srv/detail/set_max_joint_speed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rysen_apexhand_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMaxJointSpeed_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: ip
  {
    out << "ip: ";
    rosidl_generator_traits::value_to_yaml(msg.ip, out);
    out << ", ";
  }

  // member: get_only
  {
    out << "get_only: ";
    rosidl_generator_traits::value_to_yaml(msg.get_only, out);
    out << ", ";
  }

  // member: joint_ids
  {
    if (msg.joint_ids.size() == 0) {
      out << "joint_ids: []";
    } else {
      out << "joint_ids: [";
      size_t pending_items = msg.joint_ids.size();
      for (auto item : msg.joint_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: max_speeds
  {
    if (msg.max_speeds.size() == 0) {
      out << "max_speeds: []";
    } else {
      out << "max_speeds: [";
      size_t pending_items = msg.max_speeds.size();
      for (auto item : msg.max_speeds) {
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
  const SetMaxJointSpeed_Request & msg,
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

  // member: get_only
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "get_only: ";
    rosidl_generator_traits::value_to_yaml(msg.get_only, out);
    out << "\n";
  }

  // member: joint_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_ids.size() == 0) {
      out << "joint_ids: []\n";
    } else {
      out << "joint_ids:\n";
      for (auto item : msg.joint_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: max_speeds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.max_speeds.size() == 0) {
      out << "max_speeds: []\n";
    } else {
      out << "max_speeds:\n";
      for (auto item : msg.max_speeds) {
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

inline std::string to_yaml(const SetMaxJointSpeed_Request & msg, bool use_flow_style = false)
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
  const rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rysen_apexhand_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rysen_apexhand_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request & msg)
{
  return rysen_apexhand_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request>()
{
  return "rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request";
}

template<>
inline const char * name<rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request>()
{
  return "rysen_apexhand_msgs/srv/SetMaxJointSpeed_Request";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rysen_apexhand_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMaxJointSpeed_Response & msg,
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
    out << ", ";
  }

  // member: max_speeds
  {
    if (msg.max_speeds.size() == 0) {
      out << "max_speeds: []";
    } else {
      out << "max_speeds: [";
      size_t pending_items = msg.max_speeds.size();
      for (auto item : msg.max_speeds) {
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
  const SetMaxJointSpeed_Response & msg,
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

  // member: max_speeds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.max_speeds.size() == 0) {
      out << "max_speeds: []\n";
    } else {
      out << "max_speeds:\n";
      for (auto item : msg.max_speeds) {
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

inline std::string to_yaml(const SetMaxJointSpeed_Response & msg, bool use_flow_style = false)
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
  const rysen_apexhand_msgs::srv::SetMaxJointSpeed_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rysen_apexhand_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rysen_apexhand_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rysen_apexhand_msgs::srv::SetMaxJointSpeed_Response & msg)
{
  return rysen_apexhand_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rysen_apexhand_msgs::srv::SetMaxJointSpeed_Response>()
{
  return "rysen_apexhand_msgs::srv::SetMaxJointSpeed_Response";
}

template<>
inline const char * name<rysen_apexhand_msgs::srv::SetMaxJointSpeed_Response>()
{
  return "rysen_apexhand_msgs/srv/SetMaxJointSpeed_Response";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::srv::SetMaxJointSpeed_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rysen_apexhand_msgs::srv::SetMaxJointSpeed_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rysen_apexhand_msgs::srv::SetMaxJointSpeed_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rysen_apexhand_msgs::srv::SetMaxJointSpeed>()
{
  return "rysen_apexhand_msgs::srv::SetMaxJointSpeed";
}

template<>
inline const char * name<rysen_apexhand_msgs::srv::SetMaxJointSpeed>()
{
  return "rysen_apexhand_msgs/srv/SetMaxJointSpeed";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::srv::SetMaxJointSpeed>
  : std::integral_constant<
    bool,
    has_fixed_size<rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request>::value &&
    has_fixed_size<rysen_apexhand_msgs::srv::SetMaxJointSpeed_Response>::value
  >
{
};

template<>
struct has_bounded_size<rysen_apexhand_msgs::srv::SetMaxJointSpeed>
  : std::integral_constant<
    bool,
    has_bounded_size<rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request>::value &&
    has_bounded_size<rysen_apexhand_msgs::srv::SetMaxJointSpeed_Response>::value
  >
{
};

template<>
struct is_service<rysen_apexhand_msgs::srv::SetMaxJointSpeed>
  : std::true_type
{
};

template<>
struct is_service_request<rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rysen_apexhand_msgs::srv::SetMaxJointSpeed_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_MAX_JOINT_SPEED__TRAITS_HPP_
