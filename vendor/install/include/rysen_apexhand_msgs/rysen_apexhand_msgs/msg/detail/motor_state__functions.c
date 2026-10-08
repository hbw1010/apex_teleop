// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rysen_apexhand_msgs:msg/MotorState.idl
// generated code does not contain a copyright notice
#include "rysen_apexhand_msgs/msg/detail/motor_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `temperature`
// Member `current`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rysen_apexhand_msgs__msg__MotorState__init(rysen_apexhand_msgs__msg__MotorState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rysen_apexhand_msgs__msg__MotorState__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->name, 0)) {
    rysen_apexhand_msgs__msg__MotorState__fini(msg);
    return false;
  }
  // temperature
  if (!rosidl_runtime_c__double__Sequence__init(&msg->temperature, 0)) {
    rysen_apexhand_msgs__msg__MotorState__fini(msg);
    return false;
  }
  // current
  if (!rosidl_runtime_c__double__Sequence__init(&msg->current, 0)) {
    rysen_apexhand_msgs__msg__MotorState__fini(msg);
    return false;
  }
  return true;
}

void
rysen_apexhand_msgs__msg__MotorState__fini(rysen_apexhand_msgs__msg__MotorState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name
  rosidl_runtime_c__String__Sequence__fini(&msg->name);
  // temperature
  rosidl_runtime_c__double__Sequence__fini(&msg->temperature);
  // current
  rosidl_runtime_c__double__Sequence__fini(&msg->current);
}

bool
rysen_apexhand_msgs__msg__MotorState__are_equal(const rysen_apexhand_msgs__msg__MotorState * lhs, const rysen_apexhand_msgs__msg__MotorState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // temperature
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->temperature), &(rhs->temperature)))
  {
    return false;
  }
  // current
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->current), &(rhs->current)))
  {
    return false;
  }
  return true;
}

bool
rysen_apexhand_msgs__msg__MotorState__copy(
  const rysen_apexhand_msgs__msg__MotorState * input,
  rysen_apexhand_msgs__msg__MotorState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // temperature
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->temperature), &(output->temperature)))
  {
    return false;
  }
  // current
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->current), &(output->current)))
  {
    return false;
  }
  return true;
}

rysen_apexhand_msgs__msg__MotorState *
rysen_apexhand_msgs__msg__MotorState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__msg__MotorState * msg = (rysen_apexhand_msgs__msg__MotorState *)allocator.allocate(sizeof(rysen_apexhand_msgs__msg__MotorState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rysen_apexhand_msgs__msg__MotorState));
  bool success = rysen_apexhand_msgs__msg__MotorState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rysen_apexhand_msgs__msg__MotorState__destroy(rysen_apexhand_msgs__msg__MotorState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rysen_apexhand_msgs__msg__MotorState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rysen_apexhand_msgs__msg__MotorState__Sequence__init(rysen_apexhand_msgs__msg__MotorState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__msg__MotorState * data = NULL;

  if (size) {
    data = (rysen_apexhand_msgs__msg__MotorState *)allocator.zero_allocate(size, sizeof(rysen_apexhand_msgs__msg__MotorState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rysen_apexhand_msgs__msg__MotorState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rysen_apexhand_msgs__msg__MotorState__fini(&data[i - 1]);
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
rysen_apexhand_msgs__msg__MotorState__Sequence__fini(rysen_apexhand_msgs__msg__MotorState__Sequence * array)
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
      rysen_apexhand_msgs__msg__MotorState__fini(&array->data[i]);
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

rysen_apexhand_msgs__msg__MotorState__Sequence *
rysen_apexhand_msgs__msg__MotorState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__msg__MotorState__Sequence * array = (rysen_apexhand_msgs__msg__MotorState__Sequence *)allocator.allocate(sizeof(rysen_apexhand_msgs__msg__MotorState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rysen_apexhand_msgs__msg__MotorState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rysen_apexhand_msgs__msg__MotorState__Sequence__destroy(rysen_apexhand_msgs__msg__MotorState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rysen_apexhand_msgs__msg__MotorState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rysen_apexhand_msgs__msg__MotorState__Sequence__are_equal(const rysen_apexhand_msgs__msg__MotorState__Sequence * lhs, const rysen_apexhand_msgs__msg__MotorState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rysen_apexhand_msgs__msg__MotorState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rysen_apexhand_msgs__msg__MotorState__Sequence__copy(
  const rysen_apexhand_msgs__msg__MotorState__Sequence * input,
  rysen_apexhand_msgs__msg__MotorState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rysen_apexhand_msgs__msg__MotorState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rysen_apexhand_msgs__msg__MotorState * data =
      (rysen_apexhand_msgs__msg__MotorState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rysen_apexhand_msgs__msg__MotorState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rysen_apexhand_msgs__msg__MotorState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rysen_apexhand_msgs__msg__MotorState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
