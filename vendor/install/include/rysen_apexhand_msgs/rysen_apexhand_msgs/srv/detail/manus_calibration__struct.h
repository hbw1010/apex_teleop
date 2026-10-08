// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rysen_apexhand_msgs:srv/ManusCalibration.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__MANUS_CALIBRATION__STRUCT_H_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__MANUS_CALIBRATION__STRUCT_H_

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

/// Struct defined in srv/ManusCalibration in the package rysen_apexhand_msgs.
typedef struct rysen_apexhand_msgs__srv__ManusCalibration_Request
{
  rosidl_runtime_c__String side;
} rysen_apexhand_msgs__srv__ManusCalibration_Request;

// Struct for a sequence of rysen_apexhand_msgs__srv__ManusCalibration_Request.
typedef struct rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence
{
  rysen_apexhand_msgs__srv__ManusCalibration_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'four_fingers_together_tips'
// Member 'fist_tips'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ManusCalibration in the package rysen_apexhand_msgs.
typedef struct rysen_apexhand_msgs__srv__ManusCalibration_Response
{
  bool success;
  /// Open-pose result or default restored by clear.
  double theta_rad;
  double theta_deg;
  /// Raw SDK TIP positions before theta correction.
  /// Order: thumb, index, middle, ring, pinky.
  geometry_msgs__msg__Point four_fingers_together_tips[5];
  geometry_msgs__msg__Point fist_tips[5];
  uint32_t sample_count;
  rosidl_runtime_c__String message;
} rysen_apexhand_msgs__srv__ManusCalibration_Response;

// Struct for a sequence of rysen_apexhand_msgs__srv__ManusCalibration_Response.
typedef struct rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence
{
  rysen_apexhand_msgs__srv__ManusCalibration_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__MANUS_CALIBRATION__STRUCT_H_
