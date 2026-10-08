// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rysen_apexhand_msgs:msg/FingerId.idl
// generated code does not contain a copyright notice
#include "rysen_apexhand_msgs/msg/detail/finger_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rysen_apexhand_msgs__msg__FingerId__init(rysen_apexhand_msgs__msg__FingerId * msg)
{
  if (!msg) {
    return false;
  }
  // finger_id
  return true;
}

void
rysen_apexhand_msgs__msg__FingerId__fini(rysen_apexhand_msgs__msg__FingerId * msg)
{
  if (!msg) {
    return;
  }
  // finger_id
}

bool
rysen_apexhand_msgs__msg__FingerId__are_equal(const rysen_apexhand_msgs__msg__FingerId * lhs, const rysen_apexhand_msgs__msg__FingerId * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // finger_id
  if (lhs->finger_id != rhs->finger_id) {
    return false;
  }
  return true;
}

bool
rysen_apexhand_msgs__msg__FingerId__copy(
  const rysen_apexhand_msgs__msg__FingerId * input,
  rysen_apexhand_msgs__msg__FingerId * output)
{
  if (!input || !output) {
    return false;
  }
  // finger_id
  output->finger_id = input->finger_id;
  return true;
}

rysen_apexhand_msgs__msg__FingerId *
rysen_apexhand_msgs__msg__FingerId__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__msg__FingerId * msg = (rysen_apexhand_msgs__msg__FingerId *)allocator.allocate(sizeof(rysen_apexhand_msgs__msg__FingerId), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rysen_apexhand_msgs__msg__FingerId));
  bool success = rysen_apexhand_msgs__msg__FingerId__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rysen_apexhand_msgs__msg__FingerId__destroy(rysen_apexhand_msgs__msg__FingerId * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rysen_apexhand_msgs__msg__FingerId__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rysen_apexhand_msgs__msg__FingerId__Sequence__init(rysen_apexhand_msgs__msg__FingerId__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__msg__FingerId * data = NULL;

  if (size) {
    data = (rysen_apexhand_msgs__msg__FingerId *)allocator.zero_allocate(size, sizeof(rysen_apexhand_msgs__msg__FingerId), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rysen_apexhand_msgs__msg__FingerId__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rysen_apexhand_msgs__msg__FingerId__fini(&data[i - 1]);
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
rysen_apexhand_msgs__msg__FingerId__Sequence__fini(rysen_apexhand_msgs__msg__FingerId__Sequence * array)
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
      rysen_apexhand_msgs__msg__FingerId__fini(&array->data[i]);
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

rysen_apexhand_msgs__msg__FingerId__Sequence *
rysen_apexhand_msgs__msg__FingerId__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__msg__FingerId__Sequence * array = (rysen_apexhand_msgs__msg__FingerId__Sequence *)allocator.allocate(sizeof(rysen_apexhand_msgs__msg__FingerId__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rysen_apexhand_msgs__msg__FingerId__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rysen_apexhand_msgs__msg__FingerId__Sequence__destroy(rysen_apexhand_msgs__msg__FingerId__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rysen_apexhand_msgs__msg__FingerId__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rysen_apexhand_msgs__msg__FingerId__Sequence__are_equal(const rysen_apexhand_msgs__msg__FingerId__Sequence * lhs, const rysen_apexhand_msgs__msg__FingerId__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rysen_apexhand_msgs__msg__FingerId__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rysen_apexhand_msgs__msg__FingerId__Sequence__copy(
  const rysen_apexhand_msgs__msg__FingerId__Sequence * input,
  rysen_apexhand_msgs__msg__FingerId__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rysen_apexhand_msgs__msg__FingerId);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rysen_apexhand_msgs__msg__FingerId * data =
      (rysen_apexhand_msgs__msg__FingerId *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rysen_apexhand_msgs__msg__FingerId__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rysen_apexhand_msgs__msg__FingerId__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rysen_apexhand_msgs__msg__FingerId__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
