// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rysen_apexhand_msgs:msg/HandTactileForces.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rysen_apexhand_msgs/msg/detail/hand_tactile_forces__rosidl_typesupport_introspection_c.h"
#include "rysen_apexhand_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rysen_apexhand_msgs/msg/detail/hand_tactile_forces__functions.h"
#include "rysen_apexhand_msgs/msg/detail/hand_tactile_forces__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `index`
// Member `middle`
// Member `ring`
// Member `little`
#include "rysen_apexhand_msgs/msg/common_finger_tactile.h"
// Member `index`
// Member `middle`
// Member `ring`
// Member `little`
#include "rysen_apexhand_msgs/msg/detail/common_finger_tactile__rosidl_typesupport_introspection_c.h"
// Member `thumb`
#include "rysen_apexhand_msgs/msg/thumb_finger_tactile.h"
// Member `thumb`
#include "rysen_apexhand_msgs/msg/detail/thumb_finger_tactile__rosidl_typesupport_introspection_c.h"
// Member `palm_center`
#include "rysen_apexhand_msgs/msg/tactile_image.h"
// Member `palm_center`
#include "rysen_apexhand_msgs/msg/detail/tactile_image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rysen_apexhand_msgs__msg__HandTactileForces__rosidl_typesupport_introspection_c__HandTactileForces_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rysen_apexhand_msgs__msg__HandTactileForces__init(message_memory);
}

void rysen_apexhand_msgs__msg__HandTactileForces__rosidl_typesupport_introspection_c__HandTactileForces_fini_function(void * message_memory)
{
  rysen_apexhand_msgs__msg__HandTactileForces__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rysen_apexhand_msgs__msg__HandTactileForces__rosidl_typesupport_introspection_c__HandTactileForces_message_member_array[7] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__msg__HandTactileForces, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__msg__HandTactileForces, index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "middle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__msg__HandTactileForces, middle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ring",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__msg__HandTactileForces, ring),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "little",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__msg__HandTactileForces, little),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "thumb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__msg__HandTactileForces, thumb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "palm_center",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__msg__HandTactileForces, palm_center),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rysen_apexhand_msgs__msg__HandTactileForces__rosidl_typesupport_introspection_c__HandTactileForces_message_members = {
  "rysen_apexhand_msgs__msg",  // message namespace
  "HandTactileForces",  // message name
  7,  // number of fields
  sizeof(rysen_apexhand_msgs__msg__HandTactileForces),
  rysen_apexhand_msgs__msg__HandTactileForces__rosidl_typesupport_introspection_c__HandTactileForces_message_member_array,  // message members
  rysen_apexhand_msgs__msg__HandTactileForces__rosidl_typesupport_introspection_c__HandTactileForces_init_function,  // function to initialize message memory (memory has to be allocated)
  rysen_apexhand_msgs__msg__HandTactileForces__rosidl_typesupport_introspection_c__HandTactileForces_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rysen_apexhand_msgs__msg__HandTactileForces__rosidl_typesupport_introspection_c__HandTactileForces_message_type_support_handle = {
  0,
  &rysen_apexhand_msgs__msg__HandTactileForces__rosidl_typesupport_introspection_c__HandTactileForces_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rysen_apexhand_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, msg, HandTactileForces)() {
  rysen_apexhand_msgs__msg__HandTactileForces__rosidl_typesupport_introspection_c__HandTactileForces_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  rysen_apexhand_msgs__msg__HandTactileForces__rosidl_typesupport_introspection_c__HandTactileForces_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, msg, CommonFingerTactile)();
  rysen_apexhand_msgs__msg__HandTactileForces__rosidl_typesupport_introspection_c__HandTactileForces_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, msg, CommonFingerTactile)();
  rysen_apexhand_msgs__msg__HandTactileForces__rosidl_typesupport_introspection_c__HandTactileForces_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, msg, CommonFingerTactile)();
  rysen_apexhand_msgs__msg__HandTactileForces__rosidl_typesupport_introspection_c__HandTactileForces_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, msg, CommonFingerTactile)();
  rysen_apexhand_msgs__msg__HandTactileForces__rosidl_typesupport_introspection_c__HandTactileForces_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, msg, ThumbFingerTactile)();
  rysen_apexhand_msgs__msg__HandTactileForces__rosidl_typesupport_introspection_c__HandTactileForces_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, msg, TactileImage)();
  if (!rysen_apexhand_msgs__msg__HandTactileForces__rosidl_typesupport_introspection_c__HandTactileForces_message_type_support_handle.typesupport_identifier) {
    rysen_apexhand_msgs__msg__HandTactileForces__rosidl_typesupport_introspection_c__HandTactileForces_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rysen_apexhand_msgs__msg__HandTactileForces__rosidl_typesupport_introspection_c__HandTactileForces_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
