// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rysen_apexhand_msgs:srv/StartTeleop.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__START_TELEOP__BUILDER_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__START_TELEOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rysen_apexhand_msgs/srv/detail/start_teleop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_StartTeleop_Request_command
{
public:
  Init_StartTeleop_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rysen_apexhand_msgs::srv::StartTeleop_Request command(::rysen_apexhand_msgs::srv::StartTeleop_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::StartTeleop_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::StartTeleop_Request>()
{
  return rysen_apexhand_msgs::srv::builder::Init_StartTeleop_Request_command();
}

}  // namespace rysen_apexhand_msgs


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_StartTeleop_Response_message
{
public:
  explicit Init_StartTeleop_Response_message(::rysen_apexhand_msgs::srv::StartTeleop_Response & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::srv::StartTeleop_Response message(::rysen_apexhand_msgs::srv::StartTeleop_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::StartTeleop_Response msg_;
};

class Init_StartTeleop_Response_success
{
public:
  Init_StartTeleop_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartTeleop_Response_message success(::rysen_apexhand_msgs::srv::StartTeleop_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_StartTeleop_Response_message(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::StartTeleop_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::StartTeleop_Response>()
{
  return rysen_apexhand_msgs::srv::builder::Init_StartTeleop_Response_success();
}

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__START_TELEOP__BUILDER_HPP_
