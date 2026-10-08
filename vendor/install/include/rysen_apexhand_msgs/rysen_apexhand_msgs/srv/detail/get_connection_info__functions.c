// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rysen_apexhand_msgs:srv/GetConnectionInfo.idl
// generated code does not contain a copyright notice
#include "rysen_apexhand_msgs/srv/detail/get_connection_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
rysen_apexhand_msgs__srv__GetConnectionInfo_Request__init(rysen_apexhand_msgs__srv__GetConnectionInfo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
rysen_apexhand_msgs__srv__GetConnectionInfo_Request__fini(rysen_apexhand_msgs__srv__GetConnectionInfo_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
rysen_apexhand_msgs__srv__GetConnectionInfo_Request__are_equal(const rysen_apexhand_msgs__srv__GetConnectionInfo_Request * lhs, const rysen_apexhand_msgs__srv__GetConnectionInfo_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
rysen_apexhand_msgs__srv__GetConnectionInfo_Request__copy(
  const rysen_apexhand_msgs__srv__GetConnectionInfo_Request * input,
  rysen_apexhand_msgs__srv__GetConnectionInfo_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

rysen_apexhand_msgs__srv__GetConnectionInfo_Request *
rysen_apexhand_msgs__srv__GetConnectionInfo_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__srv__GetConnectionInfo_Request * msg = (rysen_apexhand_msgs__srv__GetConnectionInfo_Request *)allocator.allocate(sizeof(rysen_apexhand_msgs__srv__GetConnectionInfo_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rysen_apexhand_msgs__srv__GetConnectionInfo_Request));
  bool success = rysen_apexhand_msgs__srv__GetConnectionInfo_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rysen_apexhand_msgs__srv__GetConnectionInfo_Request__destroy(rysen_apexhand_msgs__srv__GetConnectionInfo_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rysen_apexhand_msgs__srv__GetConnectionInfo_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence__init(rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__srv__GetConnectionInfo_Request * data = NULL;

  if (size) {
    data = (rysen_apexhand_msgs__srv__GetConnectionInfo_Request *)allocator.zero_allocate(size, sizeof(rysen_apexhand_msgs__srv__GetConnectionInfo_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rysen_apexhand_msgs__srv__GetConnectionInfo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rysen_apexhand_msgs__srv__GetConnectionInfo_Request__fini(&data[i - 1]);
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
rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence__fini(rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence * array)
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
      rysen_apexhand_msgs__srv__GetConnectionInfo_Request__fini(&array->data[i]);
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

rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence *
rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence * array = (rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence *)allocator.allocate(sizeof(rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence__destroy(rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence__are_equal(const rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence * lhs, const rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rysen_apexhand_msgs__srv__GetConnectionInfo_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence__copy(
  const rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence * input,
  rysen_apexhand_msgs__srv__GetConnectionInfo_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rysen_apexhand_msgs__srv__GetConnectionInfo_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rysen_apexhand_msgs__srv__GetConnectionInfo_Request * data =
      (rysen_apexhand_msgs__srv__GetConnectionInfo_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rysen_apexhand_msgs__srv__GetConnectionInfo_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rysen_apexhand_msgs__srv__GetConnectionInfo_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rysen_apexhand_msgs__srv__GetConnectionInfo_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `ips`
// Member `device_ips`
// Member `hand_sides`
// Member `hardware_uids`
#include "rosidl_runtime_c/string_functions.h"
// Member `connected`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rysen_apexhand_msgs__srv__GetConnectionInfo_Response__init(rysen_apexhand_msgs__srv__GetConnectionInfo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ips
  if (!rosidl_runtime_c__String__Sequence__init(&msg->ips, 0)) {
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__fini(msg);
    return false;
  }
  // connected
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->connected, 0)) {
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__fini(msg);
    return false;
  }
  // device_ips
  if (!rosidl_runtime_c__String__Sequence__init(&msg->device_ips, 0)) {
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__fini(msg);
    return false;
  }
  // hand_sides
  if (!rosidl_runtime_c__String__Sequence__init(&msg->hand_sides, 0)) {
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__fini(msg);
    return false;
  }
  // hardware_uids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->hardware_uids, 0)) {
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__fini(msg);
    return false;
  }
  return true;
}

void
rysen_apexhand_msgs__srv__GetConnectionInfo_Response__fini(rysen_apexhand_msgs__srv__GetConnectionInfo_Response * msg)
{
  if (!msg) {
    return;
  }
  // ips
  rosidl_runtime_c__String__Sequence__fini(&msg->ips);
  // connected
  rosidl_runtime_c__boolean__Sequence__fini(&msg->connected);
  // device_ips
  rosidl_runtime_c__String__Sequence__fini(&msg->device_ips);
  // hand_sides
  rosidl_runtime_c__String__Sequence__fini(&msg->hand_sides);
  // hardware_uids
  rosidl_runtime_c__String__Sequence__fini(&msg->hardware_uids);
}

bool
rysen_apexhand_msgs__srv__GetConnectionInfo_Response__are_equal(const rysen_apexhand_msgs__srv__GetConnectionInfo_Response * lhs, const rysen_apexhand_msgs__srv__GetConnectionInfo_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ips
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->ips), &(rhs->ips)))
  {
    return false;
  }
  // connected
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->connected), &(rhs->connected)))
  {
    return false;
  }
  // device_ips
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->device_ips), &(rhs->device_ips)))
  {
    return false;
  }
  // hand_sides
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->hand_sides), &(rhs->hand_sides)))
  {
    return false;
  }
  // hardware_uids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->hardware_uids), &(rhs->hardware_uids)))
  {
    return false;
  }
  return true;
}

