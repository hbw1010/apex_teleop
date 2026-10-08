// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rysen_apexhand_msgs:msg/HardwareErrors.idl
// generated code does not contain a copyright notice
#include "rysen_apexhand_msgs/msg/detail/hardware_errors__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
rysen_apexhand_msgs__msg__HardwareErrors__init(rysen_apexhand_msgs__msg__HardwareErrors * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rysen_apexhand_msgs__msg__HardwareErrors__fini(msg);
    return false;
  }
  // device_error_code
  // thumb_error_code
  // index_error_code
  // middle_error_code
  // ring_error_code
  // little_error_code
  return true;
}

void
rysen_apexhand_msgs__msg__HardwareErrors__fini(rysen_apexhand_msgs__msg__HardwareErrors * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // device_error_code
  // thumb_error_code
  // index_error_code
  // middle_error_code
  // ring_error_code
  // little_error_code
}

bool
rysen_apexhand_msgs__msg__HardwareErrors__are_equal(const rysen_apexhand_msgs__msg__HardwareErrors * lhs, const rysen_apexhand_msgs__msg__HardwareErrors * rhs)
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
  // device_error_code
  if (lhs->device_error_code != rhs->device_error_code) {
    return false;
  }
  // thumb_error_code
  if (lhs->thumb_error_code != rhs->thumb_error_code) {
    return false;
  }
  // index_error_code
  if (lhs->index_error_code != rhs->index_error_code) {
    return false;
  }
  // middle_error_code
  if (lhs->middle_error_code != rhs->middle_error_code) {
    return false;
  }
  // ring_error_code
  if (lhs->ring_error_code != rhs->ring_error_code) {
    return false;
  }
  // little_error_code
  if (lhs->little_error_code != rhs->little_error_code) {
    return false;
  }
  return true;
}

bool
rysen_apexhand_msgs__msg__HardwareErrors__copy(
  const rysen_apexhand_msgs__msg__HardwareErrors * input,
  rysen_apexhand_msgs__msg__HardwareErrors * output)
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
  // device_error_code
  output->device_error_code = input->device_error_code;
  // thumb_error_code
  output->thumb_error_code = input->thumb_error_code;
  // index_error_code
  output->index_error_code = input->index_error_code;
  // middle_error_code
  output->middle_error_code = input->middle_error_code;
  // ring_error_code
  output->ring_error_code = input->ring_error_code;
  // little_error_code
  output->little_error_code = input->little_error_code;
  return true;
}

rysen_apexhand_msgs__msg__HardwareErrors *
rysen_apexhand_msgs__msg__HardwareErrors__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__msg__HardwareErrors * msg = (rysen_apexhand_msgs__msg__HardwareErrors *)allocator.allocate(sizeof(rysen_apexhand_msgs__msg__HardwareErrors), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rysen_apexhand_msgs__msg__HardwareErrors));
  bool success = rysen_apexhand_msgs__msg__HardwareErrors__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rysen_apexhand_msgs__msg__HardwareErrors__destroy(rysen_apexhand_msgs__msg__HardwareErrors * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rysen_apexhand_msgs__msg__HardwareErrors__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rysen_apexhand_msgs__msg__HardwareErrors__Sequence__init(rysen_apexhand_msgs__msg__HardwareErrors__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__msg__HardwareErrors * data = NULL;

  if (size) {
    data = (rysen_apexhand_msgs__msg__HardwareErrors *)allocator.zero_allocate(size, sizeof(rysen_apexhand_msgs__msg__HardwareErrors), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rysen_apexhand_msgs__msg__HardwareErrors__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rysen_apexhand_msgs__msg__HardwareErrors__fini(&data[i - 1]);
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
rysen_apexhand_msgs__msg__HardwareErrors__Sequence__fini(rysen_apexhand_msgs__msg__HardwareErrors__Sequence * array)
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
      rysen_apexhand_msgs__msg__HardwareErrors__fini(&array->data[i]);
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

rysen_apexhand_msgs__msg__HardwareErrors__Sequence *
rysen_apexhand_msgs__msg__HardwareErrors__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__msg__HardwareErrors__Sequence * array = (rysen_apexhand_msgs__msg__HardwareErrors__Sequence *)allocator.allocate(sizeof(rysen_apexhand_msgs__msg__HardwareErrors__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rysen_apexhand_msgs__msg__HardwareErrors__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rysen_apexhand_msgs__msg__HardwareErrors__Sequence__destroy(rysen_apexhand_msgs__msg__HardwareErrors__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rysen_apexhand_msgs__msg__HardwareErrors__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rysen_apexhand_msgs__msg__HardwareErrors__Sequence__are_equal(const rysen_apexhand_msgs__msg__HardwareErrors__Sequence * lhs, const rysen_apexhand_msgs__msg__HardwareErrors__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rysen_apexhand_msgs__msg__HardwareErrors__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rysen_apexhand_msgs__msg__HardwareErrors__Sequence__copy(
  const rysen_apexhand_msgs__msg__HardwareErrors__Sequence * input,
  rysen_apexhand_msgs__msg__HardwareErrors__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rysen_apexhand_msgs__msg__HardwareErrors);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rysen_apexhand_msgs__msg__HardwareErrors * data =
      (rysen_apexhand_msgs__msg__HardwareErrors *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rysen_apexhand_msgs__msg__HardwareErrors__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rysen_apexhand_msgs__msg__HardwareErrors__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rysen_apexhand_msgs__msg__HardwareErrors__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
