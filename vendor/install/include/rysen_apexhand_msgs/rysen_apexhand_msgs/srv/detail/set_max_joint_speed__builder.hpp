// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rysen_apexhand_msgs:srv/SetMaxJointSpeed.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_MAX_JOINT_SPEED__BUILDER_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_MAX_JOINT_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rysen_apexhand_msgs/srv/detail/set_max_joint_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_SetMaxJointSpeed_Request_max_speeds
{
public:
  explicit Init_SetMaxJointSpeed_Request_max_speeds(::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request max_speeds(::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request::_max_speeds_type arg)
  {
    msg_.max_speeds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request msg_;
};

class Init_SetMaxJointSpeed_Request_joint_ids
{
public:
  explicit Init_SetMaxJointSpeed_Request_joint_ids(::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request & msg)
  : msg_(msg)
  {}
  Init_SetMaxJointSpeed_Request_max_speeds joint_ids(::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request::_joint_ids_type arg)
  {
    msg_.joint_ids = std::move(arg);
    return Init_SetMaxJointSpeed_Request_max_speeds(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request msg_;
};

class Init_SetMaxJointSpeed_Request_get_only
{
public:
  explicit Init_SetMaxJointSpeed_Request_get_only(::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request & msg)
  : msg_(msg)
  {}
  Init_SetMaxJointSpeed_Request_joint_ids get_only(::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request::_get_only_type arg)
  {
    msg_.get_only = std::move(arg);
    return Init_SetMaxJointSpeed_Request_joint_ids(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request msg_;
};

class Init_SetMaxJointSpeed_Request_ip
{
public:
  Init_SetMaxJointSpeed_Request_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMaxJointSpeed_Request_get_only ip(::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_SetMaxJointSpeed_Request_get_only(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Request>()
{
  return rysen_apexhand_msgs::srv::builder::Init_SetMaxJointSpeed_Request_ip();
}

}  // namespace rysen_apexhand_msgs


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_SetMaxJointSpeed_Response_max_speeds
{
public:
  explicit Init_SetMaxJointSpeed_Response_max_speeds(::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Response & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Response max_speeds(::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Response::_max_speeds_type arg)
  {
    msg_.max_speeds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Response msg_;
};

class Init_SetMaxJointSpeed_Response_message
{
public:
  explicit Init_SetMaxJointSpeed_Response_message(::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Response & msg)
  : msg_(msg)
  {}
  Init_SetMaxJointSpeed_Response_max_speeds message(::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_SetMaxJointSpeed_Response_max_speeds(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Response msg_;
};

class Init_SetMaxJointSpeed_Response_success
{
public:
  Init_SetMaxJointSpeed_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMaxJointSpeed_Response_message success(::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetMaxJointSpeed_Response_message(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::SetMaxJointSpeed_Response>()
{
  return rysen_apexhand_msgs::srv::builder::Init_SetMaxJointSpeed_Response_success();
}

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_MAX_JOINT_SPEED__BUILDER_HPP_
