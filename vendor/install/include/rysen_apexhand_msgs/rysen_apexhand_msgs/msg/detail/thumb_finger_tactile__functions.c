// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rysen_apexhand_msgs:msg/ThumbFingerTactile.idl
// generated code does not contain a copyright notice
#include "rysen_apexhand_msgs/msg/detail/thumb_finger_tactile__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `prox_pad`
// Member `mid_pad`
// Member `dist_pad`
#include "rysen_apexhand_msgs/msg/detail/tactile_image__functions.h"

bool
rysen_apexhand_msgs__msg__ThumbFingerTactile__init(rysen_apexhand_msgs__msg__ThumbFingerTactile * msg)
{
  if (!msg) {
    return false;
  }
  // prox_pad
  if (!rysen_apexhand_msgs__msg__TactileImage__init(&msg->prox_pad)) {
    rysen_apexhand_msgs__msg__ThumbFingerTactile__fini(msg);
    return false;
  }
  // mid_pad
  if (!rysen_apexhand_msgs__msg__TactileImage__init(&msg->mid_pad)) {
    rysen_apexhand_msgs__msg__ThumbFingerTactile__fini(msg);
    return false;
  }
  // dist_pad
  if (!rysen_apexhand_msgs__msg__TactileImage__init(&msg->dist_pad)) {
    rysen_apexhand_msgs__msg__ThumbFingerTactile__fini(msg);
    return false;
  }
  return true;
}

void
rysen_apexhand_msgs__msg__ThumbFingerTactile__fini(rysen_apexhand_msgs__msg__ThumbFingerTactile * msg)
{
  if (!msg) {
    return;
  }
  // prox_pad
  rysen_apexhand_msgs__msg__TactileImage__fini(&msg->prox_pad);
  // mid_pad
  rysen_apexhand_msgs__msg__TactileImage__fini(&msg->mid_pad);
  // dist_pad
  rysen_apexhand_msgs__msg__TactileImage__fini(&msg->dist_pad);
}

bool
rysen_apexhand_msgs__msg__ThumbFingerTactile__are_equal(const rysen_apexhand_msgs__msg__ThumbFingerTactile * lhs, const rysen_apexhand_msgs__msg__ThumbFingerTactile * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // prox_pad
  if (!rysen_apexhand_msgs__msg__TactileImage__are_equal(
      &(lhs->prox_pad), &(rhs->prox_pad)))
  {
    return false;
  }
  // mid_pad
  if (!rysen_apexhand_msgs__msg__TactileImage__are_equal(
      &(lhs->mid_pad), &(rhs->mid_pad)))
  {
    return false;
  }
  // dist_pad
  if (!rysen_apexhand_msgs__msg__TactileImage__are_equal(
      &(lhs->dist_pad), &(rhs->dist_pad)))
  {
    return false;
  }
  return true;
}

bool
rysen_apexhand_msgs__msg__ThumbFingerTactile__copy(
  const rysen_apexhand_msgs__msg__ThumbFingerTactile * input,
  rysen_apexhand_msgs__msg__ThumbFingerTactile * output)
{
  if (!input || !output) {
    return false;
  }
  // prox_pad
  if (!rysen_apexhand_msgs__msg__TactileImage__copy(
      &(input->prox_pad), &(output->prox_pad)))
  {
    return false;
  }
  // mid_pad
  if (!rysen_apexhand_msgs__msg__TactileImage__copy(
      &(input->mid_pad), &(output->mid_pad)))
  {
    return false;
  }
  // dist_pad
  if (!rysen_apexhand_msgs__msg__TactileImage__copy(
      &(input->dist_pad), &(output->dist_pad)))
  {
    return false;
  }
  return true;
}

rysen_apexhand_msgs__msg__ThumbFingerTactile *
rysen_apexhand_msgs__msg__ThumbFingerTactile__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__msg__ThumbFingerTactile * msg = (rysen_apexhand_msgs__msg__ThumbFingerTactile *)allocator.allocate(sizeof(rysen_apexhand_msgs__msg__ThumbFingerTactile), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rysen_apexhand_msgs__msg__ThumbFingerTactile));
  bool success = rysen_apexhand_msgs__msg__ThumbFingerTactile__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rysen_apexhand_msgs__msg__ThumbFingerTactile__destroy(rysen_apexhand_msgs__msg__ThumbFingerTactile * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rysen_apexhand_msgs__msg__ThumbFingerTactile__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence__init(rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__msg__ThumbFingerTactile * data = NULL;

  if (size) {
    data = (rysen_apexhand_msgs__msg__ThumbFingerTactile *)allocator.zero_allocate(size, sizeof(rysen_apexhand_msgs__msg__ThumbFingerTactile), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rysen_apexhand_msgs__msg__ThumbFingerTactile__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rysen_apexhand_msgs__msg__ThumbFingerTactile__fini(&data[i - 1]);
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
rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence__fini(rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence * array)
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
      rysen_apexhand_msgs__msg__ThumbFingerTactile__fini(&array->data[i]);
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

rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence *
rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence * array = (rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence *)allocator.allocate(sizeof(rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence__destroy(rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence__are_equal(const rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence * lhs, const rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rysen_apexhand_msgs__msg__ThumbFingerTactile__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence__copy(
  const rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence * input,
  rysen_apexhand_msgs__msg__ThumbFingerTactile__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rysen_apexhand_msgs__msg__ThumbFingerTactile);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rysen_apexhand_msgs__msg__ThumbFingerTactile * data =
      (rysen_apexhand_msgs__msg__ThumbFingerTactile *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rysen_apexhand_msgs__msg__ThumbFingerTactile__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rysen_apexhand_msgs__msg__ThumbFingerTactile__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rysen_apexhand_msgs__msg__ThumbFingerTactile__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
