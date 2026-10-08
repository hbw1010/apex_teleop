// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from manus_ros2_msgs:srv/RecordGloveFistCalibration.idl
// generated code does not contain a copyright notice
#include "manus_ros2_msgs/srv/detail/record_glove_fist_calibration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `side`
#include "rosidl_runtime_c/string_functions.h"

bool
manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__init(manus_ros2_msgs__srv__RecordGloveFistCalibration_Request * msg)
{
  if (!msg) {
    return false;
  }
  // side
  if (!rosidl_runtime_c__String__init(&msg->side)) {
    manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__fini(msg);
    return false;
  }
  return true;
}

void
manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__fini(manus_ros2_msgs__srv__RecordGloveFistCalibration_Request * msg)
{
  if (!msg) {
    return;
  }
  // side
  rosidl_runtime_c__String__fini(&msg->side);
}

bool
manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__are_equal(const manus_ros2_msgs__srv__RecordGloveFistCalibration_Request * lhs, const manus_ros2_msgs__srv__RecordGloveFistCalibration_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // side
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->side), &(rhs->side)))
  {
    return false;
  }
  return true;
}

bool
manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__copy(
  const manus_ros2_msgs__srv__RecordGloveFistCalibration_Request * input,
  manus_ros2_msgs__srv__RecordGloveFistCalibration_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // side
  if (!rosidl_runtime_c__String__copy(
      &(input->side), &(output->side)))
  {
    return false;
  }
  return true;
}

manus_ros2_msgs__srv__RecordGloveFistCalibration_Request *
manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manus_ros2_msgs__srv__RecordGloveFistCalibration_Request * msg = (manus_ros2_msgs__srv__RecordGloveFistCalibration_Request *)allocator.allocate(sizeof(manus_ros2_msgs__srv__RecordGloveFistCalibration_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(manus_ros2_msgs__srv__RecordGloveFistCalibration_Request));
  bool success = manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__destroy(manus_ros2_msgs__srv__RecordGloveFistCalibration_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence__init(manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manus_ros2_msgs__srv__RecordGloveFistCalibration_Request * data = NULL;

  if (size) {
    data = (manus_ros2_msgs__srv__RecordGloveFistCalibration_Request *)allocator.zero_allocate(size, sizeof(manus_ros2_msgs__srv__RecordGloveFistCalibration_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__fini(&data[i - 1]);
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
manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence__fini(manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence * array)
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
      manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__fini(&array->data[i]);
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

manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence *
manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence * array = (manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence *)allocator.allocate(sizeof(manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence__destroy(manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence__are_equal(const manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence * lhs, const manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence__copy(
  const manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence * input,
  manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(manus_ros2_msgs__srv__RecordGloveFistCalibration_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    manus_ros2_msgs__srv__RecordGloveFistCalibration_Request * data =
      (manus_ros2_msgs__srv__RecordGloveFistCalibration_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!manus_ros2_msgs__srv__RecordGloveFistCalibration_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `fist_tips`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__init(manus_ros2_msgs__srv__RecordGloveFistCalibration_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // fist_tips
  for (size_t i = 0; i < 5; ++i) {
    if (!geometry_msgs__msg__Point__init(&msg->fist_tips[i])) {
      manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__fini(msg);
      return false;
    }
  }
  // sample_count
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__fini(msg);
    return false;
  }
  return true;
}

void
manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__fini(manus_ros2_msgs__srv__RecordGloveFistCalibration_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // fist_tips
  for (size_t i = 0; i < 5; ++i) {
    geometry_msgs__msg__Point__fini(&msg->fist_tips[i]);
  }
  // sample_count
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__are_equal(const manus_ros2_msgs__srv__RecordGloveFistCalibration_Response * lhs, const manus_ros2_msgs__srv__RecordGloveFistCalibration_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // fist_tips
  for (size_t i = 0; i < 5; ++i) {
    if (!geometry_msgs__msg__Point__are_equal(
        &(lhs->fist_tips[i]), &(rhs->fist_tips[i])))
    {
      return false;
    }
  }
  // sample_count
  if (lhs->sample_count != rhs->sample_count) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__copy(
  const manus_ros2_msgs__srv__RecordGloveFistCalibration_Response * input,
  manus_ros2_msgs__srv__RecordGloveFistCalibration_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // fist_tips
  for (size_t i = 0; i < 5; ++i) {
    if (!geometry_msgs__msg__Point__copy(
        &(input->fist_tips[i]), &(output->fist_tips[i])))
    {
      return false;
    }
  }
  // sample_count
  output->sample_count = input->sample_count;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

manus_ros2_msgs__srv__RecordGloveFistCalibration_Response *
manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manus_ros2_msgs__srv__RecordGloveFistCalibration_Response * msg = (manus_ros2_msgs__srv__RecordGloveFistCalibration_Response *)allocator.allocate(sizeof(manus_ros2_msgs__srv__RecordGloveFistCalibration_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(manus_ros2_msgs__srv__RecordGloveFistCalibration_Response));
  bool success = manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__destroy(manus_ros2_msgs__srv__RecordGloveFistCalibration_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence__init(manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manus_ros2_msgs__srv__RecordGloveFistCalibration_Response * data = NULL;

  if (size) {
    data = (manus_ros2_msgs__srv__RecordGloveFistCalibration_Response *)allocator.zero_allocate(size, sizeof(manus_ros2_msgs__srv__RecordGloveFistCalibration_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__fini(&data[i - 1]);
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
manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence__fini(manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence * array)
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
      manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__fini(&array->data[i]);
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

manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence *
manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence * array = (manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence *)allocator.allocate(sizeof(manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence__destroy(manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence__are_equal(const manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence * lhs, const manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence__copy(
  const manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence * input,
  manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(manus_ros2_msgs__srv__RecordGloveFistCalibration_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    manus_ros2_msgs__srv__RecordGloveFistCalibration_Response * data =
      (manus_ros2_msgs__srv__RecordGloveFistCalibration_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!manus_ros2_msgs__srv__RecordGloveFistCalibration_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
