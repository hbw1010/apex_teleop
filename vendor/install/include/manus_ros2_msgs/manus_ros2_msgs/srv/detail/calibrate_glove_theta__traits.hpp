// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from manus_ros2_msgs:srv/CalibrateGloveTheta.idl
// generated code does not contain a copyright notice

#ifndef MANUS_ROS2_MSGS__SRV__DETAIL__CALIBRATE_GLOVE_THETA__TRAITS_HPP_
#define MANUS_ROS2_MSGS__SRV__DETAIL__CALIBRATE_GLOVE_THETA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "manus_ros2_msgs/srv/detail/calibrate_glove_theta__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace manus_ros2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalibrateGloveTheta_Request & msg,
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
  const CalibrateGloveTheta_Request & msg,
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

inline std::string to_yaml(const CalibrateGloveTheta_Request & msg, bool use_flow_style = false)
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

}  // namespace manus_ros2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use manus_ros2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const manus_ros2_msgs::srv::CalibrateGloveTheta_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  manus_ros2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use manus_ros2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const manus_ros2_msgs::srv::CalibrateGloveTheta_Request & msg)
{
  return manus_ros2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<manus_ros2_msgs::srv::CalibrateGloveTheta_Request>()
{
  return "manus_ros2_msgs::srv::CalibrateGloveTheta_Request";
}

template<>
inline const char * name<manus_ros2_msgs::srv::CalibrateGloveTheta_Request>()
{
  return "manus_ros2_msgs/srv/CalibrateGloveTheta_Request";
}

template<>
struct has_fixed_size<manus_ros2_msgs::srv::CalibrateGloveTheta_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<manus_ros2_msgs::srv::CalibrateGloveTheta_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<manus_ros2_msgs::srv::CalibrateGloveTheta_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'four_fingers_together_tips'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace manus_ros2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalibrateGloveTheta_Response & msg,
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

  // member: midpoint_y
  {
    out << "midpoint_y: ";
    rosidl_generator_traits::value_to_yaml(msg.midpoint_y, out);
    out << ", ";
  }

  // member: midpoint_z
  {
    out << "midpoint_z: ";
    rosidl_generator_traits::value_to_yaml(msg.midpoint_z, out);
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
  const CalibrateGloveTheta_Response & msg,
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

  // member: midpoint_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "midpoint_y: ";
    rosidl_generator_traits::value_to_yaml(msg.midpoint_y, out);
    out << "\n";
  }

  // member: midpoint_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "midpoint_z: ";
    rosidl_generator_traits::value_to_yaml(msg.midpoint_z, out);
    out << "\n";
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

inline std::string to_yaml(const CalibrateGloveTheta_Response & msg, bool use_flow_style = false)
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

}  // namespace manus_ros2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use manus_ros2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const manus_ros2_msgs::srv::CalibrateGloveTheta_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  manus_ros2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use manus_ros2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const manus_ros2_msgs::srv::CalibrateGloveTheta_Response & msg)
{
  return manus_ros2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<manus_ros2_msgs::srv::CalibrateGloveTheta_Response>()
{
  return "manus_ros2_msgs::srv::CalibrateGloveTheta_Response";
}

template<>
inline const char * name<manus_ros2_msgs::srv::CalibrateGloveTheta_Response>()
{
  return "manus_ros2_msgs/srv/CalibrateGloveTheta_Response";
}

template<>
struct has_fixed_size<manus_ros2_msgs::srv::CalibrateGloveTheta_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<manus_ros2_msgs::srv::CalibrateGloveTheta_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<manus_ros2_msgs::srv::CalibrateGloveTheta_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<manus_ros2_msgs::srv::CalibrateGloveTheta>()
{
  return "manus_ros2_msgs::srv::CalibrateGloveTheta";
}

template<>
inline const char * name<manus_ros2_msgs::srv::CalibrateGloveTheta>()
{
  return "manus_ros2_msgs/srv/CalibrateGloveTheta";
}

template<>
struct has_fixed_size<manus_ros2_msgs::srv::CalibrateGloveTheta>
  : std::integral_constant<
    bool,
    has_fixed_size<manus_ros2_msgs::srv::CalibrateGloveTheta_Request>::value &&
    has_fixed_size<manus_ros2_msgs::srv::CalibrateGloveTheta_Response>::value
  >
{
};

template<>
struct has_bounded_size<manus_ros2_msgs::srv::CalibrateGloveTheta>
  : std::integral_constant<
    bool,
    has_bounded_size<manus_ros2_msgs::srv::CalibrateGloveTheta_Request>::value &&
    has_bounded_size<manus_ros2_msgs::srv::CalibrateGloveTheta_Response>::value
  >
{
};

template<>
struct is_service<manus_ros2_msgs::srv::CalibrateGloveTheta>
  : std::true_type
{
};

template<>
struct is_service_request<manus_ros2_msgs::srv::CalibrateGloveTheta_Request>
  : std::true_type
{
};

template<>
struct is_service_response<manus_ros2_msgs::srv::CalibrateGloveTheta_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MANUS_ROS2_MSGS__SRV__DETAIL__CALIBRATE_GLOVE_THETA__TRAITS_HPP_