bool
rysen_apexhand_msgs__srv__GetConnectionInfo_Response__copy(
  const rysen_apexhand_msgs__srv__GetConnectionInfo_Response * input,
  rysen_apexhand_msgs__srv__GetConnectionInfo_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // ips
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->ips), &(output->ips)))
  {
    return false;
  }
  // connected
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->connected), &(output->connected)))
  {
    return false;
  }
  // device_ips
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->device_ips), &(output->device_ips)))
  {
    return false;
  }
  // hand_sides
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->hand_sides), &(output->hand_sides)))
  {
    return false;
  }
  // hardware_uids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->hardware_uids), &(output->hardware_uids)))
  {
    return false;
  }
  return true;
}

rysen_apexhand_msgs__srv__GetConnectionInfo_Response *
rysen_apexhand_msgs__srv__GetConnectionInfo_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__srv__GetConnectionInfo_Response * msg = (rysen_apexhand_msgs__srv__GetConnectionInfo_Response *)allocator.allocate(sizeof(rysen_apexhand_msgs__srv__GetConnectionInfo_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rysen_apexhand_msgs__srv__GetConnectionInfo_Response));
  bool success = rysen_apexhand_msgs__srv__GetConnectionInfo_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rysen_apexhand_msgs__srv__GetConnectionInfo_Response__destroy(rysen_apexhand_msgs__srv__GetConnectionInfo_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence__init(rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__srv__GetConnectionInfo_Response * data = NULL;

  if (size) {
    data = (rysen_apexhand_msgs__srv__GetConnectionInfo_Response *)allocator.zero_allocate(size, sizeof(rysen_apexhand_msgs__srv__GetConnectionInfo_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rysen_apexhand_msgs__srv__GetConnectionInfo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rysen_apexhand_msgs__srv__GetConnectionInfo_Response__fini(&data[i - 1]);
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
rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence__fini(rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence * array)
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
      rysen_apexhand_msgs__srv__GetConnectionInfo_Response__fini(&array->data[i]);
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

rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence *
rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence * array = (rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence *)allocator.allocate(sizeof(rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence__destroy(rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence__are_equal(const rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence * lhs, const rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rysen_apexhand_msgs__srv__GetConnectionInfo_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence__copy(
  const rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence * input,
  rysen_apexhand_msgs__srv__GetConnectionInfo_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rysen_apexhand_msgs__srv__GetConnectionInfo_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response * data =
      (rysen_apexhand_msgs__srv__GetConnectionInfo_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rysen_apexhand_msgs__srv__GetConnectionInfo_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rysen_apexhand_msgs__srv__GetConnectionInfo_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rysen_apexhand_msgs__srv__GetConnectionInfo_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
