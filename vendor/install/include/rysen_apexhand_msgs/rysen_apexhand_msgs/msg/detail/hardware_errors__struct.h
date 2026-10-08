// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rysen_apexhand_msgs:msg/HardwareErrors.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__HARDWARE_ERRORS__STRUCT_H_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__HARDWARE_ERRORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/HardwareErrors in the package rysen_apexhand_msgs.
typedef struct rysen_apexhand_msgs__msg__HardwareErrors
{
  std_msgs__msg__Header header;
  uint64_t device_error_code;
  uint64_t thumb_error_code;
  uint64_t index_error_code;
  uint64_t middle_error_code;
  uint64_t ring_error_code;
  uint64_t little_error_code;
} rysen_apexhand_msgs__msg__HardwareErrors;

// Struct for a sequence of rysen_apexhand_msgs__msg__HardwareErrors.
typedef struct rysen_apexhand_msgs__msg__HardwareErrors__Sequence
{
  rysen_apexhand_msgs__msg__HardwareErrors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__msg__HardwareErrors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__HARDWARE_ERRORS__STRUCT_H_
