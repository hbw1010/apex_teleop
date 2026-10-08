// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from manus_ros2_msgs:msg/ManusVibrationCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "manus_ros2_msgs/msg/detail/manus_vibration_command__rosidl_typesupport_introspection_c.h"
#include "manus_ros2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "manus_ros2_msgs/msg/detail/manus_vibration_command__functions.h"
#include "manus_ros2_msgs/msg/detail/manus_vibration_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__ManusVibrationCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  manus_ros2_msgs__msg__ManusVibrationCommand__init(message_memory);
}

void manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__ManusVibrationCommand_fini_function(void * message_memory)
{
  manus_ros2_msgs__msg__ManusVibrationCommand__fini(message_memory);
}

size_t manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__size_function__ManusVibrationCommand__intensities(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__get_const_function__ManusVibrationCommand__intensities(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__get_function__ManusVibrationCommand__intensities(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__fetch_function__ManusVibrationCommand__intensities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__get_const_function__ManusVibrationCommand__intensities(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__assign_function__ManusVibrationCommand__intensities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__get_function__ManusVibrationCommand__intensities(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__ManusVibrationCommand_message_member_array[1] = {
  {
    "intensities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs__msg__ManusVibrationCommand, intensities),  // bytes offset in struct
    NULL,  // default value
    manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__size_function__ManusVibrationCommand__intensities,  // size() function pointer
    manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__get_const_function__ManusVibrationCommand__intensities,  // get_const(index) function pointer
    manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__get_function__ManusVibrationCommand__intensities,  // get(index) function pointer
    manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__fetch_function__ManusVibrationCommand__intensities,  // fetch(index, &value) function pointer
    manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__assign_function__ManusVibrationCommand__intensities,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__ManusVibrationCommand_message_members = {
  "manus_ros2_msgs__msg",  // message namespace
  "ManusVibrationCommand",  // message name
  1,  // number of fields
  sizeof(manus_ros2_msgs__msg__ManusVibrationCommand),
  manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__ManusVibrationCommand_message_member_array,  // message members
  manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__ManusVibrationCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__ManusVibrationCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__ManusVibrationCommand_message_type_support_handle = {
  0,
  &manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__ManusVibrationCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manus_ros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manus_ros2_msgs, msg, ManusVibrationCommand)() {
  if (!manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__ManusVibrationCommand_message_type_support_handle.typesupport_identifier) {
    manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__ManusVibrationCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &manus_ros2_msgs__msg__ManusVibrationCommand__rosidl_typesupport_introspection_c__ManusVibrationCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
