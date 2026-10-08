// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rysen_apexhand_msgs:srv/SetMaxJointAccel.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_MAX_JOINT_ACCEL__BUILDER_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_MAX_JOINT_ACCEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rysen_apexhand_msgs/srv/detail/set_max_joint_accel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_SetMaxJointAccel_Request_max_accels
{
public:
  explicit Init_SetMaxJointAccel_Request_max_accels(::rysen_apexhand_msgs::srv::SetMaxJointAccel_Request & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::srv::SetMaxJointAccel_Request max_accels(::rysen_apexhand_msgs::srv::SetMaxJointAccel_Request::_max_accels_type arg)
  {
    msg_.max_accels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetMaxJointAccel_Request msg_;
};

class Init_SetMaxJointAccel_Request_joint_ids
{
public:
  explicit Init_SetMaxJointAccel_Request_joint_ids(::rysen_apexhand_msgs::srv::SetMaxJointAccel_Request & msg)
  : msg_(msg)
  {}
  Init_SetMaxJointAccel_Request_max_accels joint_ids(::rysen_apexhand_msgs::srv::SetMaxJointAccel_Request::_joint_ids_type arg)
  {
    msg_.joint_ids = std::move(arg);
    return Init_SetMaxJointAccel_Request_max_accels(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetMaxJointAccel_Request msg_;
};

class Init_SetMaxJointAccel_Request_get_only
{
public:
  explicit Init_SetMaxJointAccel_Request_get_only(::rysen_apexhand_msgs::srv::SetMaxJointAccel_Request & msg)
  : msg_(msg)
  {}
  Init_SetMaxJointAccel_Request_joint_ids get_only(::rysen_apexhand_msgs::srv::SetMaxJointAccel_Request::_get_only_type arg)
  {
    msg_.get_only = std::move(arg);
    return Init_SetMaxJointAccel_Request_joint_ids(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetMaxJointAccel_Request msg_;
};

class Init_SetMaxJointAccel_Request_ip
{
public:
  Init_SetMaxJointAccel_Request_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMaxJointAccel_Request_get_only ip(::rysen_apexhand_msgs::srv::SetMaxJointAccel_Request::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_SetMaxJointAccel_Request_get_only(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetMaxJointAccel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::SetMaxJointAccel_Request>()
{
  return rysen_apexhand_msgs::srv::builder::Init_SetMaxJointAccel_Request_ip();
}

}  // namespace rysen_apexhand_msgs


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_SetMaxJointAccel_Response_max_accels
{
public:
  explicit Init_SetMaxJointAccel_Response_max_accels(::rysen_apexhand_msgs::srv::SetMaxJointAccel_Response & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::srv::SetMaxJointAccel_Response max_accels(::rysen_apexhand_msgs::srv::SetMaxJointAccel_Response::_max_accels_type arg)
  {
    msg_.max_accels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetMaxJointAccel_Response msg_;
};

class Init_SetMaxJointAccel_Response_message
{
public:
  explicit Init_SetMaxJointAccel_Response_message(::rysen_apexhand_msgs::srv::SetMaxJointAccel_Response & msg)
  : msg_(msg)
  {}
  Init_SetMaxJointAccel_Response_max_accels message(::rysen_apexhand_msgs::srv::SetMaxJointAccel_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_SetMaxJointAccel_Response_max_accels(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetMaxJointAccel_Response msg_;
};

class Init_SetMaxJointAccel_Response_success
{
public:
  Init_SetMaxJointAccel_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMaxJointAccel_Response_message success(::rysen_apexhand_msgs::srv::SetMaxJointAccel_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetMaxJointAccel_Response_message(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetMaxJointAccel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::SetMaxJointAccel_Response>()
{
  return rysen_apexhand_msgs::srv::builder::Init_SetMaxJointAccel_Response_success();
}

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_MAX_JOINT_ACCEL__BUILDER_HPP_
