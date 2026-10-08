// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rysen_apexhand_msgs:srv/ManusCalibration.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__MANUS_CALIBRATION__FUNCTIONS_H_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__MANUS_CALIBRATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rysen_apexhand_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rysen_apexhand_msgs/srv/detail/manus_calibration__struct.h"

/// Initialize srv/ManusCalibration message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rysen_apexhand_msgs__srv__ManusCalibration_Request
 * )) before or use
 * rysen_apexhand_msgs__srv__ManusCalibration_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
bool
rysen_apexhand_msgs__srv__ManusCalibration_Request__init(rysen_apexhand_msgs__srv__ManusCalibration_Request * msg);

/// Finalize srv/ManusCalibration message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
void
rysen_apexhand_msgs__srv__ManusCalibration_Request__fini(rysen_apexhand_msgs__srv__ManusCalibration_Request * msg);

/// Create srv/ManusCalibration message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rysen_apexhand_msgs__srv__ManusCalibration_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
rysen_apexhand_msgs__srv__ManusCalibration_Request *
rysen_apexhand_msgs__srv__ManusCalibration_Request__create();

/// Destroy srv/ManusCalibration message.
/**
 * It calls
 * rysen_apexhand_msgs__srv__ManusCalibration_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
void
rysen_apexhand_msgs__srv__ManusCalibration_Request__destroy(rysen_apexhand_msgs__srv__ManusCalibration_Request * msg);

/// Check for srv/ManusCalibration message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
bool
rysen_apexhand_msgs__srv__ManusCalibration_Request__are_equal(const rysen_apexhand_msgs__srv__ManusCalibration_Request * lhs, const rysen_apexhand_msgs__srv__ManusCalibration_Request * rhs);

/// Copy a srv/ManusCalibration message.
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
rysen_apexhand_msgs__srv__ManusCalibration_Request__copy(
  const rysen_apexhand_msgs__srv__ManusCalibration_Request * input,
  rysen_apexhand_msgs__srv__ManusCalibration_Request * output);

/// Initialize array of srv/ManusCalibration messages.
/**
 * It allocates the memory for the number of elements and calls
 * rysen_apexhand_msgs__srv__ManusCalibration_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
bool
rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence__init(rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence * array, size_t size);

/// Finalize array of srv/ManusCalibration messages.
/**
 * It calls
 * rysen_apexhand_msgs__srv__ManusCalibration_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
void
rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence__fini(rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence * array);

/// Create array of srv/ManusCalibration messages.
/**
 * It allocates the memory for the array and calls
 * rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence *
rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence__create(size_t size);

/// Destroy array of srv/ManusCalibration messages.
/**
 * It calls
 * rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
void
rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence__destroy(rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence * array);

/// Check for srv/ManusCalibration message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
bool
rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence__are_equal(const rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence * lhs, const rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence * rhs);

/// Copy an array of srv/ManusCalibration messages.
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
rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence__copy(
  const rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence * input,
  rysen_apexhand_msgs__srv__ManusCalibration_Request__Sequence * output);

/// Initialize srv/ManusCalibration message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rysen_apexhand_msgs__srv__ManusCalibration_Response
 * )) before or use
 * rysen_apexhand_msgs__srv__ManusCalibration_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
bool
rysen_apexhand_msgs__srv__ManusCalibration_Response__init(rysen_apexhand_msgs__srv__ManusCalibration_Response * msg);

/// Finalize srv/ManusCalibration message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
void
rysen_apexhand_msgs__srv__ManusCalibration_Response__fini(rysen_apexhand_msgs__srv__ManusCalibration_Response * msg);

/// Create srv/ManusCalibration message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rysen_apexhand_msgs__srv__ManusCalibration_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
rysen_apexhand_msgs__srv__ManusCalibration_Response *
rysen_apexhand_msgs__srv__ManusCalibration_Response__create();

/// Destroy srv/ManusCalibration message.
/**
 * It calls
 * rysen_apexhand_msgs__srv__ManusCalibration_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
void
rysen_apexhand_msgs__srv__ManusCalibration_Response__destroy(rysen_apexhand_msgs__srv__ManusCalibration_Response * msg);

/// Check for srv/ManusCalibration message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
bool
rysen_apexhand_msgs__srv__ManusCalibration_Response__are_equal(const rysen_apexhand_msgs__srv__ManusCalibration_Response * lhs, const rysen_apexhand_msgs__srv__ManusCalibration_Response * rhs);

/// Copy a srv/ManusCalibration message.
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
rysen_apexhand_msgs__srv__ManusCalibration_Response__copy(
  const rysen_apexhand_msgs__srv__ManusCalibration_Response * input,
  rysen_apexhand_msgs__srv__ManusCalibration_Response * output);

/// Initialize array of srv/ManusCalibration messages.
/**
 * It allocates the memory for the number of elements and calls
 * rysen_apexhand_msgs__srv__ManusCalibration_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
bool
rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence__init(rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence * array, size_t size);

/// Finalize array of srv/ManusCalibration messages.
/**
 * It calls
 * rysen_apexhand_msgs__srv__ManusCalibration_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
void
rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence__fini(rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence * array);

/// Create array of srv/ManusCalibration messages.
/**
 * It allocates the memory for the array and calls
 * rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence *
rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence__create(size_t size);

/// Destroy array of srv/ManusCalibration messages.
/**
 * It calls
 * rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
void
rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence__destroy(rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence * array);

/// Check for srv/ManusCalibration message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rysen_apexhand_msgs
bool
rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence__are_equal(const rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence * lhs, const rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence * rhs);

/// Copy an array of srv/ManusCalibration messages.
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
rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence__copy(
  const rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence * input,
  rysen_apexhand_msgs__srv__ManusCalibration_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__MANUS_CALIBRATION__FUNCTIONS_H_
