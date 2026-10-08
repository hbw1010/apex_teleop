// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rysen_apexhand_msgs:srv/IsFingerEnabled.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__IS_FINGER_ENABLED__STRUCT_H_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__IS_FINGER_ENABLED__STRUCT_H_

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

/// Struct defined in srv/IsFingerEnabled in the package rysen_apexhand_msgs.
typedef struct rysen_apexhand_msgs__srv__IsFingerEnabled_Request
{
  /// 目标机械手的 IP
  rosidl_runtime_c__String ip;
  /// 手指 ID (0:拇指, 1:食指, 2:中指, 3:无名指, 4:小指)
  uint8_t finger_id;
} rysen_apexhand_msgs__srv__IsFingerEnabled_Request;

// Struct for a sequence of rysen_apexhand_msgs__srv__IsFingerEnabled_Request.
typedef struct rysen_apexhand_msgs__srv__IsFingerEnabled_Request__Sequence
{
  rysen_apexhand_msgs__srv__IsFingerEnabled_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__srv__IsFingerEnabled_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/IsFingerEnabled in the package rysen_apexhand_msgs.
typedef struct rysen_apexhand_msgs__srv__IsFingerEnabled_Response
{
  /// 服务调用是否成功（比如 IP 不存在就会返回 false）
  bool success;
  /// 错误信息或状态描述
  rosidl_runtime_c__String message;
  /// 该手指是否被使能 (true/false)
  bool is_enabled;
} rysen_apexhand_msgs__srv__IsFingerEnabled_Response;

// Struct for a sequence of rysen_apexhand_msgs__srv__IsFingerEnabled_Response.
typedef struct rysen_apexhand_msgs__srv__IsFingerEnabled_Response__Sequence
{
  rysen_apexhand_msgs__srv__IsFingerEnabled_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__srv__IsFingerEnabled_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__IS_FINGER_ENABLED__STRUCT_H_
