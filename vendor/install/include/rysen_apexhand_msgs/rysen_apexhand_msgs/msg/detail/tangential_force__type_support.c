// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rysen_apexhand_msgs:msg/TangentialForce.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rysen_apexhand_msgs/msg/detail/tangential_force__rosidl_typesupport_introspection_c.h"
#include "rysen_apexhand_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rysen_apexhand_msgs/msg/detail/tangential_force__functions.h"
#include "rysen_apexhand_msgs/msg/detail/tangential_force__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rysen_apexhand_msgs__msg__TangentialForce__rosidl_typesupport_introspection_c__TangentialForce_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rysen_apexhand_msgs__msg__TangentialForce__init(message_memory);
}

void rysen_apexhand_msgs__msg__TangentialForce__rosidl_typesupport_introspection_c__TangentialForce_fini_function(void * message_memory)
{
  rysen_apexhand_msgs__msg__TangentialForce__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rysen_apexhand_msgs__msg__TangentialForce__rosidl_typesupport_introspection_c__TangentialForce_message_member_array[2] = {
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__msg__TangentialForce, theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "magnitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__msg__TangentialForce, magnitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rysen_apexhand_msgs__msg__TangentialForce__rosidl_typesupport_introspection_c__TangentialForce_message_members = {
  "rysen_apexhand_msgs__msg",  // message namespace
  "TangentialForce",  // message name
  2,  // number of fields
  sizeof(rysen_apexhand_msgs__msg__TangentialForce),
  rysen_apexhand_msgs__msg__TangentialForce__rosidl_typesupport_introspection_c__TangentialForce_message_member_array,  // message members
  rysen_apexhand_msgs__msg__TangentialForce__rosidl_typesupport_introspection_c__TangentialForce_init_function,  // function to initialize message memory (memory has to be allocated)
  rysen_apexhand_msgs__msg__TangentialForce__rosidl_typesupport_introspection_c__TangentialForce_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rysen_apexhand_msgs__msg__TangentialForce__rosidl_typesupport_introspection_c__TangentialForce_message_type_support_handle = {
  0,
  &rysen_apexhand_msgs__msg__TangentialForce__rosidl_typesupport_introspection_c__TangentialForce_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rysen_apexhand_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, msg, TangentialForce)() {
  if (!rysen_apexhand_msgs__msg__TangentialForce__rosidl_typesupport_introspection_c__TangentialForce_message_type_support_handle.typesupport_identifier) {
    rysen_apexhand_msgs__msg__TangentialForce__rosidl_typesupport_introspection_c__TangentialForce_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rysen_apexhand_msgs__msg__TangentialForce__rosidl_typesupport_introspection_c__TangentialForce_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
