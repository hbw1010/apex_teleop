// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from manus_ros2_msgs:srv/CalibrateGloveTheta.idl
// generated code does not contain a copyright notice
#include "manus_ros2_msgs/srv/detail/calibrate_glove_theta__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `side`
#include "rosidl_runtime_c/string_functions.h"

bool
manus_ros2_msgs__srv__CalibrateGloveTheta_Request__init(manus_ros2_msgs__srv__CalibrateGloveTheta_Request * msg)
{
  if (!msg) {
    return false;
  }
  // side
  if (!rosidl_runtime_c__String__init(&msg->side)) {
    manus_ros2_msgs__srv__CalibrateGloveTheta_Request__fini(msg);
    return false;
  }
  return true;
}

void
manus_ros2_msgs__srv__CalibrateGloveTheta_Request__fini(manus_ros2_msgs__srv__CalibrateGloveTheta_Request * msg)
{
  if (!msg) {
    return;
  }
  // side
  rosidl_runtime_c__String__fini(&msg->side);
}

bool
manus_ros2_msgs__srv__CalibrateGloveTheta_Request__are_equal(const manus_ros2_msgs__srv__CalibrateGloveTheta_Request * lhs, const manus_ros2_msgs__srv__CalibrateGloveTheta_Request * rhs)
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
manus_ros2_msgs__srv__CalibrateGloveTheta_Request__copy(
  const manus_ros2_msgs__srv__CalibrateGloveTheta_Request * input,
  manus_ros2_msgs__srv__CalibrateGloveTheta_Request * output)
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

