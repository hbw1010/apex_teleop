// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rysen_apexhand_msgs:srv/SetMaxJointSpeed.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_MAX_JOINT_SPEED__STRUCT_H_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_MAX_JOINT_SPEED__STRUCT_H_

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
// Member 'joint_ids'
// Member 'max_speeds'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetMaxJointSpeed in the package rysen_apexhand_msgs.
typedef struct rysen_apexhand_msgs__srv__SetMaxJointSpeed_Request
{
  rosidl_runtime_c__String ip;
  bool get_only;
  rosidl_runtime_c__uint8__Sequence joint_ids;
  rosidl_runtime_c__double__Sequence max_speeds;
} rysen_apexhand_msgs__srv__SetMaxJointSpeed_Request;

// Struct for a sequence of rysen_apexhand_msgs__srv__SetMaxJointSpeed_Request.
typedef struct rysen_apexhand_msgs__srv__SetMaxJointSpeed_Request__Sequence
{
  rysen_apexhand_msgs__srv__SetMaxJointSpeed_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__srv__SetMaxJointSpeed_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'max_speeds'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetMaxJointSpeed in the package rysen_apexhand_msgs.
typedef struct rysen_apexhand_msgs__srv__SetMaxJointSpeed_Response
{
  bool success;
  rosidl_runtime_c__String message;
  rosidl_runtime_c__double__Sequence max_speeds;
} rysen_apexhand_msgs__srv__SetMaxJointSpeed_Response;

// Struct for a sequence of rysen_apexhand_msgs__srv__SetMaxJointSpeed_Response.
typedef struct rysen_apexhand_msgs__srv__SetMaxJointSpeed_Response__Sequence
{
  rysen_apexhand_msgs__srv__SetMaxJointSpeed_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__srv__SetMaxJointSpeed_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_MAX_JOINT_SPEED__STRUCT_H_
