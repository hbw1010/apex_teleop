// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rysen_apexhand_msgs:srv/ClearTactileCalibration.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__CLEAR_TACTILE_CALIBRATION__STRUCT_H_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__CLEAR_TACTILE_CALIBRATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ip'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ClearTactileCalibration in the package rysen_apexhand_msgs.
typedef struct rysen_apexhand_msgs__srv__ClearTactileCalibration_Request
{
  /// target hand ip
  rosidl_runtime_c__String ip;
} rysen_apexhand_msgs__srv__ClearTactileCalibration_Request;

// Struct for a sequence of rysen_apexhand_msgs__srv__ClearTactileCalibration_Request.
typedef struct rysen_apexhand_msgs__srv__ClearTactileCalibration_Request__Sequence
{
  rysen_apexhand_msgs__srv__ClearTactileCalibration_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__srv__ClearTactileCalibration_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ClearTactileCalibration in the package rysen_apexhand_msgs.
typedef struct rysen_apexhand_msgs__srv__ClearTactileCalibration_Response
{
  bool success;
  rosidl_runtime_c__String message;
} rysen_apexhand_msgs__srv__ClearTactileCalibration_Response;

// Struct for a sequence of rysen_apexhand_msgs__srv__ClearTactileCalibration_Response.
typedef struct rysen_apexhand_msgs__srv__ClearTactileCalibration_Response__Sequence
{
  rysen_apexhand_msgs__srv__ClearTactileCalibration_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__srv__ClearTactileCalibration_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__CLEAR_TACTILE_CALIBRATION__STRUCT_H_
