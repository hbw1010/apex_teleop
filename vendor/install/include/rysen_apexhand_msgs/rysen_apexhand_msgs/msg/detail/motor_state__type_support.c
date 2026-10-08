// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rysen_apexhand_msgs:msg/MotorState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rysen_apexhand_msgs/msg/detail/motor_state__rosidl_typesupport_introspection_c.h"
#include "rysen_apexhand_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rysen_apexhand_msgs/msg/detail/motor_state__functions.h"
#include "rysen_apexhand_msgs/msg/detail/motor_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `temperature`
// Member `current`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rysen_apexhand_msgs__msg__MotorState__init(message_memory);
}

void rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_fini_function(void * message_memory)
{
  rysen_apexhand_msgs__msg__MotorState__fini(message_memory);
}

size_t rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__size_function__MotorState__name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__fetch_function__MotorState__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__assign_function__MotorState__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__resize_function__MotorState__name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__size_function__MotorState__temperature(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__temperature(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__temperature(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__fetch_function__MotorState__temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__temperature(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__assign_function__MotorState__temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__temperature(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__resize_function__MotorState__temperature(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__size_function__MotorState__current(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__current(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__current(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__fetch_function__MotorState__current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__current(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__assign_function__MotorState__current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__current(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__resize_function__MotorState__current(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__msg__MotorState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__msg__MotorState, name),  // bytes offset in struct
    NULL,  // default value
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__size_function__MotorState__name,  // size() function pointer
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__name,  // get_const(index) function pointer
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__name,  // get(index) function pointer
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__fetch_function__MotorState__name,  // fetch(index, &value) function pointer
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__assign_function__MotorState__name,  // assign(index, value) function pointer
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__resize_function__MotorState__name  // resize(index) function pointer
  },
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__msg__MotorState, temperature),  // bytes offset in struct
    NULL,  // default value
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__size_function__MotorState__temperature,  // size() function pointer
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__temperature,  // get_const(index) function pointer
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__temperature,  // get(index) function pointer
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__fetch_function__MotorState__temperature,  // fetch(index, &value) function pointer
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__assign_function__MotorState__temperature,  // assign(index, value) function pointer
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__resize_function__MotorState__temperature  // resize(index) function pointer
  },
  {
    "current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__msg__MotorState, current),  // bytes offset in struct
    NULL,  // default value
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__size_function__MotorState__current,  // size() function pointer
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__get_const_function__MotorState__current,  // get_const(index) function pointer
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__get_function__MotorState__current,  // get(index) function pointer
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__fetch_function__MotorState__current,  // fetch(index, &value) function pointer
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__assign_function__MotorState__current,  // assign(index, value) function pointer
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__resize_function__MotorState__current  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_members = {
  "rysen_apexhand_msgs__msg",  // message namespace
  "MotorState",  // message name
  4,  // number of fields
  sizeof(rysen_apexhand_msgs__msg__MotorState),
  rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_member_array,  // message members
  rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_init_function,  // function to initialize message memory (memory has to be allocated)
  rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_type_support_handle = {
  0,
  &rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rysen_apexhand_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, msg, MotorState)() {
  rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_type_support_handle.typesupport_identifier) {
    rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rysen_apexhand_msgs__msg__MotorState__rosidl_typesupport_introspection_c__MotorState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
