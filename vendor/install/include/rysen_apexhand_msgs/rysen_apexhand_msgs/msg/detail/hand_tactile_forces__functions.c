// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rysen_apexhand_msgs:msg/HandTactileForces.idl
// generated code does not contain a copyright notice
#include "rysen_apexhand_msgs/msg/detail/hand_tactile_forces__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `index`
// Member `middle`
// Member `ring`
// Member `little`
#include "rysen_apexhand_msgs/msg/detail/common_finger_tactile__functions.h"
// Member `thumb`
#include "rysen_apexhand_msgs/msg/detail/thumb_finger_tactile__functions.h"
// Member `palm_center`
#include "rysen_apexhand_msgs/msg/detail/tactile_image__functions.h"

bool
rysen_apexhand_msgs__msg__HandTactileForces__init(rysen_apexhand_msgs__msg__HandTactileForces * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    rysen_apexhand_msgs__msg__HandTactileForces__fini(msg);
    return false;
  }
  // index
  if (!rysen_apexhand_msgs__msg__CommonFingerTactile__init(&msg->index)) {
    rysen_apexhand_msgs__msg__HandTactileForces__fini(msg);
    return false;
  }
  // middle
  if (!rysen_apexhand_msgs__msg__CommonFingerTactile__init(&msg->middle)) {
    rysen_apexhand_msgs__msg__HandTactileForces__fini(msg);
    return false;
  }
  // ring
  if (!rysen_apexhand_msgs__msg__CommonFingerTactile__init(&msg->ring)) {
    rysen_apexhand_msgs__msg__HandTactileForces__fini(msg);
    return false;
  }
  // little
  if (!rysen_apexhand_msgs__msg__CommonFingerTactile__init(&msg->little)) {
    rysen_apexhand_msgs__msg__HandTactileForces__fini(msg);
    return false;
  }
  // thumb
  if (!rysen_apexhand_msgs__msg__ThumbFingerTactile__init(&msg->thumb)) {
    rysen_apexhand_msgs__msg__HandTactileForces__fini(msg);
    return false;
  }
  // palm_center
  if (!rysen_apexhand_msgs__msg__TactileImage__init(&msg->palm_center)) {
    rysen_apexhand_msgs__msg__HandTactileForces__fini(msg);
    return false;
  }
  return true;
}

void
rysen_apexhand_msgs__msg__HandTactileForces__fini(rysen_apexhand_msgs__msg__HandTactileForces * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // index
  rysen_apexhand_msgs__msg__CommonFingerTactile__fini(&msg->index);
  // middle
  rysen_apexhand_msgs__msg__CommonFingerTactile__fini(&msg->middle);
  // ring
  rysen_apexhand_msgs__msg__CommonFingerTactile__fini(&msg->ring);
  // little
  rysen_apexhand_msgs__msg__CommonFingerTactile__fini(&msg->little);
  // thumb
  rysen_apexhand_msgs__msg__ThumbFingerTactile__fini(&msg->thumb);
  // palm_center
  rysen_apexhand_msgs__msg__TactileImage__fini(&msg->palm_center);
}

bool
rysen_apexhand_msgs__msg__HandTactileForces__are_equal(const rysen_apexhand_msgs__msg__HandTactileForces * lhs, const rysen_apexhand_msgs__msg__HandTactileForces * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // index
  if (!rysen_apexhand_msgs__msg__CommonFingerTactile__are_equal(
      &(lhs->index), &(rhs->index)))
  {
    return false;
  }
  // middle
  if (!rysen_apexhand_msgs__msg__CommonFingerTactile__are_equal(
      &(lhs->middle), &(rhs->middle)))
  {
    return false;
  }
  // ring
  if (!rysen_apexhand_msgs__msg__CommonFingerTactile__are_equal(
      &(lhs->ring), &(rhs->ring)))
  {
    return false;
  }
  // little
  if (!rysen_apexhand_msgs__msg__CommonFingerTactile__are_equal(
      &(lhs->little), &(rhs->little)))
  {
    return false;
  }
  // thumb
  if (!rysen_apexhand_msgs__msg__ThumbFingerTactile__are_equal(
      &(lhs->thumb), &(rhs->thumb)))
  {
    return false;
  }
  // palm_center
  if (!rysen_apexhand_msgs__msg__TactileImage__are_equal(
      &(lhs->palm_center), &(rhs->palm_center)))
  {
    return false;
  }
  return true;
}

