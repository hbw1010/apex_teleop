// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rysen_apexhand_msgs:msg/TactileImage.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__TACTILE_IMAGE__STRUCT_H_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__TACTILE_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'gray_image'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'tangential_forces'
#include "rysen_apexhand_msgs/msg/detail/tangential_force__struct.h"

/// Struct defined in msg/TactileImage in the package rysen_apexhand_msgs.
/**
  * 2D tactile image with tangential force (mirrors rysen::TactileImage)
 */
typedef struct rysen_apexhand_msgs__msg__TactileImage
{
  /// image width (pixels)
  uint32_t width;
  /// image height (pixels)
  uint32_t height;
  /// grayscale image data (row-major, size = width*height)
  rosidl_runtime_c__uint16__Sequence gray_image;
  /// tangential force for this patch
  rysen_apexhand_msgs__msg__TangentialForce tangential_forces;
} rysen_apexhand_msgs__msg__TactileImage;

// Struct for a sequence of rysen_apexhand_msgs__msg__TactileImage.
typedef struct rysen_apexhand_msgs__msg__TactileImage__Sequence
{
  rysen_apexhand_msgs__msg__TactileImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rysen_apexhand_msgs__msg__TactileImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__TACTILE_IMAGE__STRUCT_H_
