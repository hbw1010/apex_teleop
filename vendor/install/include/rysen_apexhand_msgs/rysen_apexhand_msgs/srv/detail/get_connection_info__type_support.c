// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rysen_apexhand_msgs:srv/GetConnectionInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rysen_apexhand_msgs/srv/detail/get_connection_info__rosidl_typesupport_introspection_c.h"
#include "rysen_apexhand_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rysen_apexhand_msgs/srv/detail/get_connection_info__functions.h"
#include "rysen_apexhand_msgs/srv/detail/get_connection_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rysen_apexhand_msgs__srv__GetConnectionInfo_Request__rosidl_typesupport_introspection_c__GetConnectionInfo_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rysen_apexhand_msgs__srv__GetConnectionInfo_Request__init(message_memory);
}

void rysen_apexhand_msgs__srv__GetConnectionInfo_Request__rosidl_typesupport_introspection_c__GetConnectionInfo_Request_fini_function(void * message_memory)
{
  rysen_apexhand_msgs__srv__GetConnectionInfo_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rysen_apexhand_msgs__srv__GetConnectionInfo_Request__rosidl_typesupport_introspection_c__GetConnectionInfo_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__srv__GetConnectionInfo_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rysen_apexhand_msgs__srv__GetConnectionInfo_Request__rosidl_typesupport_introspection_c__GetConnectionInfo_Request_message_members = {
  "rysen_apexhand_msgs__srv",  // message namespace
  "GetConnectionInfo_Request",  // message name
  1,  // number of fields
  sizeof(rysen_apexhand_msgs__srv__GetConnectionInfo_Request),
  rysen_apexhand_msgs__srv__GetConnectionInfo_Request__rosidl_typesupport_introspection_c__GetConnectionInfo_Request_message_member_array,  // message members
  rysen_apexhand_msgs__srv__GetConnectionInfo_Request__rosidl_typesupport_introspection_c__GetConnectionInfo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rysen_apexhand_msgs__srv__GetConnectionInfo_Request__rosidl_typesupport_introspection_c__GetConnectionInfo_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rysen_apexhand_msgs__srv__GetConnectionInfo_Request__rosidl_typesupport_introspection_c__GetConnectionInfo_Request_message_type_support_handle = {
  0,
  &rysen_apexhand_msgs__srv__GetConnectionInfo_Request__rosidl_typesupport_introspection_c__GetConnectionInfo_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rysen_apexhand_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, srv, GetConnectionInfo_Request)() {
  if (!rysen_apexhand_msgs__srv__GetConnectionInfo_Request__rosidl_typesupport_introspection_c__GetConnectionInfo_Request_message_type_support_handle.typesupport_identifier) {
    rysen_apexhand_msgs__srv__GetConnectionInfo_Request__rosidl_typesupport_introspection_c__GetConnectionInfo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rysen_apexhand_msgs__srv__GetConnectionInfo_Request__rosidl_typesupport_introspection_c__GetConnectionInfo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rysen_apexhand_msgs/srv/detail/get_connection_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rysen_apexhand_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rysen_apexhand_msgs/srv/detail/get_connection_info__functions.h"
// already included above
// #include "rysen_apexhand_msgs/srv/detail/get_connection_info__struct.h"


// Include directives for member types
// Member `ips`
// Member `device_ips`
// Member `hand_sides`
// Member `hardware_uids`
#include "rosidl_runtime_c/string_functions.h"
// Member `connected`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__GetConnectionInfo_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rysen_apexhand_msgs__srv__GetConnectionInfo_Response__init(message_memory);
}

void rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__GetConnectionInfo_Response_fini_function(void * message_memory)
{
  rysen_apexhand_msgs__srv__GetConnectionInfo_Response__fini(message_memory);
}

size_t rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__size_function__GetConnectionInfo_Response__ips(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetConnectionInfo_Response__ips(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_function__GetConnectionInfo_Response__ips(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetConnectionInfo_Response__ips(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetConnectionInfo_Response__ips(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetConnectionInfo_Response__ips(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_function__GetConnectionInfo_Response__ips(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetConnectionInfo_Response__ips(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__size_function__GetConnectionInfo_Response__connected(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetConnectionInfo_Response__connected(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_function__GetConnectionInfo_Response__connected(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetConnectionInfo_Response__connected(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetConnectionInfo_Response__connected(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetConnectionInfo_Response__connected(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_function__GetConnectionInfo_Response__connected(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetConnectionInfo_Response__connected(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__size_function__GetConnectionInfo_Response__device_ips(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetConnectionInfo_Response__device_ips(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_function__GetConnectionInfo_Response__device_ips(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetConnectionInfo_Response__device_ips(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetConnectionInfo_Response__device_ips(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetConnectionInfo_Response__device_ips(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_function__GetConnectionInfo_Response__device_ips(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetConnectionInfo_Response__device_ips(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__size_function__GetConnectionInfo_Response__hand_sides(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetConnectionInfo_Response__hand_sides(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_function__GetConnectionInfo_Response__hand_sides(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetConnectionInfo_Response__hand_sides(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetConnectionInfo_Response__hand_sides(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetConnectionInfo_Response__hand_sides(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_function__GetConnectionInfo_Response__hand_sides(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetConnectionInfo_Response__hand_sides(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__size_function__GetConnectionInfo_Response__hardware_uids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetConnectionInfo_Response__hardware_uids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_function__GetConnectionInfo_Response__hardware_uids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetConnectionInfo_Response__hardware_uids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetConnectionInfo_Response__hardware_uids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetConnectionInfo_Response__hardware_uids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_function__GetConnectionInfo_Response__hardware_uids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetConnectionInfo_Response__hardware_uids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__GetConnectionInfo_Response_message_member_array[5] = {
  {
    "ips",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__srv__GetConnectionInfo_Response, ips),  // bytes offset in struct
    NULL,  // default value
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__size_function__GetConnectionInfo_Response__ips,  // size() function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetConnectionInfo_Response__ips,  // get_const(index) function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_function__GetConnectionInfo_Response__ips,  // get(index) function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetConnectionInfo_Response__ips,  // fetch(index, &value) function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetConnectionInfo_Response__ips,  // assign(index, value) function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetConnectionInfo_Response__ips  // resize(index) function pointer
  },
  {
    "connected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__srv__GetConnectionInfo_Response, connected),  // bytes offset in struct
    NULL,  // default value
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__size_function__GetConnectionInfo_Response__connected,  // size() function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetConnectionInfo_Response__connected,  // get_const(index) function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_function__GetConnectionInfo_Response__connected,  // get(index) function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetConnectionInfo_Response__connected,  // fetch(index, &value) function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetConnectionInfo_Response__connected,  // assign(index, value) function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetConnectionInfo_Response__connected  // resize(index) function pointer
  },
  {
    "device_ips",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__srv__GetConnectionInfo_Response, device_ips),  // bytes offset in struct
    NULL,  // default value
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__size_function__GetConnectionInfo_Response__device_ips,  // size() function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetConnectionInfo_Response__device_ips,  // get_const(index) function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_function__GetConnectionInfo_Response__device_ips,  // get(index) function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetConnectionInfo_Response__device_ips,  // fetch(index, &value) function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetConnectionInfo_Response__device_ips,  // assign(index, value) function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetConnectionInfo_Response__device_ips  // resize(index) function pointer
  },
  {
    "hand_sides",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__srv__GetConnectionInfo_Response, hand_sides),  // bytes offset in struct
    NULL,  // default value
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__size_function__GetConnectionInfo_Response__hand_sides,  // size() function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetConnectionInfo_Response__hand_sides,  // get_const(index) function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_function__GetConnectionInfo_Response__hand_sides,  // get(index) function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetConnectionInfo_Response__hand_sides,  // fetch(index, &value) function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetConnectionInfo_Response__hand_sides,  // assign(index, value) function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetConnectionInfo_Response__hand_sides  // resize(index) function pointer
  },
  {
    "hardware_uids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__srv__GetConnectionInfo_Response, hardware_uids),  // bytes offset in struct
    NULL,  // default value
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__size_function__GetConnectionInfo_Response__hardware_uids,  // size() function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetConnectionInfo_Response__hardware_uids,  // get_const(index) function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__get_function__GetConnectionInfo_Response__hardware_uids,  // get(index) function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetConnectionInfo_Response__hardware_uids,  // fetch(index, &value) function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetConnectionInfo_Response__hardware_uids,  // assign(index, value) function pointer
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetConnectionInfo_Response__hardware_uids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__GetConnectionInfo_Response_message_members = {
  "rysen_apexhand_msgs__srv",  // message namespace
  "GetConnectionInfo_Response",  // message name
  5,  // number of fields
  sizeof(rysen_apexhand_msgs__srv__GetConnectionInfo_Response),
  rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__GetConnectionInfo_Response_message_member_array,  // message members
  rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__GetConnectionInfo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__GetConnectionInfo_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__GetConnectionInfo_Response_message_type_support_handle = {
  0,
  &rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__GetConnectionInfo_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rysen_apexhand_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, srv, GetConnectionInfo_Response)() {
  if (!rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__GetConnectionInfo_Response_message_type_support_handle.typesupport_identifier) {
    rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__GetConnectionInfo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rysen_apexhand_msgs__srv__GetConnectionInfo_Response__rosidl_typesupport_introspection_c__GetConnectionInfo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rysen_apexhand_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rysen_apexhand_msgs/srv/detail/get_connection_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rysen_apexhand_msgs__srv__detail__get_connection_info__rosidl_typesupport_introspection_c__GetConnectionInfo_service_members = {
  "rysen_apexhand_msgs__srv",  // service namespace
  "GetConnectionInfo",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rysen_apexhand_msgs__srv__detail__get_connection_info__rosidl_typesupport_introspection_c__GetConnectionInfo_Request_message_type_support_handle,
  NULL  // response message
  // rysen_apexhand_msgs__srv__detail__get_connection_info__rosidl_typesupport_introspection_c__GetConnectionInfo_Response_message_type_support_handle
};

static rosidl_service_type_support_t rysen_apexhand_msgs__srv__detail__get_connection_info__rosidl_typesupport_introspection_c__GetConnectionInfo_service_type_support_handle = {
  0,
  &rysen_apexhand_msgs__srv__detail__get_connection_info__rosidl_typesupport_introspection_c__GetConnectionInfo_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, srv, GetConnectionInfo_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, srv, GetConnectionInfo_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rysen_apexhand_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, srv, GetConnectionInfo)() {
  if (!rysen_apexhand_msgs__srv__detail__get_connection_info__rosidl_typesupport_introspection_c__GetConnectionInfo_service_type_support_handle.typesupport_identifier) {
    rysen_apexhand_msgs__srv__detail__get_connection_info__rosidl_typesupport_introspection_c__GetConnectionInfo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rysen_apexhand_msgs__srv__detail__get_connection_info__rosidl_typesupport_introspection_c__GetConnectionInfo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, srv, GetConnectionInfo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, srv, GetConnectionInfo_Response)()->data;
  }

  return &rysen_apexhand_msgs__srv__detail__get_connection_info__rosidl_typesupport_introspection_c__GetConnectionInfo_service_type_support_handle;
}