manus_ros2_msgs__srv__CalibrateGloveTheta_Request *
manus_ros2_msgs__srv__CalibrateGloveTheta_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manus_ros2_msgs__srv__CalibrateGloveTheta_Request * msg = (manus_ros2_msgs__srv__CalibrateGloveTheta_Request *)allocator.allocate(sizeof(manus_ros2_msgs__srv__CalibrateGloveTheta_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(manus_ros2_msgs__srv__CalibrateGloveTheta_Request));
  bool success = manus_ros2_msgs__srv__CalibrateGloveTheta_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
manus_ros2_msgs__srv__CalibrateGloveTheta_Request__destroy(manus_ros2_msgs__srv__CalibrateGloveTheta_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    manus_ros2_msgs__srv__CalibrateGloveTheta_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence__init(manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manus_ros2_msgs__srv__CalibrateGloveTheta_Request * data = NULL;

  if (size) {
    data = (manus_ros2_msgs__srv__CalibrateGloveTheta_Request *)allocator.zero_allocate(size, sizeof(manus_ros2_msgs__srv__CalibrateGloveTheta_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = manus_ros2_msgs__srv__CalibrateGloveTheta_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        manus_ros2_msgs__srv__CalibrateGloveTheta_Request__fini(&data[i - 1]);
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
manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence__fini(manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence * array)
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
      manus_ros2_msgs__srv__CalibrateGloveTheta_Request__fini(&array->data[i]);
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

manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence *
manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence * array = (manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence *)allocator.allocate(sizeof(manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence__destroy(manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence__are_equal(const manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence * lhs, const manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!manus_ros2_msgs__srv__CalibrateGloveTheta_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence__copy(
  const manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence * input,
  manus_ros2_msgs__srv__CalibrateGloveTheta_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(manus_ros2_msgs__srv__CalibrateGloveTheta_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    manus_ros2_msgs__srv__CalibrateGloveTheta_Request * data =
      (manus_ros2_msgs__srv__CalibrateGloveTheta_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!manus_ros2_msgs__srv__CalibrateGloveTheta_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          manus_ros2_msgs__srv__CalibrateGloveTheta_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!manus_ros2_msgs__srv__CalibrateGloveTheta_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `four_fingers_together_tips`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
manus_ros2_msgs__srv__CalibrateGloveTheta_Response__init(manus_ros2_msgs__srv__CalibrateGloveTheta_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // theta_rad
  // theta_deg
  // four_fingers_together_tips
  for (size_t i = 0; i < 5; ++i) {
    if (!geometry_msgs__msg__Point__init(&msg->four_fingers_together_tips[i])) {
      manus_ros2_msgs__srv__CalibrateGloveTheta_Response__fini(msg);
      return false;
    }
  }
  // midpoint_y
  // midpoint_z
  // sample_count
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    manus_ros2_msgs__srv__CalibrateGloveTheta_Response__fini(msg);
    return false;
  }
  return true;
}

void
manus_ros2_msgs__srv__CalibrateGloveTheta_Response__fini(manus_ros2_msgs__srv__CalibrateGloveTheta_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // theta_rad
  // theta_deg
  // four_fingers_together_tips
  for (size_t i = 0; i < 5; ++i) {
    geometry_msgs__msg__Point__fini(&msg->four_fingers_together_tips[i]);
  }
  // midpoint_y
  // midpoint_z
  // sample_count
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
manus_ros2_msgs__srv__CalibrateGloveTheta_Response__are_equal(const manus_ros2_msgs__srv__CalibrateGloveTheta_Response * lhs, const manus_ros2_msgs__srv__CalibrateGloveTheta_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // theta_rad
  if (lhs->theta_rad != rhs->theta_rad) {
    return false;
  }
  // theta_deg
  if (lhs->theta_deg != rhs->theta_deg) {
    return false;
  }
  // four_fingers_together_tips
  for (size_t i = 0; i < 5; ++i) {
    if (!geometry_msgs__msg__Point__are_equal(
        &(lhs->four_fingers_together_tips[i]), &(rhs->four_fingers_together_tips[i])))
    {
      return false;
    }
  }
  // midpoint_y
  if (lhs->midpoint_y != rhs->midpoint_y) {
    return false;
  }
  // midpoint_z
  if (lhs->midpoint_z != rhs->midpoint_z) {
    return false;
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
manus_ros2_msgs__srv__CalibrateGloveTheta_Response__copy(
  const manus_ros2_msgs__srv__CalibrateGloveTheta_Response * input,
  manus_ros2_msgs__srv__CalibrateGloveTheta_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // theta_rad
  output->theta_rad = input->theta_rad;
  // theta_deg
  output->theta_deg = input->theta_deg;
  // four_fingers_together_tips
  for (size_t i = 0; i < 5; ++i) {
    if (!geometry_msgs__msg__Point__copy(
        &(input->four_fingers_together_tips[i]), &(output->four_fingers_together_tips[i])))
    {
      return false;
    }
  }
  // midpoint_y
  output->midpoint_y = input->midpoint_y;
  // midpoint_z
  output->midpoint_z = input->midpoint_z;
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

manus_ros2_msgs__srv__CalibrateGloveTheta_Response *
manus_ros2_msgs__srv__CalibrateGloveTheta_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manus_ros2_msgs__srv__CalibrateGloveTheta_Response * msg = (manus_ros2_msgs__srv__CalibrateGloveTheta_Response *)allocator.allocate(sizeof(manus_ros2_msgs__srv__CalibrateGloveTheta_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(manus_ros2_msgs__srv__CalibrateGloveTheta_Response));
  bool success = manus_ros2_msgs__srv__CalibrateGloveTheta_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
manus_ros2_msgs__srv__CalibrateGloveTheta_Response__destroy(manus_ros2_msgs__srv__CalibrateGloveTheta_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    manus_ros2_msgs__srv__CalibrateGloveTheta_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence__init(manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manus_ros2_msgs__srv__CalibrateGloveTheta_Response * data = NULL;

  if (size) {
    data = (manus_ros2_msgs__srv__CalibrateGloveTheta_Response *)allocator.zero_allocate(size, sizeof(manus_ros2_msgs__srv__CalibrateGloveTheta_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = manus_ros2_msgs__srv__CalibrateGloveTheta_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        manus_ros2_msgs__srv__CalibrateGloveTheta_Response__fini(&data[i - 1]);
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
manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence__fini(manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence * array)
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
      manus_ros2_msgs__srv__CalibrateGloveTheta_Response__fini(&array->data[i]);
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

manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence *
manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence * array = (manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence *)allocator.allocate(sizeof(manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence__destroy(manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence__are_equal(const manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence * lhs, const manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!manus_ros2_msgs__srv__CalibrateGloveTheta_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence__copy(
  const manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence * input,
  manus_ros2_msgs__srv__CalibrateGloveTheta_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(manus_ros2_msgs__srv__CalibrateGloveTheta_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    manus_ros2_msgs__srv__CalibrateGloveTheta_Response * data =
      (manus_ros2_msgs__srv__CalibrateGloveTheta_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!manus_ros2_msgs__srv__CalibrateGloveTheta_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          manus_ros2_msgs__srv__CalibrateGloveTheta_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!manus_ros2_msgs__srv__CalibrateGloveTheta_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
