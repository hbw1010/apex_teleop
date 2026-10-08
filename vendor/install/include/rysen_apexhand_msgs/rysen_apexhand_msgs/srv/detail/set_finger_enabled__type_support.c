// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rysen_apexhand_msgs:srv/SetFingerEnabled.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rysen_apexhand_msgs/srv/detail/set_finger_enabled__rosidl_typesupport_introspection_c.h"
#include "rysen_apexhand_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rysen_apexhand_msgs/srv/detail/set_finger_enabled__functions.h"
#include "rysen_apexhand_msgs/srv/detail/set_finger_enabled__struct.h"


// Include directives for member types
// Member `ip`
#include "rosidl_runtime_c/string_functions.h"
// Member `finger_ids`
#include "rysen_apexhand_msgs/msg/finger_id.h"
// Member `finger_ids`
#include "rysen_apexhand_msgs/msg/detail/finger_id__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__SetFingerEnabled_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rysen_apexhand_msgs__srv__SetFingerEnabled_Request__init(message_memory);
}

void rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__SetFingerEnabled_Request_fini_function(void * message_memory)
{
  rysen_apexhand_msgs__srv__SetFingerEnabled_Request__fini(message_memory);
}

size_t rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__size_function__SetFingerEnabled_Request__finger_ids(
  const void * untyped_member)
{
  const rysen_apexhand_msgs__msg__FingerId__Sequence * member =
    (const rysen_apexhand_msgs__msg__FingerId__Sequence *)(untyped_member);
  return member->size;
}

const void * rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__get_const_function__SetFingerEnabled_Request__finger_ids(
  const void * untyped_member, size_t index)
{
  const rysen_apexhand_msgs__msg__FingerId__Sequence * member =
    (const rysen_apexhand_msgs__msg__FingerId__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__get_function__SetFingerEnabled_Request__finger_ids(
  void * untyped_member, size_t index)
{
  rysen_apexhand_msgs__msg__FingerId__Sequence * member =
    (rysen_apexhand_msgs__msg__FingerId__Sequence *)(untyped_member);
  return &member->data[index];
}

void rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__fetch_function__SetFingerEnabled_Request__finger_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rysen_apexhand_msgs__msg__FingerId * item =
    ((const rysen_apexhand_msgs__msg__FingerId *)
    rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__get_const_function__SetFingerEnabled_Request__finger_ids(untyped_member, index));
  rysen_apexhand_msgs__msg__FingerId * value =
    (rysen_apexhand_msgs__msg__FingerId *)(untyped_value);
  *value = *item;
}

void rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__assign_function__SetFingerEnabled_Request__finger_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rysen_apexhand_msgs__msg__FingerId * item =
    ((rysen_apexhand_msgs__msg__FingerId *)
    rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__get_function__SetFingerEnabled_Request__finger_ids(untyped_member, index));
  const rysen_apexhand_msgs__msg__FingerId * value =
    (const rysen_apexhand_msgs__msg__FingerId *)(untyped_value);
  *item = *value;
}

