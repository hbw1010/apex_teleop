// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rysen_apexhand_msgs:srv/IsFingerEnabled.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__IS_FINGER_ENABLED__BUILDER_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__IS_FINGER_ENABLED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rysen_apexhand_msgs/srv/detail/is_finger_enabled__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_IsFingerEnabled_Request_finger_id
{
public:
  explicit Init_IsFingerEnabled_Request_finger_id(::rysen_apexhand_msgs::srv::IsFingerEnabled_Request & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::srv::IsFingerEnabled_Request finger_id(::rysen_apexhand_msgs::srv::IsFingerEnabled_Request::_finger_id_type arg)
  {
    msg_.finger_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::IsFingerEnabled_Request msg_;
};

class Init_IsFingerEnabled_Request_ip
{
public:
  Init_IsFingerEnabled_Request_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IsFingerEnabled_Request_finger_id ip(::rysen_apexhand_msgs::srv::IsFingerEnabled_Request::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_IsFingerEnabled_Request_finger_id(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::IsFingerEnabled_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::IsFingerEnabled_Request>()
{
  return rysen_apexhand_msgs::srv::builder::Init_IsFingerEnabled_Request_ip();
}

}  // namespace rysen_apexhand_msgs


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_IsFingerEnabled_Response_is_enabled
{
public:
  explicit Init_IsFingerEnabled_Response_is_enabled(::rysen_apexhand_msgs::srv::IsFingerEnabled_Response & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::srv::IsFingerEnabled_Response is_enabled(::rysen_apexhand_msgs::srv::IsFingerEnabled_Response::_is_enabled_type arg)
  {
    msg_.is_enabled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::IsFingerEnabled_Response msg_;
};

class Init_IsFingerEnabled_Response_message
{
public:
  explicit Init_IsFingerEnabled_Response_message(::rysen_apexhand_msgs::srv::IsFingerEnabled_Response & msg)
  : msg_(msg)
  {}
  Init_IsFingerEnabled_Response_is_enabled message(::rysen_apexhand_msgs::srv::IsFingerEnabled_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_IsFingerEnabled_Response_is_enabled(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::IsFingerEnabled_Response msg_;
};

class Init_IsFingerEnabled_Response_success
{
public:
  Init_IsFingerEnabled_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IsFingerEnabled_Response_message success(::rysen_apexhand_msgs::srv::IsFingerEnabled_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_IsFingerEnabled_Response_message(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::IsFingerEnabled_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::IsFingerEnabled_Response>()
{
  return rysen_apexhand_msgs::srv::builder::Init_IsFingerEnabled_Response_success();
}

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__IS_FINGER_ENABLED__BUILDER_HPP_
