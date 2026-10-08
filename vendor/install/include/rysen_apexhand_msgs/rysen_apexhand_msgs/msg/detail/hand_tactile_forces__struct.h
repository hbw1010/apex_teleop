// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rysen_apexhand_msgs:msg/HandTactileForces.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__HAND_TACTILE_FORCES__STRUCT_H_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__HAND_TACTILE_FORCES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'index'
// Member 'middle'
// Member 'ring'
// Member 'little'
#include "rysen_apexhand_msgs/msg/detail/common_finger_tactile__struct.h"
// Member 'thumb'
#include "rysen_apexhand_msgs/msg/detail/thumb_finger_tactile__struct.h"
// Member 'palm_center'
#include "rysen_apexhand_msgs/msg/detail/tactile_image__struct.h"

/// Struct defined in msg/HandTactileForces in the package rysen_apexhand_msgs.
/**
  * ! Hand-level tactile image + tangential forces from HandSensorImage
  * ! Mirrors rysen::HandSensorImage (only tactile part)
 */
typedef struct rysen_apexhand_msgs__msg__HandTactileForces
{
  builtin_interfaces__msg__Time stamp;
  /// 食指 (prox/mid/dist_pad + 切向力，见 NAMING_CONVENTION.md)
  rysen_apexhand_msgs__msg__CommonFingerTactile index;
  /// 中指
  rysen_apexhand_msgs__msg__CommonFingerTactile middle;
  /// 无名指
  rysen_apexhand_msgs__msg__CommonFingerTactile ring;
  /// 小拇指
  rysen_apexhand_msgs__msg__CommonFingerTactile little;
  /// 大拇指
  rysen_apexhand_msgs__msg__ThumbFingerTactile thumb;
  /// 手掌中心 palm_center
  rysen_apexhand_msgs__msg__TactileImage palm_center;
} rysen_apexhand_msgs__msg__HandTactileForces;

// Struct for a sequence of rysen_apexhand_msgs__msg__HandTactileForces.
typedef struct rysen_apexhand_msgs__msg__HandTactileForces__Sequence
{
  rysen_apexhand_msgs__msg__HandTactileForces * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__msg__HandTactileForces__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__HAND_TACTILE_FORCES__STRUCT_H_
