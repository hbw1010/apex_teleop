// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rysen_apexhand_msgs:msg/HardwareErrors.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rysen_apexhand_msgs/msg/detail/hardware_errors__rosidl_typesupport_introspection_c.h"
#include "rysen_apexhand_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rysen_apexhand_msgs/msg/detail/hardware_errors__functions.h"
#include "rysen_apexhand_msgs/msg/detail/hardware_errors__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rysen_apexhand_msgs__msg__HardwareErrors__rosidl_typesupport_introspection_c__HardwareErrors_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rysen_apexhand_msgs__msg__HardwareErrors__init(message_memory);
}

void rysen_apexhand_msgs__msg__HardwareErrors__rosidl_typesupport_introspection_c__HardwareErrors_fini_function(void * message_memory)
{
  rysen_apexhand_msgs__msg__HardwareErrors__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rysen_apexhand_msgs__msg__HardwareErrors__rosidl_typesupport_introspection_c__HardwareErrors_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__msg__HardwareErrors, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "device_error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__msg__HardwareErrors, device_error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "thumb_error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__msg__HardwareErrors, thumb_error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "index_error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__msg__HardwareErrors, index_error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "middle_error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__msg__HardwareErrors, middle_error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ring_error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__msg__HardwareErrors, ring_error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "little_error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__msg__HardwareErrors, little_error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rysen_apexhand_msgs__msg__HardwareErrors__rosidl_typesupport_introspection_c__HardwareErrors_message_members = {
  "rysen_apexhand_msgs__msg",  // message namespace
  "HardwareErrors",  // message name
  7,  // number of fields
  sizeof(rysen_apexhand_msgs__msg__HardwareErrors),
  rysen_apexhand_msgs__msg__HardwareErrors__rosidl_typesupport_introspection_c__HardwareErrors_message_member_array,  // message members
  rysen_apexhand_msgs__msg__HardwareErrors__rosidl_typesupport_introspection_c__HardwareErrors_init_function,  // function to initialize message memory (memory has to be allocated)
  rysen_apexhand_msgs__msg__HardwareErrors__rosidl_typesupport_introspection_c__HardwareErrors_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rysen_apexhand_msgs__msg__HardwareErrors__rosidl_typesupport_introspection_c__HardwareErrors_message_type_support_handle = {
  0,
  &rysen_apexhand_msgs__msg__HardwareErrors__rosidl_typesupport_introspection_c__HardwareErrors_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rysen_apexhand_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, msg, HardwareErrors)() {
  rysen_apexhand_msgs__msg__HardwareErrors__rosidl_typesupport_introspection_c__HardwareErrors_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!rysen_apexhand_msgs__msg__HardwareErrors__rosidl_typesupport_introspection_c__HardwareErrors_message_type_support_handle.typesupport_identifier) {
    rysen_apexhand_msgs__msg__HardwareErrors__rosidl_typesupport_introspection_c__HardwareErrors_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rysen_apexhand_msgs__msg__HardwareErrors__rosidl_typesupport_introspection_c__HardwareErrors_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
