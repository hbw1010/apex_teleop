// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from manus_ros2_msgs:srv/RecordGloveFistCalibration.idl
// generated code does not contain a copyright notice

#ifndef MANUS_ROS2_MSGS__SRV__DETAIL__RECORD_GLOVE_FIST_CALIBRATION__STRUCT_H_
#define MANUS_ROS2_MSGS__SRV__DETAIL__RECORD_GLOVE_FIST_CALIBRATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'side'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RecordGloveFistCalibration in the package manus_ros2_msgs.
typedef struct manus_ros2_msgs__srv__RecordGloveFistCalibration_Request
{
  rosidl_runtime_c__String side;
} manus_ros2_msgs__srv__RecordGloveFistCalibration_Request;

// Struct for a sequence of manus_ros2_msgs__srv__RecordGloveFistCalibration_Request.
typedef struct manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence
{
  manus_ros2_msgs__srv__RecordGloveFistCalibration_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'fist_tips'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RecordGloveFistCalibration in the package manus_ros2_msgs.
typedef struct manus_ros2_msgs__srv__RecordGloveFistCalibration_Response
{
  bool success;
  /// Raw SDK TIP positions before theta correction.
  /// Order: thumb, index, middle, ring, pinky.
  geometry_msgs__msg__Point fist_tips[5];
  uint32_t sample_count;
  rosidl_runtime_c__String message;
} manus_ros2_msgs__srv__RecordGloveFistCalibration_Response;

// Struct for a sequence of manus_ros2_msgs__srv__RecordGloveFistCalibration_Response.
typedef struct manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence
{
  manus_ros2_msgs__srv__RecordGloveFistCalibration_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MANUS_ROS2_MSGS__SRV__DETAIL__RECORD_GLOVE_FIST_CALIBRATION__STRUCT_H_
