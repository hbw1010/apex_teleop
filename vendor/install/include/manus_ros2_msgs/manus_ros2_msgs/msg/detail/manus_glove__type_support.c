// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from manus_ros2_msgs:msg/ManusGlove.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "manus_ros2_msgs/msg/detail/manus_glove__rosidl_typesupport_introspection_c.h"
#include "manus_ros2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "manus_ros2_msgs/msg/detail/manus_glove__functions.h"
#include "manus_ros2_msgs/msg/detail/manus_glove__struct.h"


// Include directives for member types
// Member `side`
#include "rosidl_runtime_c/string_functions.h"
// Member `raw_nodes`
#include "manus_ros2_msgs/msg/manus_raw_node.h"
// Member `raw_nodes`
#include "manus_ros2_msgs/msg/detail/manus_raw_node__rosidl_typesupport_introspection_c.h"
// Member `ergonomics`
#include "manus_ros2_msgs/msg/manus_ergonomics.h"
// Member `ergonomics`
#include "manus_ros2_msgs/msg/detail/manus_ergonomics__rosidl_typesupport_introspection_c.h"
// Member `raw_sensor_orientation`
#include "geometry_msgs/msg/quaternion.h"
// Member `raw_sensor_orientation`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `raw_sensor`
#include "geometry_msgs/msg/pose.h"
// Member `raw_sensor`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__ManusGlove_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  manus_ros2_msgs__msg__ManusGlove__init(message_memory);
}

void manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__ManusGlove_fini_function(void * message_memory)
{
  manus_ros2_msgs__msg__ManusGlove__fini(message_memory);
}

size_t manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__size_function__ManusGlove__raw_nodes(
  const void * untyped_member)
{
  const manus_ros2_msgs__msg__ManusRawNode__Sequence * member =
    (const manus_ros2_msgs__msg__ManusRawNode__Sequence *)(untyped_member);
  return member->size;
}

const void * manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__get_const_function__ManusGlove__raw_nodes(
  const void * untyped_member, size_t index)
{
  const manus_ros2_msgs__msg__ManusRawNode__Sequence * member =
    (const manus_ros2_msgs__msg__ManusRawNode__Sequence *)(untyped_member);
  return &member->data[index];
}

void * manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__get_function__ManusGlove__raw_nodes(
  void * untyped_member, size_t index)
{
  manus_ros2_msgs__msg__ManusRawNode__Sequence * member =
    (manus_ros2_msgs__msg__ManusRawNode__Sequence *)(untyped_member);
  return &member->data[index];
}

void manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__fetch_function__ManusGlove__raw_nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const manus_ros2_msgs__msg__ManusRawNode * item =
    ((const manus_ros2_msgs__msg__ManusRawNode *)
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__get_const_function__ManusGlove__raw_nodes(untyped_member, index));
  manus_ros2_msgs__msg__ManusRawNode * value =
    (manus_ros2_msgs__msg__ManusRawNode *)(untyped_value);
  *value = *item;
}

void manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__assign_function__ManusGlove__raw_nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  manus_ros2_msgs__msg__ManusRawNode * item =
    ((manus_ros2_msgs__msg__ManusRawNode *)
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__get_function__ManusGlove__raw_nodes(untyped_member, index));
  const manus_ros2_msgs__msg__ManusRawNode * value =
    (const manus_ros2_msgs__msg__ManusRawNode *)(untyped_value);
  *item = *value;
}

bool manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__resize_function__ManusGlove__raw_nodes(
  void * untyped_member, size_t size)
{
  manus_ros2_msgs__msg__ManusRawNode__Sequence * member =
    (manus_ros2_msgs__msg__ManusRawNode__Sequence *)(untyped_member);
  manus_ros2_msgs__msg__ManusRawNode__Sequence__fini(member);
  return manus_ros2_msgs__msg__ManusRawNode__Sequence__init(member, size);
}

size_t manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__size_function__ManusGlove__ergonomics(
  const void * untyped_member)
{
  const manus_ros2_msgs__msg__ManusErgonomics__Sequence * member =
    (const manus_ros2_msgs__msg__ManusErgonomics__Sequence *)(untyped_member);
  return member->size;
}

const void * manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__get_const_function__ManusGlove__ergonomics(
  const void * untyped_member, size_t index)
{
  const manus_ros2_msgs__msg__ManusErgonomics__Sequence * member =
    (const manus_ros2_msgs__msg__ManusErgonomics__Sequence *)(untyped_member);
  return &member->data[index];
}

void * manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__get_function__ManusGlove__ergonomics(
  void * untyped_member, size_t index)
{
  manus_ros2_msgs__msg__ManusErgonomics__Sequence * member =
    (manus_ros2_msgs__msg__ManusErgonomics__Sequence *)(untyped_member);
  return &member->data[index];
}

void manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__fetch_function__ManusGlove__ergonomics(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const manus_ros2_msgs__msg__ManusErgonomics * item =
    ((const manus_ros2_msgs__msg__ManusErgonomics *)
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__get_const_function__ManusGlove__ergonomics(untyped_member, index));
  manus_ros2_msgs__msg__ManusErgonomics * value =
    (manus_ros2_msgs__msg__ManusErgonomics *)(untyped_value);
  *value = *item;
}

void manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__assign_function__ManusGlove__ergonomics(
  void * untyped_member, size_t index, const void * untyped_value)
{
  manus_ros2_msgs__msg__ManusErgonomics * item =
    ((manus_ros2_msgs__msg__ManusErgonomics *)
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__get_function__ManusGlove__ergonomics(untyped_member, index));
  const manus_ros2_msgs__msg__ManusErgonomics * value =
    (const manus_ros2_msgs__msg__ManusErgonomics *)(untyped_value);
  *item = *value;
}

bool manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__resize_function__ManusGlove__ergonomics(
  void * untyped_member, size_t size)
{
  manus_ros2_msgs__msg__ManusErgonomics__Sequence * member =
    (manus_ros2_msgs__msg__ManusErgonomics__Sequence *)(untyped_member);
  manus_ros2_msgs__msg__ManusErgonomics__Sequence__fini(member);
  return manus_ros2_msgs__msg__ManusErgonomics__Sequence__init(member, size);
}

size_t manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__size_function__ManusGlove__raw_sensor(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__get_const_function__ManusGlove__raw_sensor(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__get_function__ManusGlove__raw_sensor(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__fetch_function__ManusGlove__raw_sensor(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__get_const_function__ManusGlove__raw_sensor(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__assign_function__ManusGlove__raw_sensor(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__get_function__ManusGlove__raw_sensor(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__resize_function__ManusGlove__raw_sensor(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__ManusGlove_message_member_array[9] = {
  {
    "glove_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs__msg__ManusGlove, glove_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "side",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs__msg__ManusGlove, side),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "raw_node_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs__msg__ManusGlove, raw_node_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "raw_nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs__msg__ManusGlove, raw_nodes),  // bytes offset in struct
    NULL,  // default value
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__size_function__ManusGlove__raw_nodes,  // size() function pointer
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__get_const_function__ManusGlove__raw_nodes,  // get_const(index) function pointer
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__get_function__ManusGlove__raw_nodes,  // get(index) function pointer
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__fetch_function__ManusGlove__raw_nodes,  // fetch(index, &value) function pointer
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__assign_function__ManusGlove__raw_nodes,  // assign(index, value) function pointer
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__resize_function__ManusGlove__raw_nodes  // resize(index) function pointer
  },
  {
    "ergonomics_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs__msg__ManusGlove, ergonomics_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ergonomics",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs__msg__ManusGlove, ergonomics),  // bytes offset in struct
    NULL,  // default value
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__size_function__ManusGlove__ergonomics,  // size() function pointer
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__get_const_function__ManusGlove__ergonomics,  // get_const(index) function pointer
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__get_function__ManusGlove__ergonomics,  // get(index) function pointer
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__fetch_function__ManusGlove__ergonomics,  // fetch(index, &value) function pointer
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__assign_function__ManusGlove__ergonomics,  // assign(index, value) function pointer
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__resize_function__ManusGlove__ergonomics  // resize(index) function pointer
  },
  {
    "raw_sensor_orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs__msg__ManusGlove, raw_sensor_orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "raw_sensor_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs__msg__ManusGlove, raw_sensor_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "raw_sensor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs__msg__ManusGlove, raw_sensor),  // bytes offset in struct
    NULL,  // default value
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__size_function__ManusGlove__raw_sensor,  // size() function pointer
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__get_const_function__ManusGlove__raw_sensor,  // get_const(index) function pointer
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__get_function__ManusGlove__raw_sensor,  // get(index) function pointer
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__fetch_function__ManusGlove__raw_sensor,  // fetch(index, &value) function pointer
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__assign_function__ManusGlove__raw_sensor,  // assign(index, value) function pointer
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__resize_function__ManusGlove__raw_sensor  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__ManusGlove_message_members = {
  "manus_ros2_msgs__msg",  // message namespace
  "ManusGlove",  // message name
  9,  // number of fields
  sizeof(manus_ros2_msgs__msg__ManusGlove),
  manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__ManusGlove_message_member_array,  // message members
  manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__ManusGlove_init_function,  // function to initialize message memory (memory has to be allocated)
  manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__ManusGlove_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__ManusGlove_message_type_support_handle = {
  0,
  &manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__ManusGlove_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manus_ros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manus_ros2_msgs, msg, ManusGlove)() {
  manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__ManusGlove_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manus_ros2_msgs, msg, ManusRawNode)();
  manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__ManusGlove_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manus_ros2_msgs, msg, ManusErgonomics)();
  manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__ManusGlove_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__ManusGlove_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__ManusGlove_message_type_support_handle.typesupport_identifier) {
    manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__ManusGlove_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &manus_ros2_msgs__msg__ManusGlove__rosidl_typesupport_introspection_c__ManusGlove_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
