// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rysen_apexhand_msgs:msg/CommonFingerTactile.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__COMMON_FINGER_TACTILE__STRUCT_H_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__COMMON_FINGER_TACTILE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'prox_pad'
// Member 'mid_pad'
// Member 'dist_pad'
#include "rysen_apexhand_msgs/msg/detail/tactile_image__struct.h"

/// Struct defined in msg/CommonFingerTactile in the package rysen_apexhand_msgs.
/**
  * Common finger tactile image data (pip, dip, tip)
  * Mirrors rysen::CommonFingerSensorImage (prox_pad, mid_pad, dist_pad)
 */
typedef struct rysen_apexhand_msgs__msg__CommonFingerTactile
{
  rysen_apexhand_msgs__msg__TactileImage prox_pad;
  rysen_apexhand_msgs__msg__TactileImage mid_pad;
  rysen_apexhand_msgs__msg__TactileImage dist_pad;
} rysen_apexhand_msgs__msg__CommonFingerTactile;

// Struct for a sequence of rysen_apexhand_msgs__msg__CommonFingerTactile.
typedef struct rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence
{
  rysen_apexhand_msgs__msg__CommonFingerTactile * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__COMMON_FINGER_TACTILE__STRUCT_H_
