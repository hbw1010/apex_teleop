// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rysen_apexhand_msgs:msg/FingerId.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__FINGER_ID__STRUCT_H_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__FINGER_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FingerId in the package rysen_apexhand_msgs.
/**
  * Finger identifier constants
  * FINGER_ID_THUMB = 0
  * FINGER_ID_INDEX = 1
  * FINGER_ID_MIDDLE = 2
  * FINGER_ID_RING = 3
  * FINGER_ID_LITTLE = 4
 */
typedef struct rysen_apexhand_msgs__msg__FingerId
{
  uint8_t finger_id;
} rysen_apexhand_msgs__msg__FingerId;

// Struct for a sequence of rysen_apexhand_msgs__msg__FingerId.
typedef struct rysen_apexhand_msgs__msg__FingerId__Sequence
{
  rysen_apexhand_msgs__msg__FingerId * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__msg__FingerId__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__FINGER_ID__STRUCT_H_
