// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rysen_apexhand_msgs:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__MOTOR_STATE__STRUCT_H_

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
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'temperature'
// Member 'current'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/MotorState in the package rysen_apexhand_msgs.
/**
  * Standard motor state message (similar to sensor_msgs/JointState)
 */
typedef struct rysen_apexhand_msgs__msg__MotorState
{
  /// Header with timestamp
  std_msgs__msg__Header header;
  /// Motor names (order matches MotorId / rysen_apexhand_node, e.g. thumb_cmc_abd_motor, ...)
  rosidl_runtime_c__String__Sequence name;
  /// Motor temperatures (in degrees Celsius)
  rosidl_runtime_c__double__Sequence temperature;
  /// Motor currents (in Amperes)
  rosidl_runtime_c__double__Sequence current;
} rysen_apexhand_msgs__msg__MotorState;

// Struct for a sequence of rysen_apexhand_msgs__msg__MotorState.
typedef struct rysen_apexhand_msgs__msg__MotorState__Sequence
{
  rysen_apexhand_msgs__msg__MotorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__msg__MotorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
