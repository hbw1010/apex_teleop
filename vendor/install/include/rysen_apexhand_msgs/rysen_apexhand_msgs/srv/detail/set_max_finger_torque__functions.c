// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rysen_apexhand_msgs:srv/SetMaxFingerTorque.idl
// generated code does not contain a copyright notice
#include "rysen_apexhand_msgs/srv/detail/set_max_finger_torque__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `ip`
#include "rosidl_runtime_c/string_functions.h"
// Member `finger_ids`
// Member `max_torques`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__init(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request * msg)
{
  if (!msg) {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__init(&msg->ip)) {
    rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__fini(msg);
    return false;
  }
  // get_only
  // finger_ids
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->finger_ids, 0)) {
    rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__fini(msg);
    return false;
  }
  // max_torques
  if (!rosidl_runtime_c__double__Sequence__init(&msg->max_torques, 0)) {
    rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__fini(msg);
    return false;
  }
  return true;
}

void
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__fini(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request * msg)
{
  if (!msg) {
    return;
  }
  // ip
  rosidl_runtime_c__String__fini(&msg->ip);
  // get_only
  // finger_ids
  rosidl_runtime_c__uint8__Sequence__fini(&msg->finger_ids);
  // max_torques
  rosidl_runtime_c__double__Sequence__fini(&msg->max_torques);
}

bool
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__are_equal(const rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request * lhs, const rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ip), &(rhs->ip)))
  {
    return false;
  }
  // get_only
  if (lhs->get_only != rhs->get_only) {
    return false;
  }
  // finger_ids
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->finger_ids), &(rhs->finger_ids)))
  {
    return false;
  }
  // max_torques
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->max_torques), &(rhs->max_torques)))
  {
    return false;
  }
  return true;
}

bool
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__copy(
  const rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request * input,
  rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__copy(
      &(input->ip), &(output->ip)))
  {
    return false;
  }
  // get_only
  output->get_only = input->get_only;
  // finger_ids
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->finger_ids), &(output->finger_ids)))
  {
    return false;
  }
  // max_torques
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->max_torques), &(output->max_torques)))
  {
    return false;
  }
  return true;
}

rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request *
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request * msg = (rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request *)allocator.allocate(sizeof(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request));
  bool success = rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__destroy(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence__init(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request * data = NULL;

  if (size) {
    data = (rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request *)allocator.zero_allocate(size, sizeof(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence__fini(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence *
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence * array = (rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence *)allocator.allocate(sizeof(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence__destroy(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence__are_equal(const rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence * lhs, const rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence__copy(
  const rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence * input,
  rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request * data =
      (rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rysen_apexhand_msgs__srv__SetMaxFingerTorque_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `max_torques`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__init(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__fini(msg);
    return false;
  }
  // max_torques
  if (!rosidl_runtime_c__double__Sequence__init(&msg->max_torques, 0)) {
    rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__fini(msg);
    return false;
  }
  return true;
}

void
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__fini(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // max_torques
  rosidl_runtime_c__double__Sequence__fini(&msg->max_torques);
}

bool
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__are_equal(const rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response * lhs, const rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // max_torques
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->max_torques), &(rhs->max_torques)))
  {
    return false;
  }
  return true;
}

bool
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__copy(
  const rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response * input,
  rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // max_torques
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->max_torques), &(output->max_torques)))
  {
    return false;
  }
  return true;
}

rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response *
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response * msg = (rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response *)allocator.allocate(sizeof(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response));
  bool success = rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__destroy(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence__init(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response * data = NULL;

  if (size) {
    data = (rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response *)allocator.zero_allocate(size, sizeof(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence__fini(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence *
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence * array = (rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence *)allocator.allocate(sizeof(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence__destroy(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence__are_equal(const rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence * lhs, const rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence__copy(
  const rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence * input,
  rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response * data =
      (rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rysen_apexhand_msgs__srv__SetMaxFingerTorque_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
