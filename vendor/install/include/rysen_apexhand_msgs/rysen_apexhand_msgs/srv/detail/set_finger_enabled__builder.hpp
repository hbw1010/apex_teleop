// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rysen_apexhand_msgs:srv/SetFingerEnabled.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_FINGER_ENABLED__BUILDER_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_FINGER_ENABLED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rysen_apexhand_msgs/srv/detail/set_finger_enabled__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_SetFingerEnabled_Request_enable
{
public:
  explicit Init_SetFingerEnabled_Request_enable(::rysen_apexhand_msgs::srv::SetFingerEnabled_Request & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::srv::SetFingerEnabled_Request enable(::rysen_apexhand_msgs::srv::SetFingerEnabled_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetFingerEnabled_Request msg_;
};

class Init_SetFingerEnabled_Request_finger_ids
{
public:
  explicit Init_SetFingerEnabled_Request_finger_ids(::rysen_apexhand_msgs::srv::SetFingerEnabled_Request & msg)
  : msg_(msg)
  {}
  Init_SetFingerEnabled_Request_enable finger_ids(::rysen_apexhand_msgs::srv::SetFingerEnabled_Request::_finger_ids_type arg)
  {
    msg_.finger_ids = std::move(arg);
    return Init_SetFingerEnabled_Request_enable(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetFingerEnabled_Request msg_;
};

class Init_SetFingerEnabled_Request_ip
{
public:
  Init_SetFingerEnabled_Request_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetFingerEnabled_Request_finger_ids ip(::rysen_apexhand_msgs::srv::SetFingerEnabled_Request::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_SetFingerEnabled_Request_finger_ids(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetFingerEnabled_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::SetFingerEnabled_Request>()
{
  return rysen_apexhand_msgs::srv::builder::Init_SetFingerEnabled_Request_ip();
}

}  // namespace rysen_apexhand_msgs


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_SetFingerEnabled_Response_message
{
public:
  explicit Init_SetFingerEnabled_Response_message(::rysen_apexhand_msgs::srv::SetFingerEnabled_Response & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::srv::SetFingerEnabled_Response message(::rysen_apexhand_msgs::srv::SetFingerEnabled_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetFingerEnabled_Response msg_;
};

class Init_SetFingerEnabled_Response_success
{
public:
  Init_SetFingerEnabled_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetFingerEnabled_Response_message success(::rysen_apexhand_msgs::srv::SetFingerEnabled_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetFingerEnabled_Response_message(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetFingerEnabled_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::SetFingerEnabled_Response>()
{
  return rysen_apexhand_msgs::srv::builder::Init_SetFingerEnabled_Response_success();
}

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_FINGER_ENABLED__BUILDER_HPP_
