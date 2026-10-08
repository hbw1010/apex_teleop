// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from manus_ros2_msgs:srv/CalibrateGloveTheta.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "manus_ros2_msgs/srv/detail/calibrate_glove_theta__rosidl_typesupport_introspection_c.h"
#include "manus_ros2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "manus_ros2_msgs/srv/detail/calibrate_glove_theta__functions.h"
#include "manus_ros2_msgs/srv/detail/calibrate_glove_theta__struct.h"


// Include directives for member types
// Member `side`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void manus_ros2_msgs__srv__CalibrateGloveTheta_Request__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  manus_ros2_msgs__srv__CalibrateGloveTheta_Request__init(message_memory);
}

void manus_ros2_msgs__srv__CalibrateGloveTheta_Request__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Request_fini_function(void * message_memory)
{
  manus_ros2_msgs__srv__CalibrateGloveTheta_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember manus_ros2_msgs__srv__CalibrateGloveTheta_Request__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Request_message_member_array[1] = {
  {
    "side",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs__srv__CalibrateGloveTheta_Request, side),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers manus_ros2_msgs__srv__CalibrateGloveTheta_Request__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Request_message_members = {
  "manus_ros2_msgs__srv",  // message namespace
  "CalibrateGloveTheta_Request",  // message name
  1,  // number of fields
  sizeof(manus_ros2_msgs__srv__CalibrateGloveTheta_Request),
  manus_ros2_msgs__srv__CalibrateGloveTheta_Request__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Request_message_member_array,  // message members
  manus_ros2_msgs__srv__CalibrateGloveTheta_Request__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  manus_ros2_msgs__srv__CalibrateGloveTheta_Request__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t manus_ros2_msgs__srv__CalibrateGloveTheta_Request__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Request_message_type_support_handle = {
  0,
  &manus_ros2_msgs__srv__CalibrateGloveTheta_Request__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manus_ros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manus_ros2_msgs, srv, CalibrateGloveTheta_Request)() {
  if (!manus_ros2_msgs__srv__CalibrateGloveTheta_Request__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Request_message_type_support_handle.typesupport_identifier) {
    manus_ros2_msgs__srv__CalibrateGloveTheta_Request__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &manus_ros2_msgs__srv__CalibrateGloveTheta_Request__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "manus_ros2_msgs/srv/detail/calibrate_glove_theta__rosidl_typesupport_introspection_c.h"
// already included above
// #include "manus_ros2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "manus_ros2_msgs/srv/detail/calibrate_glove_theta__functions.h"
// already included above
// #include "manus_ros2_msgs/srv/detail/calibrate_glove_theta__struct.h"


// Include directives for member types
// Member `four_fingers_together_tips`
#include "geometry_msgs/msg/point.h"
// Member `four_fingers_together_tips`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  manus_ros2_msgs__srv__CalibrateGloveTheta_Response__init(message_memory);
}

void manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Response_fini_function(void * message_memory)
{
  manus_ros2_msgs__srv__CalibrateGloveTheta_Response__fini(message_memory);
}

size_t manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__size_function__CalibrateGloveTheta_Response__four_fingers_together_tips(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__get_const_function__CalibrateGloveTheta_Response__four_fingers_together_tips(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point * member =
    (const geometry_msgs__msg__Point *)(untyped_member);
  return &member[index];
}

void * manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__get_function__CalibrateGloveTheta_Response__four_fingers_together_tips(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point * member =
    (geometry_msgs__msg__Point *)(untyped_member);
  return &member[index];
}

void manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__fetch_function__CalibrateGloveTheta_Response__four_fingers_together_tips(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__get_const_function__CalibrateGloveTheta_Response__four_fingers_together_tips(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__assign_function__CalibrateGloveTheta_Response__four_fingers_together_tips(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__get_function__CalibrateGloveTheta_Response__four_fingers_together_tips(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Response_message_member_array[8] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs__srv__CalibrateGloveTheta_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta_rad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs__srv__CalibrateGloveTheta_Response, theta_rad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta_deg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs__srv__CalibrateGloveTheta_Response, theta_deg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "four_fingers_together_tips",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs__srv__CalibrateGloveTheta_Response, four_fingers_together_tips),  // bytes offset in struct
    NULL,  // default value
    manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__size_function__CalibrateGloveTheta_Response__four_fingers_together_tips,  // size() function pointer
    manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__get_const_function__CalibrateGloveTheta_Response__four_fingers_together_tips,  // get_const(index) function pointer
    manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__get_function__CalibrateGloveTheta_Response__four_fingers_together_tips,  // get(index) function pointer
    manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__fetch_function__CalibrateGloveTheta_Response__four_fingers_together_tips,  // fetch(index, &value) function pointer
    manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__assign_function__CalibrateGloveTheta_Response__four_fingers_together_tips,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "midpoint_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs__srv__CalibrateGloveTheta_Response, midpoint_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "midpoint_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs__srv__CalibrateGloveTheta_Response, midpoint_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sample_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs__srv__CalibrateGloveTheta_Response, sample_count),  // bytes offset in struct
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
    offsetof(manus_ros2_msgs__srv__CalibrateGloveTheta_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Response_message_members = {
  "manus_ros2_msgs__srv",  // message namespace
  "CalibrateGloveTheta_Response",  // message name
  8,  // number of fields
  sizeof(manus_ros2_msgs__srv__CalibrateGloveTheta_Response),
  manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Response_message_member_array,  // message members
  manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Response_message_type_support_handle = {
  0,
  &manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manus_ros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manus_ros2_msgs, srv, CalibrateGloveTheta_Response)() {
  manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Response_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Response_message_type_support_handle.typesupport_identifier) {
    manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &manus_ros2_msgs__srv__CalibrateGloveTheta_Response__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "manus_ros2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "manus_ros2_msgs/srv/detail/calibrate_glove_theta__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers manus_ros2_msgs__srv__detail__calibrate_glove_theta__rosidl_typesupport_introspection_c__CalibrateGloveTheta_service_members = {
  "manus_ros2_msgs__srv",  // service namespace
  "CalibrateGloveTheta",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // manus_ros2_msgs__srv__detail__calibrate_glove_theta__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Request_message_type_support_handle,
  NULL  // response message
  // manus_ros2_msgs__srv__detail__calibrate_glove_theta__rosidl_typesupport_introspection_c__CalibrateGloveTheta_Response_message_type_support_handle
};

static rosidl_service_type_support_t manus_ros2_msgs__srv__detail__calibrate_glove_theta__rosidl_typesupport_introspection_c__CalibrateGloveTheta_service_type_support_handle = {
  0,
  &manus_ros2_msgs__srv__detail__calibrate_glove_theta__rosidl_typesupport_introspection_c__CalibrateGloveTheta_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manus_ros2_msgs, srv, CalibrateGloveTheta_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manus_ros2_msgs, srv, CalibrateGloveTheta_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manus_ros2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manus_ros2_msgs, srv, CalibrateGloveTheta)() {
  if (!manus_ros2_msgs__srv__detail__calibrate_glove_theta__rosidl_typesupport_introspection_c__CalibrateGloveTheta_service_type_support_handle.typesupport_identifier) {
    manus_ros2_msgs__srv__detail__calibrate_glove_theta__rosidl_typesupport_introspection_c__CalibrateGloveTheta_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)manus_ros2_msgs__srv__detail__calibrate_glove_theta__rosidl_typesupport_introspection_c__CalibrateGloveTheta_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manus_ros2_msgs, srv, CalibrateGloveTheta_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manus_ros2_msgs, srv, CalibrateGloveTheta_Response)()->data;
  }

  return &manus_ros2_msgs__srv__detail__calibrate_glove_theta__rosidl_typesupport_introspection_c__CalibrateGloveTheta_service_type_support_handle;
}
