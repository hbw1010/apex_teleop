// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rysen_apexhand_msgs:msg/TactileImage.idl
// generated code does not contain a copyright notice
#include "rysen_apexhand_msgs/msg/detail/tactile_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `gray_image`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `tangential_forces`
#include "rysen_apexhand_msgs/msg/detail/tangential_force__functions.h"

bool
rysen_apexhand_msgs__msg__TactileImage__init(rysen_apexhand_msgs__msg__TactileImage * msg)
{
  if (!msg) {
    return false;
  }
  // width
  // height
  // gray_image
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->gray_image, 0)) {
    rysen_apexhand_msgs__msg__TactileImage__fini(msg);
    return false;
  }
  // tangential_forces
  if (!rysen_apexhand_msgs__msg__TangentialForce__init(&msg->tangential_forces)) {
    rysen_apexhand_msgs__msg__TactileImage__fini(msg);
    return false;
  }
  return true;
}

void
rysen_apexhand_msgs__msg__TactileImage__fini(rysen_apexhand_msgs__msg__TactileImage * msg)
{
  if (!msg) {
    return;
  }
  // width
  // height
  // gray_image
  rosidl_runtime_c__uint16__Sequence__fini(&msg->gray_image);
  // tangential_forces
  rysen_apexhand_msgs__msg__TangentialForce__fini(&msg->tangential_forces);
}

bool
rysen_apexhand_msgs__msg__TactileImage__are_equal(const rysen_apexhand_msgs__msg__TactileImage * lhs, const rysen_apexhand_msgs__msg__TactileImage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // gray_image
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->gray_image), &(rhs->gray_image)))
  {
    return false;
  }
  // tangential_forces
  if (!rysen_apexhand_msgs__msg__TangentialForce__are_equal(
      &(lhs->tangential_forces), &(rhs->tangential_forces)))
  {
    return false;
  }
  return true;
}

bool
rysen_apexhand_msgs__msg__TactileImage__copy(
  const rysen_apexhand_msgs__msg__TactileImage * input,
  rysen_apexhand_msgs__msg__TactileImage * output)
{
  if (!input || !output) {
    return false;
  }
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // gray_image
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->gray_image), &(output->gray_image)))
  {
    return false;
  }
  // tangential_forces
  if (!rysen_apexhand_msgs__msg__TangentialForce__copy(
      &(input->tangential_forces), &(output->tangential_forces)))
  {
    return false;
  }
  return true;
}

rysen_apexhand_msgs__msg__TactileImage *
rysen_apexhand_msgs__msg__TactileImage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__msg__TactileImage * msg = (rysen_apexhand_msgs__msg__TactileImage *)allocator.allocate(sizeof(rysen_apexhand_msgs__msg__TactileImage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rysen_apexhand_msgs__msg__TactileImage));
  bool success = rysen_apexhand_msgs__msg__TactileImage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rysen_apexhand_msgs__msg__TactileImage__destroy(rysen_apexhand_msgs__msg__TactileImage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rysen_apexhand_msgs__msg__TactileImage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rysen_apexhand_msgs__msg__TactileImage__Sequence__init(rysen_apexhand_msgs__msg__TactileImage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__msg__TactileImage * data = NULL;

  if (size) {
    data = (rysen_apexhand_msgs__msg__TactileImage *)allocator.zero_allocate(size, sizeof(rysen_apexhand_msgs__msg__TactileImage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rysen_apexhand_msgs__msg__TactileImage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rysen_apexhand_msgs__msg__TactileImage__fini(&data[i - 1]);
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
rysen_apexhand_msgs__msg__TactileImage__Sequence__fini(rysen_apexhand_msgs__msg__TactileImage__Sequence * array)
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
      rysen_apexhand_msgs__msg__TactileImage__fini(&array->data[i]);
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

rysen_apexhand_msgs__msg__TactileImage__Sequence *
rysen_apexhand_msgs__msg__TactileImage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__msg__TactileImage__Sequence * array = (rysen_apexhand_msgs__msg__TactileImage__Sequence *)allocator.allocate(sizeof(rysen_apexhand_msgs__msg__TactileImage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rysen_apexhand_msgs__msg__TactileImage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rysen_apexhand_msgs__msg__TactileImage__Sequence__destroy(rysen_apexhand_msgs__msg__TactileImage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rysen_apexhand_msgs__msg__TactileImage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rysen_apexhand_msgs__msg__TactileImage__Sequence__are_equal(const rysen_apexhand_msgs__msg__TactileImage__Sequence * lhs, const rysen_apexhand_msgs__msg__TactileImage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rysen_apexhand_msgs__msg__TactileImage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rysen_apexhand_msgs__msg__TactileImage__Sequence__copy(
  const rysen_apexhand_msgs__msg__TactileImage__Sequence * input,
  rysen_apexhand_msgs__msg__TactileImage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rysen_apexhand_msgs__msg__TactileImage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rysen_apexhand_msgs__msg__TactileImage * data =
      (rysen_apexhand_msgs__msg__TactileImage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rysen_apexhand_msgs__msg__TactileImage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rysen_apexhand_msgs__msg__TactileImage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rysen_apexhand_msgs__msg__TactileImage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
