// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rysen_apexhand_msgs:srv/ManusCalibration.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__MANUS_CALIBRATION__TRAITS_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__MANUS_CALIBRATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rysen_apexhand_msgs/srv/detail/manus_calibration__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rysen_apexhand_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ManusCalibration_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: side
  {
    out << "side: ";
    rosidl_generator_traits::value_to_yaml(msg.side, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ManusCalibration_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: side
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "side: ";
    rosidl_generator_traits::value_to_yaml(msg.side, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ManusCalibration_Request & msg, bool use_flow_style = false)
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
  const rysen_apexhand_msgs::srv::ManusCalibration_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rysen_apexhand_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rysen_apexhand_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rysen_apexhand_msgs::srv::ManusCalibration_Request & msg)
{
  return rysen_apexhand_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rysen_apexhand_msgs::srv::ManusCalibration_Request>()
{
  return "rysen_apexhand_msgs::srv::ManusCalibration_Request";
}

template<>
inline const char * name<rysen_apexhand_msgs::srv::ManusCalibration_Request>()
{
  return "rysen_apexhand_msgs/srv/ManusCalibration_Request";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::srv::ManusCalibration_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rysen_apexhand_msgs::srv::ManusCalibration_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rysen_apexhand_msgs::srv::ManusCalibration_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'four_fingers_together_tips'
// Member 'fist_tips'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rysen_apexhand_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ManusCalibration_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: theta_rad
  {
    out << "theta_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_rad, out);
    out << ", ";
  }

  // member: theta_deg
  {
    out << "theta_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg, out);
    out << ", ";
  }

  // member: four_fingers_together_tips
  {
    if (msg.four_fingers_together_tips.size() == 0) {
      out << "four_fingers_together_tips: []";
    } else {
      out << "four_fingers_together_tips: [";
      size_t pending_items = msg.four_fingers_together_tips.size();
      for (auto item : msg.four_fingers_together_tips) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fist_tips
  {
    if (msg.fist_tips.size() == 0) {
      out << "fist_tips: []";
    } else {
      out << "fist_tips: [";
      size_t pending_items = msg.fist_tips.size();
      for (auto item : msg.fist_tips) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sample_count
  {
    out << "sample_count: ";
    rosidl_generator_traits::value_to_yaml(msg.sample_count, out);
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
  const ManusCalibration_Response & msg,
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

  // member: theta_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_rad, out);
    out << "\n";
  }

  // member: theta_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_deg, out);
    out << "\n";
  }

  // member: four_fingers_together_tips
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.four_fingers_together_tips.size() == 0) {
      out << "four_fingers_together_tips: []\n";
    } else {
      out << "four_fingers_together_tips:\n";
      for (auto item : msg.four_fingers_together_tips) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: fist_tips
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fist_tips.size() == 0) {
      out << "fist_tips: []\n";
    } else {
      out << "fist_tips:\n";
      for (auto item : msg.fist_tips) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: sample_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sample_count: ";
    rosidl_generator_traits::value_to_yaml(msg.sample_count, out);
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

inline std::string to_yaml(const ManusCalibration_Response & msg, bool use_flow_style = false)
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
  const rysen_apexhand_msgs::srv::ManusCalibration_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rysen_apexhand_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rysen_apexhand_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rysen_apexhand_msgs::srv::ManusCalibration_Response & msg)
{
  return rysen_apexhand_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rysen_apexhand_msgs::srv::ManusCalibration_Response>()
{
  return "rysen_apexhand_msgs::srv::ManusCalibration_Response";
}

template<>
inline const char * name<rysen_apexhand_msgs::srv::ManusCalibration_Response>()
{
  return "rysen_apexhand_msgs/srv/ManusCalibration_Response";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::srv::ManusCalibration_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rysen_apexhand_msgs::srv::ManusCalibration_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rysen_apexhand_msgs::srv::ManusCalibration_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rysen_apexhand_msgs::srv::ManusCalibration>()
{
  return "rysen_apexhand_msgs::srv::ManusCalibration";
}

template<>
inline const char * name<rysen_apexhand_msgs::srv::ManusCalibration>()
{
  return "rysen_apexhand_msgs/srv/ManusCalibration";
}

template<>
struct has_fixed_size<rysen_apexhand_msgs::srv::ManusCalibration>
  : std::integral_constant<
    bool,
    has_fixed_size<rysen_apexhand_msgs::srv::ManusCalibration_Request>::value &&
    has_fixed_size<rysen_apexhand_msgs::srv::ManusCalibration_Response>::value
  >
{
};

template<>
struct has_bounded_size<rysen_apexhand_msgs::srv::ManusCalibration>
  : std::integral_constant<
    bool,
    has_bounded_size<rysen_apexhand_msgs::srv::ManusCalibration_Request>::value &&
    has_bounded_size<rysen_apexhand_msgs::srv::ManusCalibration_Response>::value
  >
{
};

template<>
struct is_service<rysen_apexhand_msgs::srv::ManusCalibration>
  : std::true_type
{
};

template<>
struct is_service_request<rysen_apexhand_msgs::srv::ManusCalibration_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rysen_apexhand_msgs::srv::ManusCalibration_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__MANUS_CALIBRATION__TRAITS_HPP_
