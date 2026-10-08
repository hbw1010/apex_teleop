// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from manus_ros2_msgs:msg/ManusGlove.idl
// generated code does not contain a copyright notice

#ifndef MANUS_ROS2_MSGS__MSG__DETAIL__MANUS_GLOVE__TRAITS_HPP_
#define MANUS_ROS2_MSGS__MSG__DETAIL__MANUS_GLOVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "manus_ros2_msgs/msg/detail/manus_glove__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'raw_nodes'
#include "manus_ros2_msgs/msg/detail/manus_raw_node__traits.hpp"
// Member 'ergonomics'
#include "manus_ros2_msgs/msg/detail/manus_ergonomics__traits.hpp"
// Member 'raw_sensor_orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"
// Member 'raw_sensor'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace manus_ros2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ManusGlove & msg,
  std::ostream & out)
{
  out << "{";
  // member: glove_id
  {
    out << "glove_id: ";
    rosidl_generator_traits::value_to_yaml(msg.glove_id, out);
    out << ", ";
  }

  // member: side
  {
    out << "side: ";
    rosidl_generator_traits::value_to_yaml(msg.side, out);
    out << ", ";
  }

  // member: raw_node_count
  {
    out << "raw_node_count: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_node_count, out);
    out << ", ";
  }

  // member: raw_nodes
  {
    if (msg.raw_nodes.size() == 0) {
      out << "raw_nodes: []";
    } else {
      out << "raw_nodes: [";
      size_t pending_items = msg.raw_nodes.size();
      for (auto item : msg.raw_nodes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ergonomics_count
  {
    out << "ergonomics_count: ";
    rosidl_generator_traits::value_to_yaml(msg.ergonomics_count, out);
    out << ", ";
  }

  // member: ergonomics
  {
    if (msg.ergonomics.size() == 0) {
      out << "ergonomics: []";
    } else {
      out << "ergonomics: [";
      size_t pending_items = msg.ergonomics.size();
      for (auto item : msg.ergonomics) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: raw_sensor_orientation
  {
    out << "raw_sensor_orientation: ";
    to_flow_style_yaml(msg.raw_sensor_orientation, out);
    out << ", ";
  }

  // member: raw_sensor_count
  {
    out << "raw_sensor_count: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_sensor_count, out);
    out << ", ";
  }

  // member: raw_sensor
  {
    if (msg.raw_sensor.size() == 0) {
      out << "raw_sensor: []";
    } else {
      out << "raw_sensor: [";
      size_t pending_items = msg.raw_sensor.size();
      for (auto item : msg.raw_sensor) {
        to_flow_style_yaml(item, out);
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
  const ManusGlove & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: glove_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "glove_id: ";
    rosidl_generator_traits::value_to_yaml(msg.glove_id, out);
    out << "\n";
  }

  // member: side
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "side: ";
    rosidl_generator_traits::value_to_yaml(msg.side, out);
    out << "\n";
  }

  // member: raw_node_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raw_node_count: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_node_count, out);
    out << "\n";
  }

  // member: raw_nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.raw_nodes.size() == 0) {
      out << "raw_nodes: []\n";
    } else {
      out << "raw_nodes:\n";
      for (auto item : msg.raw_nodes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: ergonomics_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ergonomics_count: ";
    rosidl_generator_traits::value_to_yaml(msg.ergonomics_count, out);
    out << "\n";
  }

  // member: ergonomics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ergonomics.size() == 0) {
      out << "ergonomics: []\n";
    } else {
      out << "ergonomics:\n";
      for (auto item : msg.ergonomics) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: raw_sensor_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raw_sensor_orientation:\n";
    to_block_style_yaml(msg.raw_sensor_orientation, out, indentation + 2);
  }

  // member: raw_sensor_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raw_sensor_count: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_sensor_count, out);
    out << "\n";
  }

  // member: raw_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.raw_sensor.size() == 0) {
      out << "raw_sensor: []\n";
    } else {
      out << "raw_sensor:\n";
      for (auto item : msg.raw_sensor) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ManusGlove & msg, bool use_flow_style = false)
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

}  // namespace manus_ros2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use manus_ros2_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const manus_ros2_msgs::msg::ManusGlove & msg,
  std::ostream & out, size_t indentation = 0)
{
  manus_ros2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use manus_ros2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const manus_ros2_msgs::msg::ManusGlove & msg)
{
  return manus_ros2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<manus_ros2_msgs::msg::ManusGlove>()
{
  return "manus_ros2_msgs::msg::ManusGlove";
}

template<>
inline const char * name<manus_ros2_msgs::msg::ManusGlove>()
{
  return "manus_ros2_msgs/msg/ManusGlove";
}

template<>
struct has_fixed_size<manus_ros2_msgs::msg::ManusGlove>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<manus_ros2_msgs::msg::ManusGlove>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<manus_ros2_msgs::msg::ManusGlove>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MANUS_ROS2_MSGS__MSG__DETAIL__MANUS_GLOVE__TRAITS_HPP_
