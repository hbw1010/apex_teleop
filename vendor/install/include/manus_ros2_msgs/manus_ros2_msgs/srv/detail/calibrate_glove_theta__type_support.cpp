// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from manus_ros2_msgs:srv/CalibrateGloveTheta.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "manus_ros2_msgs/srv/detail/calibrate_glove_theta__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace manus_ros2_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CalibrateGloveTheta_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) manus_ros2_msgs::srv::CalibrateGloveTheta_Request(_init);
}

void CalibrateGloveTheta_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<manus_ros2_msgs::srv::CalibrateGloveTheta_Request *>(message_memory);
  typed_message->~CalibrateGloveTheta_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CalibrateGloveTheta_Request_message_member_array[1] = {
  {
    "side",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs::srv::CalibrateGloveTheta_Request, side),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CalibrateGloveTheta_Request_message_members = {
  "manus_ros2_msgs::srv",  // message namespace
  "CalibrateGloveTheta_Request",  // message name
  1,  // number of fields
  sizeof(manus_ros2_msgs::srv::CalibrateGloveTheta_Request),
  CalibrateGloveTheta_Request_message_member_array,  // message members
  CalibrateGloveTheta_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CalibrateGloveTheta_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CalibrateGloveTheta_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CalibrateGloveTheta_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace manus_ros2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<manus_ros2_msgs::srv::CalibrateGloveTheta_Request>()
{
  return &::manus_ros2_msgs::srv::rosidl_typesupport_introspection_cpp::CalibrateGloveTheta_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, manus_ros2_msgs, srv, CalibrateGloveTheta_Request)() {
  return &::manus_ros2_msgs::srv::rosidl_typesupport_introspection_cpp::CalibrateGloveTheta_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "manus_ros2_msgs/srv/detail/calibrate_glove_theta__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace manus_ros2_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CalibrateGloveTheta_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) manus_ros2_msgs::srv::CalibrateGloveTheta_Response(_init);
}

void CalibrateGloveTheta_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<manus_ros2_msgs::srv::CalibrateGloveTheta_Response *>(message_memory);
  typed_message->~CalibrateGloveTheta_Response();
}

size_t size_function__CalibrateGloveTheta_Response__four_fingers_together_tips(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__CalibrateGloveTheta_Response__four_fingers_together_tips(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<geometry_msgs::msg::Point, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__CalibrateGloveTheta_Response__four_fingers_together_tips(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<geometry_msgs::msg::Point, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__CalibrateGloveTheta_Response__four_fingers_together_tips(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__CalibrateGloveTheta_Response__four_fingers_together_tips(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__CalibrateGloveTheta_Response__four_fingers_together_tips(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__CalibrateGloveTheta_Response__four_fingers_together_tips(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CalibrateGloveTheta_Response_message_member_array[8] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs::srv::CalibrateGloveTheta_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "theta_rad",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs::srv::CalibrateGloveTheta_Response, theta_rad),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "theta_deg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs::srv::CalibrateGloveTheta_Response, theta_deg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "four_fingers_together_tips",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs::srv::CalibrateGloveTheta_Response, four_fingers_together_tips),  // bytes offset in struct
    nullptr,  // default value
    size_function__CalibrateGloveTheta_Response__four_fingers_together_tips,  // size() function pointer
    get_const_function__CalibrateGloveTheta_Response__four_fingers_together_tips,  // get_const(index) function pointer
    get_function__CalibrateGloveTheta_Response__four_fingers_together_tips,  // get(index) function pointer
    fetch_function__CalibrateGloveTheta_Response__four_fingers_together_tips,  // fetch(index, &value) function pointer
    assign_function__CalibrateGloveTheta_Response__four_fingers_together_tips,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "midpoint_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs::srv::CalibrateGloveTheta_Response, midpoint_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "midpoint_z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs::srv::CalibrateGloveTheta_Response, midpoint_z),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sample_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs::srv::CalibrateGloveTheta_Response, sample_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manus_ros2_msgs::srv::CalibrateGloveTheta_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CalibrateGloveTheta_Response_message_members = {
  "manus_ros2_msgs::srv",  // message namespace
  "CalibrateGloveTheta_Response",  // message name
  8,  // number of fields
  sizeof(manus_ros2_msgs::srv::CalibrateGloveTheta_Response),
  CalibrateGloveTheta_Response_message_member_array,  // message members
  CalibrateGloveTheta_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CalibrateGloveTheta_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CalibrateGloveTheta_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CalibrateGloveTheta_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace manus_ros2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<manus_ros2_msgs::srv::CalibrateGloveTheta_Response>()
{
  return &::manus_ros2_msgs::srv::rosidl_typesupport_introspection_cpp::CalibrateGloveTheta_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, manus_ros2_msgs, srv, CalibrateGloveTheta_Response)() {
  return &::manus_ros2_msgs::srv::rosidl_typesupport_introspection_cpp::CalibrateGloveTheta_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "manus_ros2_msgs/srv/detail/calibrate_glove_theta__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace manus_ros2_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers CalibrateGloveTheta_service_members = {
  "manus_ros2_msgs::srv",  // service namespace
  "CalibrateGloveTheta",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<manus_ros2_msgs::srv::CalibrateGloveTheta>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t CalibrateGloveTheta_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CalibrateGloveTheta_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace manus_ros2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<manus_ros2_msgs::srv::CalibrateGloveTheta>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::manus_ros2_msgs::srv::rosidl_typesupport_introspection_cpp::CalibrateGloveTheta_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::manus_ros2_msgs::srv::CalibrateGloveTheta_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::manus_ros2_msgs::srv::CalibrateGloveTheta_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, manus_ros2_msgs, srv, CalibrateGloveTheta)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<manus_ros2_msgs::srv::CalibrateGloveTheta>();
}

#ifdef __cplusplus
}
#endif
