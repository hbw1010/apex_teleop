// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rysen_apexhand_msgs:msg/HandTactileForces.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__HAND_TACTILE_FORCES__FUNCTIONS_H_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__HAND_TACTILE_FORCES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rysen_apexhand_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rysen_apexhand_msgs/msg/detail/hand_tactile_forces__struct.h"

/// Initialize msg/HandTactileForces message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rysen_apexhand_msgs__msg__HandTactileForces
 * )) before or use
 * rysen_apexhand_msgs__msg__HandTactileForces__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
bool
rysen_apexhand_msgs__msg__HandTactileForces__init(rysen_apexhand_msgs__msg__HandTactileForces * msg);

/// Finalize msg/HandTactileForces message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
void
rysen_apexhand_msgs__msg__HandTactileForces__fini(rysen_apexhand_msgs__msg__HandTactileForces * msg);

/// Create msg/HandTactileForces message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rysen_apexhand_msgs__msg__HandTactileForces__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
rysen_apexhand_msgs__msg__HandTactileForces *
rysen_apexhand_msgs__msg__HandTactileForces__create();

/// Destroy msg/HandTactileForces message.
/**
 * It calls
 * rysen_apexhand_msgs__msg__HandTactileForces__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
void
rysen_apexhand_msgs__msg__HandTactileForces__destroy(rysen_apexhand_msgs__msg__HandTactileForces * msg);

/// Check for msg/HandTactileForces message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
bool
rysen_apexhand_msgs__msg__HandTactileForces__are_equal(const rysen_apexhand_msgs__msg__HandTactileForces * lhs, const rysen_apexhand_msgs__msg__HandTactileForces * rhs);

/// Copy a msg/HandTactileForces message.
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
rysen_apexhand_msgs__msg__HandTactileForces__copy(
  const rysen_apexhand_msgs__msg__HandTactileForces * input,
  rysen_apexhand_msgs__msg__HandTactileForces * output);

/// Initialize array of msg/HandTactileForces messages.
/**
 * It allocates the memory for the number of elements and calls
 * rysen_apexhand_msgs__msg__HandTactileForces__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
bool
rysen_apexhand_msgs__msg__HandTactileForces__Sequence__init(rysen_apexhand_msgs__msg__HandTactileForces__Sequence * array, size_t size);

/// Finalize array of msg/HandTactileForces messages.
/**
 * It calls
 * rysen_apexhand_msgs__msg__HandTactileForces__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
void
rysen_apexhand_msgs__msg__HandTactileForces__Sequence__fini(rysen_apexhand_msgs__msg__HandTactileForces__Sequence * array);

/// Create array of msg/HandTactileForces messages.
/**
 * It allocates the memory for the array and calls
 * rysen_apexhand_msgs__msg__HandTactileForces__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
rysen_apexhand_msgs__msg__HandTactileForces__Sequence *
rysen_apexhand_msgs__msg__HandTactileForces__Sequence__create(size_t size);

/// Destroy array of msg/HandTactileForces messages.
/**
 * It calls
 * rysen_apexhand_msgs__msg__HandTactileForces__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
void
rysen_apexhand_msgs__msg__HandTactileForces__Sequence__destroy(rysen_apexhand_msgs__msg__HandTactileForces__Sequence * array);

/// Check for msg/HandTactileForces message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
bool
rysen_apexhand_msgs__msg__HandTactileForces__Sequence__are_equal(const rysen_apexhand_msgs__msg__HandTactileForces__Sequence * lhs, const rysen_apexhand_msgs__msg__HandTactileForces__Sequence * rhs);

/// Copy an array of msg/HandTactileForces messages.
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
rysen_apexhand_msgs__msg__HandTactileForces__Sequence__copy(
  const rysen_apexhand_msgs__msg__HandTactileForces__Sequence * input,
  rysen_apexhand_msgs__msg__HandTactileForces__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__HAND_TACTILE_FORCES__FUNCTIONS_H_
