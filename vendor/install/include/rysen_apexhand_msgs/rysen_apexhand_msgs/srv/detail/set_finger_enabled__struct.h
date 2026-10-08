// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rysen_apexhand_msgs:srv/SetFingerEnabled.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_FINGER_ENABLED__STRUCT_H_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_FINGER_ENABLED__STRUCT_H_

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
// Member 'finger_ids'
#include "rysen_apexhand_msgs/msg/detail/finger_id__struct.h"

/// Struct defined in srv/SetFingerEnabled in the package rysen_apexhand_msgs.
typedef struct rysen_apexhand_msgs__srv__SetFingerEnabled_Request
{
  rosidl_runtime_c__String ip;
  /// List of finger IDs to enable/disable
  rysen_apexhand_msgs__msg__FingerId__Sequence finger_ids;
  /// true to enable, false to disable
  bool enable;
} rysen_apexhand_msgs__srv__SetFingerEnabled_Request;

// Struct for a sequence of rysen_apexhand_msgs__srv__SetFingerEnabled_Request.
typedef struct rysen_apexhand_msgs__srv__SetFingerEnabled_Request__Sequence
{
  rysen_apexhand_msgs__srv__SetFingerEnabled_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__srv__SetFingerEnabled_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetFingerEnabled in the package rysen_apexhand_msgs.
typedef struct rysen_apexhand_msgs__srv__SetFingerEnabled_Response
{
  bool success;
  rosidl_runtime_c__String message;
} rysen_apexhand_msgs__srv__SetFingerEnabled_Response;

// Struct for a sequence of rysen_apexhand_msgs__srv__SetFingerEnabled_Response.
typedef struct rysen_apexhand_msgs__srv__SetFingerEnabled_Response__Sequence
{
  rysen_apexhand_msgs__srv__SetFingerEnabled_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__srv__SetFingerEnabled_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_FINGER_ENABLED__STRUCT_H_
