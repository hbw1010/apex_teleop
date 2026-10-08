// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rysen_apexhand_msgs:srv/GetVersionInfo.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__GET_VERSION_INFO__STRUCT_H_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__GET_VERSION_INFO__STRUCT_H_

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

/// Struct defined in srv/GetVersionInfo in the package rysen_apexhand_msgs.
typedef struct rysen_apexhand_msgs__srv__GetVersionInfo_Request
{
  rosidl_runtime_c__String ip;
} rysen_apexhand_msgs__srv__GetVersionInfo_Request;

// Struct for a sequence of rysen_apexhand_msgs__srv__GetVersionInfo_Request.
typedef struct rysen_apexhand_msgs__srv__GetVersionInfo_Request__Sequence
{
  rysen_apexhand_msgs__srv__GetVersionInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__srv__GetVersionInfo_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'sdk_version'
// Member 'hand_firmware_version'
// Member 'touch_sensor_version'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetVersionInfo in the package rysen_apexhand_msgs.
typedef struct rysen_apexhand_msgs__srv__GetVersionInfo_Response
{
  rosidl_runtime_c__String sdk_version;
  rosidl_runtime_c__String hand_firmware_version;
  rosidl_runtime_c__String touch_sensor_version;
} rysen_apexhand_msgs__srv__GetVersionInfo_Response;

// Struct for a sequence of rysen_apexhand_msgs__srv__GetVersionInfo_Response.
typedef struct rysen_apexhand_msgs__srv__GetVersionInfo_Response__Sequence
{
  rysen_apexhand_msgs__srv__GetVersionInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__srv__GetVersionInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__GET_VERSION_INFO__STRUCT_H_
