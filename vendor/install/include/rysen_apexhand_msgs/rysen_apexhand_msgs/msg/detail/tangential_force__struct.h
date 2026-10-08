// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rysen_apexhand_msgs:msg/TangentialForce.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__TANGENTIAL_FORCE__STRUCT_H_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__TANGENTIAL_FORCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TangentialForce in the package rysen_apexhand_msgs.
/**
  * Tangential force (direction and magnitude)
 */
typedef struct rysen_apexhand_msgs__msg__TangentialForce
{
  /// direction [0, 2*pi]
  double theta;
  /// force magnitude
  double magnitude;
} rysen_apexhand_msgs__msg__TangentialForce;

// Struct for a sequence of rysen_apexhand_msgs__msg__TangentialForce.
typedef struct rysen_apexhand_msgs__msg__TangentialForce__Sequence
{
  rysen_apexhand_msgs__msg__TangentialForce * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__msg__TangentialForce__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__TANGENTIAL_FORCE__STRUCT_H_
