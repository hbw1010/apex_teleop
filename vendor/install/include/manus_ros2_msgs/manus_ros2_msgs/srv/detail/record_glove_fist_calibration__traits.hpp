// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from manus_ros2_msgs:srv/RecordGloveFistCalibration.idl
// generated code does not contain a copyright notice

#ifndef MANUS_ROS2_MSGS__SRV__DETAIL__RECORD_GLOVE_FIST_CALIBRATION__TRAITS_HPP_
#define MANUS_ROS2_MSGS__SRV__DETAIL__RECORD_GLOVE_FIST_CALIBRATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "manus_ros2_msgs/srv/detail/record_glove_fist_calibration__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace manus_ros2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RecordGloveFistCalibration_Request & msg,
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
  const RecordGloveFistCalibration_Request & msg,
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

inline std::string to_yaml(const RecordGloveFistCalibration_Request & msg, bool use_flow_style = false)
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
  const manus_ros2_msgs::srv::RecordGloveFistCalibration_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  manus_ros2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use manus_ros2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const manus_ros2_msgs::srv::RecordGloveFistCalibration_Request & msg)
{
  return manus_ros2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<manus_ros2_msgs::srv::RecordGloveFistCalibration_Request>()
{
  return "manus_ros2_msgs::srv::RecordGloveFistCalibration_Request";
}

template<>
inline const char * name<manus_ros2_msgs::srv::RecordGloveFistCalibration_Request>()
{
  return "manus_ros2_msgs/srv/RecordGloveFistCalibration_Request";
}

template<>
struct has_fixed_size<manus_ros2_msgs::srv::RecordGloveFistCalibration_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<manus_ros2_msgs::srv::RecordGloveFistCalibration_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<manus_ros2_msgs::srv::RecordGloveFistCalibration_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'fist_tips'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace manus_ros2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RecordGloveFistCalibration_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
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
  const RecordGloveFistCalibration_Response & msg,
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

inline std::string to_yaml(const RecordGloveFistCalibration_Response & msg, bool use_flow_style = false)
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
  const manus_ros2_msgs::srv::RecordGloveFistCalibration_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  manus_ros2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use manus_ros2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const manus_ros2_msgs::srv::RecordGloveFistCalibration_Response & msg)
{
  return manus_ros2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<manus_ros2_msgs::srv::RecordGloveFistCalibration_Response>()
{
  return "manus_ros2_msgs::srv::RecordGloveFistCalibration_Response";
}

template<>
inline const char * name<manus_ros2_msgs::srv::RecordGloveFistCalibration_Response>()
{
  return "manus_ros2_msgs/srv/RecordGloveFistCalibration_Response";
}

template<>
struct has_fixed_size<manus_ros2_msgs::srv::RecordGloveFistCalibration_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<manus_ros2_msgs::srv::RecordGloveFistCalibration_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<manus_ros2_msgs::srv::RecordGloveFistCalibration_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<manus_ros2_msgs::srv::RecordGloveFistCalibration>()
{
  return "manus_ros2_msgs::srv::RecordGloveFistCalibration";
}

template<>
inline const char * name<manus_ros2_msgs::srv::RecordGloveFistCalibration>()
{
  return "manus_ros2_msgs/srv/RecordGloveFistCalibration";
}

template<>
struct has_fixed_size<manus_ros2_msgs::srv::RecordGloveFistCalibration>
  : std::integral_constant<
    bool,
    has_fixed_size<manus_ros2_msgs::srv::RecordGloveFistCalibration_Request>::value &&
    has_fixed_size<manus_ros2_msgs::srv::RecordGloveFistCalibration_Response>::value
  >
{
};

template<>
struct has_bounded_size<manus_ros2_msgs::srv::RecordGloveFistCalibration>
  : std::integral_constant<
    bool,
    has_bounded_size<manus_ros2_msgs::srv::RecordGloveFistCalibration_Request>::value &&
    has_bounded_size<manus_ros2_msgs::srv::RecordGloveFistCalibration_Response>::value
  >
{
};

template<>
struct is_service<manus_ros2_msgs::srv::RecordGloveFistCalibration>
  : std::true_type
{
};

template<>
struct is_service_request<manus_ros2_msgs::srv::RecordGloveFistCalibration_Request>
  : std::true_type
{
};

template<>
struct is_service_response<manus_ros2_msgs::srv::RecordGloveFistCalibration_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MANUS_ROS2_MSGS__SRV__DETAIL__RECORD_GLOVE_FIST_CALIBRATION__TRAITS_HPP_
