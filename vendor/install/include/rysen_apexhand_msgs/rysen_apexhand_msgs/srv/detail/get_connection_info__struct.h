// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rysen_apexhand_msgs:srv/GetConnectionInfo.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__GET_CONNECTION_INFO__STRUCT_H_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__GET_CONNECTION_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetConnectionInfo in the package rysen_apexhand_msgs.
typedef struct rysen_apexhand_msgs__srv__GetConnectionInfo_Request
{
  uint8_t structure_needs_at_least_one_member;
} rysen_apexhand_msgs__srv__GetConnectionInfo_Request;

// Struct for a sequence of rysen_apexhand_msgs__srv__GetConnectionInfo_Request.
typedef struct rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence
{
  rysen_apexhand_msgs__srv__GetConnectionInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'ips'
// Member 'device_ips'
// Member 'hand_sides'
// Member 'hardware_uids'
#include "rosidl_runtime_c/string.h"
// Member 'connected'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetConnectionInfo in the package rysen_apexhand_msgs.
typedef struct rysen_apexhand_msgs__srv__GetConnectionInfo_Response
{
  rosidl_runtime_c__String__Sequence ips;
  rosidl_runtime_c__boolean__Sequence connected;
  rosidl_runtime_c__String__Sequence device_ips;
  rosidl_runtime_c__String__Sequence hand_sides;
  rosidl_runtime_c__String__Sequence hardware_uids;
} rysen_apexhand_msgs__srv__GetConnectionInfo_Response;

// Struct for a sequence of rysen_apexhand_msgs__srv__GetConnectionInfo_Response.
typedef struct rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence
{
  rysen_apexhand_msgs__srv__GetConnectionInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__GET_CONNECTION_INFO__STRUCT_H_
