// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rysen_apexhand_msgs:msg/TangentialForce.idl
// generated code does not contain a copyright notice
#include "rysen_apexhand_msgs/msg/detail/tangential_force__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rysen_apexhand_msgs__msg__TangentialForce__init(rysen_apexhand_msgs__msg__TangentialForce * msg)
{
  if (!msg) {
    return false;
  }
  // theta
  // magnitude
  return true;
}

void
rysen_apexhand_msgs__msg__TangentialForce__fini(rysen_apexhand_msgs__msg__TangentialForce * msg)
{
  if (!msg) {
    return;
  }
  // theta
  // magnitude
}

bool
rysen_apexhand_msgs__msg__TangentialForce__are_equal(const rysen_apexhand_msgs__msg__TangentialForce * lhs, const rysen_apexhand_msgs__msg__TangentialForce * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  // magnitude
  if (lhs->magnitude != rhs->magnitude) {
    return false;
  }
  return true;
}

bool
rysen_apexhand_msgs__msg__TangentialForce__copy(
  const rysen_apexhand_msgs__msg__TangentialForce * input,
  rysen_apexhand_msgs__msg__TangentialForce * output)
{
  if (!input || !output) {
    return false;
  }
  // theta
  output->theta = input->theta;
  // magnitude
  output->magnitude = input->magnitude;
  return true;
}

rysen_apexhand_msgs__msg__TangentialForce *
rysen_apexhand_msgs__msg__TangentialForce__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__msg__TangentialForce * msg = (rysen_apexhand_msgs__msg__TangentialForce *)allocator.allocate(sizeof(rysen_apexhand_msgs__msg__TangentialForce), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rysen_apexhand_msgs__msg__TangentialForce));
  bool success = rysen_apexhand_msgs__msg__TangentialForce__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rysen_apexhand_msgs__msg__TangentialForce__destroy(rysen_apexhand_msgs__msg__TangentialForce * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rysen_apexhand_msgs__msg__TangentialForce__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rysen_apexhand_msgs__msg__TangentialForce__Sequence__init(rysen_apexhand_msgs__msg__TangentialForce__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__msg__TangentialForce * data = NULL;

  if (size) {
    data = (rysen_apexhand_msgs__msg__TangentialForce *)allocator.zero_allocate(size, sizeof(rysen_apexhand_msgs__msg__TangentialForce), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rysen_apexhand_msgs__msg__TangentialForce__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rysen_apexhand_msgs__msg__TangentialForce__fini(&data[i - 1]);
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
rysen_apexhand_msgs__msg__TangentialForce__Sequence__fini(rysen_apexhand_msgs__msg__TangentialForce__Sequence * array)
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
      rysen_apexhand_msgs__msg__TangentialForce__fini(&array->data[i]);
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

rysen_apexhand_msgs__msg__TangentialForce__Sequence *
rysen_apexhand_msgs__msg__TangentialForce__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__msg__TangentialForce__Sequence * array = (rysen_apexhand_msgs__msg__TangentialForce__Sequence *)allocator.allocate(sizeof(rysen_apexhand_msgs__msg__TangentialForce__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rysen_apexhand_msgs__msg__TangentialForce__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rysen_apexhand_msgs__msg__TangentialForce__Sequence__destroy(rysen_apexhand_msgs__msg__TangentialForce__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rysen_apexhand_msgs__msg__TangentialForce__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rysen_apexhand_msgs__msg__TangentialForce__Sequence__are_equal(const rysen_apexhand_msgs__msg__TangentialForce__Sequence * lhs, const rysen_apexhand_msgs__msg__TangentialForce__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rysen_apexhand_msgs__msg__TangentialForce__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rysen_apexhand_msgs__msg__TangentialForce__Sequence__copy(
  const rysen_apexhand_msgs__msg__TangentialForce__Sequence * input,
  rysen_apexhand_msgs__msg__TangentialForce__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rysen_apexhand_msgs__msg__TangentialForce);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rysen_apexhand_msgs__msg__TangentialForce * data =
      (rysen_apexhand_msgs__msg__TangentialForce *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rysen_apexhand_msgs__msg__TangentialForce__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rysen_apexhand_msgs__msg__TangentialForce__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rysen_apexhand_msgs__msg__TangentialForce__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