bool
rysen_apexhand_msgs__msg__HandTactileForces__copy(
  const rysen_apexhand_msgs__msg__HandTactileForces * input,
  rysen_apexhand_msgs__msg__HandTactileForces * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // index
  if (!rysen_apexhand_msgs__msg__CommonFingerTactile__copy(
      &(input->index), &(output->index)))
  {
    return false;
  }
  // middle
  if (!rysen_apexhand_msgs__msg__CommonFingerTactile__copy(
      &(input->middle), &(output->middle)))
  {
    return false;
  }
  // ring
  if (!rysen_apexhand_msgs__msg__CommonFingerTactile__copy(
      &(input->ring), &(output->ring)))
  {
    return false;
  }
  // little
  if (!rysen_apexhand_msgs__msg__CommonFingerTactile__copy(
      &(input->little), &(output->little)))
  {
    return false;
  }
  // thumb
  if (!rysen_apexhand_msgs__msg__ThumbFingerTactile__copy(
      &(input->thumb), &(output->thumb)))
  {
    return false;
  }
  // palm_center
  if (!rysen_apexhand_msgs__msg__TactileImage__copy(
      &(input->palm_center), &(output->palm_center)))
  {
    return false;
  }
  return true;
}

rysen_apexhand_msgs__msg__HandTactileForces *
rysen_apexhand_msgs__msg__HandTactileForces__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__msg__HandTactileForces * msg = (rysen_apexhand_msgs__msg__HandTactileForces *)allocator.allocate(sizeof(rysen_apexhand_msgs__msg__HandTactileForces), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rysen_apexhand_msgs__msg__HandTactileForces));
  bool success = rysen_apexhand_msgs__msg__HandTactileForces__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rysen_apexhand_msgs__msg__HandTactileForces__destroy(rysen_apexhand_msgs__msg__HandTactileForces * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rysen_apexhand_msgs__msg__HandTactileForces__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rysen_apexhand_msgs__msg__HandTactileForces__Sequence__init(rysen_apexhand_msgs__msg__HandTactileForces__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__msg__HandTactileForces * data = NULL;

  if (size) {
    data = (rysen_apexhand_msgs__msg__HandTactileForces *)allocator.zero_allocate(size, sizeof(rysen_apexhand_msgs__msg__HandTactileForces), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rysen_apexhand_msgs__msg__HandTactileForces__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rysen_apexhand_msgs__msg__HandTactileForces__fini(&data[i - 1]);
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
rysen_apexhand_msgs__msg__HandTactileForces__Sequence__fini(rysen_apexhand_msgs__msg__HandTactileForces__Sequence * array)
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
      rysen_apexhand_msgs__msg__HandTactileForces__fini(&array->data[i]);
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

rysen_apexhand_msgs__msg__HandTactileForces__Sequence *
rysen_apexhand_msgs__msg__HandTactileForces__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__msg__HandTactileForces__Sequence * array = (rysen_apexhand_msgs__msg__HandTactileForces__Sequence *)allocator.allocate(sizeof(rysen_apexhand_msgs__msg__HandTactileForces__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rysen_apexhand_msgs__msg__HandTactileForces__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rysen_apexhand_msgs__msg__HandTactileForces__Sequence__destroy(rysen_apexhand_msgs__msg__HandTactileForces__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rysen_apexhand_msgs__msg__HandTactileForces__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rysen_apexhand_msgs__msg__HandTactileForces__Sequence__are_equal(const rysen_apexhand_msgs__msg__HandTactileForces__Sequence * lhs, const rysen_apexhand_msgs__msg__HandTactileForces__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rysen_apexhand_msgs__msg__HandTactileForces__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rysen_apexhand_msgs__msg__HandTactileForces__Sequence__copy(
  const rysen_apexhand_msgs__msg__HandTactileForces__Sequence * input,
  rysen_apexhand_msgs__msg__HandTactileForces__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rysen_apexhand_msgs__msg__HandTactileForces);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rysen_apexhand_msgs__msg__HandTactileForces * data =
      (rysen_apexhand_msgs__msg__HandTactileForces *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rysen_apexhand_msgs__msg__HandTactileForces__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rysen_apexhand_msgs__msg__HandTactileForces__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rysen_apexhand_msgs__msg__HandTactileForces__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