bool rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__resize_function__SetFingerEnabled_Request__finger_ids(
  void * untyped_member, size_t size)
{
  rysen_apexhand_msgs__msg__FingerId__Sequence * member =
    (rysen_apexhand_msgs__msg__FingerId__Sequence *)(untyped_member);
  rysen_apexhand_msgs__msg__FingerId__Sequence__fini(member);
  return rysen_apexhand_msgs__msg__FingerId__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__SetFingerEnabled_Request_message_member_array[3] = {
  {
    "ip",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__srv__SetFingerEnabled_Request, ip),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "finger_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__srv__SetFingerEnabled_Request, finger_ids),  // bytes offset in struct
    NULL,  // default value
    rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__size_function__SetFingerEnabled_Request__finger_ids,  // size() function pointer
    rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__get_const_function__SetFingerEnabled_Request__finger_ids,  // get_const(index) function pointer
    rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__get_function__SetFingerEnabled_Request__finger_ids,  // get(index) function pointer
    rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__fetch_function__SetFingerEnabled_Request__finger_ids,  // fetch(index, &value) function pointer
    rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__assign_function__SetFingerEnabled_Request__finger_ids,  // assign(index, value) function pointer
    rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__resize_function__SetFingerEnabled_Request__finger_ids  // resize(index) function pointer
  },
  {
    "enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__srv__SetFingerEnabled_Request, enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__SetFingerEnabled_Request_message_members = {
  "rysen_apexhand_msgs__srv",  // message namespace
  "SetFingerEnabled_Request",  // message name
  3,  // number of fields
  sizeof(rysen_apexhand_msgs__srv__SetFingerEnabled_Request),
  rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__SetFingerEnabled_Request_message_member_array,  // message members
  rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__SetFingerEnabled_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__SetFingerEnabled_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__SetFingerEnabled_Request_message_type_support_handle = {
  0,
  &rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__SetFingerEnabled_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rysen_apexhand_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, srv, SetFingerEnabled_Request)() {
  rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__SetFingerEnabled_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, msg, FingerId)();
  if (!rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__SetFingerEnabled_Request_message_type_support_handle.typesupport_identifier) {
    rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__SetFingerEnabled_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rysen_apexhand_msgs__srv__SetFingerEnabled_Request__rosidl_typesupport_introspection_c__SetFingerEnabled_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rysen_apexhand_msgs/srv/detail/set_finger_enabled__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rysen_apexhand_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rysen_apexhand_msgs/srv/detail/set_finger_enabled__functions.h"
// already included above
// #include "rysen_apexhand_msgs/srv/detail/set_finger_enabled__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rysen_apexhand_msgs__srv__SetFingerEnabled_Response__rosidl_typesupport_introspection_c__SetFingerEnabled_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rysen_apexhand_msgs__srv__SetFingerEnabled_Response__init(message_memory);
}

void rysen_apexhand_msgs__srv__SetFingerEnabled_Response__rosidl_typesupport_introspection_c__SetFingerEnabled_Response_fini_function(void * message_memory)
{
  rysen_apexhand_msgs__srv__SetFingerEnabled_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rysen_apexhand_msgs__srv__SetFingerEnabled_Response__rosidl_typesupport_introspection_c__SetFingerEnabled_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__srv__SetFingerEnabled_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs__srv__SetFingerEnabled_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rysen_apexhand_msgs__srv__SetFingerEnabled_Response__rosidl_typesupport_introspection_c__SetFingerEnabled_Response_message_members = {
  "rysen_apexhand_msgs__srv",  // message namespace
  "SetFingerEnabled_Response",  // message name
  2,  // number of fields
  sizeof(rysen_apexhand_msgs__srv__SetFingerEnabled_Response),
  rysen_apexhand_msgs__srv__SetFingerEnabled_Response__rosidl_typesupport_introspection_c__SetFingerEnabled_Response_message_member_array,  // message members
  rysen_apexhand_msgs__srv__SetFingerEnabled_Response__rosidl_typesupport_introspection_c__SetFingerEnabled_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rysen_apexhand_msgs__srv__SetFingerEnabled_Response__rosidl_typesupport_introspection_c__SetFingerEnabled_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rysen_apexhand_msgs__srv__SetFingerEnabled_Response__rosidl_typesupport_introspection_c__SetFingerEnabled_Response_message_type_support_handle = {
  0,
  &rysen_apexhand_msgs__srv__SetFingerEnabled_Response__rosidl_typesupport_introspection_c__SetFingerEnabled_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rysen_apexhand_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, srv, SetFingerEnabled_Response)() {
  if (!rysen_apexhand_msgs__srv__SetFingerEnabled_Response__rosidl_typesupport_introspection_c__SetFingerEnabled_Response_message_type_support_handle.typesupport_identifier) {
    rysen_apexhand_msgs__srv__SetFingerEnabled_Response__rosidl_typesupport_introspection_c__SetFingerEnabled_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rysen_apexhand_msgs__srv__SetFingerEnabled_Response__rosidl_typesupport_introspection_c__SetFingerEnabled_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rysen_apexhand_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rysen_apexhand_msgs/srv/detail/set_finger_enabled__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rysen_apexhand_msgs__srv__detail__set_finger_enabled__rosidl_typesupport_introspection_c__SetFingerEnabled_service_members = {
  "rysen_apexhand_msgs__srv",  // service namespace
  "SetFingerEnabled",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rysen_apexhand_msgs__srv__detail__set_finger_enabled__rosidl_typesupport_introspection_c__SetFingerEnabled_Request_message_type_support_handle,
  NULL  // response message
  // rysen_apexhand_msgs__srv__detail__set_finger_enabled__rosidl_typesupport_introspection_c__SetFingerEnabled_Response_message_type_support_handle
};

static rosidl_service_type_support_t rysen_apexhand_msgs__srv__detail__set_finger_enabled__rosidl_typesupport_introspection_c__SetFingerEnabled_service_type_support_handle = {
  0,
  &rysen_apexhand_msgs__srv__detail__set_finger_enabled__rosidl_typesupport_introspection_c__SetFingerEnabled_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, srv, SetFingerEnabled_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, srv, SetFingerEnabled_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rysen_apexhand_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, srv, SetFingerEnabled)() {
  if (!rysen_apexhand_msgs__srv__detail__set_finger_enabled__rosidl_typesupport_introspection_c__SetFingerEnabled_service_type_support_handle.typesupport_identifier) {
    rysen_apexhand_msgs__srv__detail__set_finger_enabled__rosidl_typesupport_introspection_c__SetFingerEnabled_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rysen_apexhand_msgs__srv__detail__set_finger_enabled__rosidl_typesupport_introspection_c__SetFingerEnabled_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, srv, SetFingerEnabled_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rysen_apexhand_msgs, srv, SetFingerEnabled_Response)()->data;
  }

  return &rysen_apexhand_msgs__srv__detail__set_finger_enabled__rosidl_typesupport_introspection_c__SetFingerEnabled_service_type_support_handle;
}
