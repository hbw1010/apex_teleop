// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rysen_apexhand_msgs:srv/MoveJoint.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__MOVE_JOINT__STRUCT_H_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__MOVE_JOINT__STRUCT_H_

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
// Member 'positions'
// Member 'velocities'
// Member 'accelerations'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/MoveJoint in the package rysen_apexhand_msgs.
typedef struct rysen_apexhand_msgs__srv__MoveJoint_Request
{
  /// JOINT_ID_THUMB_CMC_ABD = 0
  /// JOINT_ID_THUMB_CMC_ROT = 1
  /// JOINT_ID_THUMB_CMC_FLEX = 2
  /// JOINT_ID_THUMB_MCP_FLEX = 3
  /// JOINT_ID_THUMB_IP_FLEX = 4
  /// JOINT_ID_INDEX_MCP_ABD = 5
  /// JOINT_ID_INDEX_MCP_FLEX = 6
  /// JOINT_ID_INDEX_PIP_FLEX = 7
  /// JOINT_ID_INDEX_DIP_FLEX = 8
  /// JOINT_ID_MIDDLE_MCP_ABD = 9
  /// JOINT_ID_MIDDLE_MCP_FLEX = 10
  /// JOINT_ID_MIDDLE_PIP_FLEX = 11
  /// JOINT_ID_MIDDLE_DIP_FLEX = 12
  /// JOINT_ID_RING_MCP_ABD = 13
  /// JOINT_ID_RING_MCP_FLEX = 14
  /// JOINT_ID_RING_PIP_FLEX = 15
  /// JOINT_ID_RING_DIP_FLEX = 16
  /// JOINT_ID_LITTLE_MCP_ABD = 17
  /// JOINT_ID_LITTLE_MCP_FLEX = 18
  /// JOINT_ID_LITTLE_PIP_FLEX = 19
  /// JOINT_ID_LITTLE_DIP_FLEX = 20
  rosidl_runtime_c__String ip;
  /// Joint IDs (0-20)
  rosidl_runtime_c__uint8__Sequence joint_ids;
  /// Target positions (rad)
  rosidl_runtime_c__double__Sequence positions;
  /// Target velocities (rad/s)
  rosidl_runtime_c__double__Sequence velocities;
  /// Target accelerations (rad/s²)
  rosidl_runtime_c__double__Sequence accelerations;
} rysen_apexhand_msgs__srv__MoveJoint_Request;

// Struct for a sequence of rysen_apexhand_msgs__srv__MoveJoint_Request.
typedef struct rysen_apexhand_msgs__srv__MoveJoint_Request__Sequence
{
  rysen_apexhand_msgs__srv__MoveJoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__srv__MoveJoint_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MoveJoint in the package rysen_apexhand_msgs.
typedef struct rysen_apexhand_msgs__srv__MoveJoint_Response
{
  bool success;
  rosidl_runtime_c__String message;
} rysen_apexhand_msgs__srv__MoveJoint_Response;

// Struct for a sequence of rysen_apexhand_msgs__srv__MoveJoint_Response.
typedef struct rysen_apexhand_msgs__srv__MoveJoint_Response__Sequence
{
  rysen_apexhand_msgs__srv__MoveJoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__srv__MoveJoint_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__MOVE_JOINT__STRUCT_H_
