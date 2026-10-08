// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rysen_apexhand_msgs:msg/CommonFingerTactile.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__COMMON_FINGER_TACTILE__FUNCTIONS_H_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__COMMON_FINGER_TACTILE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rysen_apexhand_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rysen_apexhand_msgs/msg/detail/common_finger_tactile__struct.h"

/// Initialize msg/CommonFingerTactile message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rysen_apexhand_msgs__msg__CommonFingerTactile
 * )) before or use
 * rysen_apexhand_msgs__msg__CommonFingerTactile__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
bool
rysen_apexhand_msgs__msg__CommonFingerTactile__init(rysen_apexhand_msgs__msg__CommonFingerTactile * msg);

/// Finalize msg/CommonFingerTactile message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
void
rysen_apexhand_msgs__msg__CommonFingerTactile__fini(rysen_apexhand_msgs__msg__CommonFingerTactile * msg);

/// Create msg/CommonFingerTactile message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rysen_apexhand_msgs__msg__CommonFingerTactile__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
rysen_apexhand_msgs__msg__CommonFingerTactile *
rysen_apexhand_msgs__msg__CommonFingerTactile__create();

/// Destroy msg/CommonFingerTactile message.
/**
 * It calls
 * rysen_apexhand_msgs__msg__CommonFingerTactile__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
void
rysen_apexhand_msgs__msg__CommonFingerTactile__destroy(rysen_apexhand_msgs__msg__CommonFingerTactile * msg);

/// Check for msg/CommonFingerTactile message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
bool
rysen_apexhand_msgs__msg__CommonFingerTactile__are_equal(const rysen_apexhand_msgs__msg__CommonFingerTactile * lhs, const rysen_apexhand_msgs__msg__CommonFingerTactile * rhs);

/// Copy a msg/CommonFingerTactile message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
bool
rysen_apexhand_msgs__msg__CommonFingerTactile__copy(
  const rysen_apexhand_msgs__msg__CommonFingerTactile * input,
  rysen_apexhand_msgs__msg__CommonFingerTactile * output);

/// Initialize array of msg/CommonFingerTactile messages.
/**
 * It allocates the memory for the number of elements and calls
 * rysen_apexhand_msgs__msg__CommonFingerTactile__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
bool
rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence__init(rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence * array, size_t size);

/// Finalize array of msg/CommonFingerTactile messages.
/**
 * It calls
 * rysen_apexhand_msgs__msg__CommonFingerTactile__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
void
rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence__fini(rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence * array);

/// Create array of msg/CommonFingerTactile messages.
/**
 * It allocates the memory for the array and calls
 * rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence *
rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence__create(size_t size);

/// Destroy array of msg/CommonFingerTactile messages.
/**
 * It calls
 * rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
void
rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence__destroy(rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence * array);

/// Check for msg/CommonFingerTactile message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
bool
rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence__are_equal(const rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence * lhs, const rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence * rhs);

/// Copy an array of msg/CommonFingerTactile messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
bool
rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence__copy(
  const rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence * input,
  rysen_apexhand_msgs__msg__CommonFingerTactile__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__COMMON_FINGER_TACTILE__FUNCTIONS_H_
