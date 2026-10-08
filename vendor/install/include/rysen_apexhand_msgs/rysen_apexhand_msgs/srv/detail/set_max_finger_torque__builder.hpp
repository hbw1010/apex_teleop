// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rysen_apexhand_msgs:srv/SetMaxFingerTorque.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_MAX_FINGER_TORQUE__BUILDER_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_MAX_FINGER_TORQUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rysen_apexhand_msgs/srv/detail/set_max_finger_torque__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_SetMaxFingerTorque_Request_max_torques
{
public:
  explicit Init_SetMaxFingerTorque_Request_max_torques(::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Request & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Request max_torques(::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Request::_max_torques_type arg)
  {
    msg_.max_torques = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Request msg_;
};

class Init_SetMaxFingerTorque_Request_finger_ids
{
public:
  explicit Init_SetMaxFingerTorque_Request_finger_ids(::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Request & msg)
  : msg_(msg)
  {}
  Init_SetMaxFingerTorque_Request_max_torques finger_ids(::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Request::_finger_ids_type arg)
  {
    msg_.finger_ids = std::move(arg);
    return Init_SetMaxFingerTorque_Request_max_torques(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Request msg_;
};

class Init_SetMaxFingerTorque_Request_get_only
{
public:
  explicit Init_SetMaxFingerTorque_Request_get_only(::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Request & msg)
  : msg_(msg)
  {}
  Init_SetMaxFingerTorque_Request_finger_ids get_only(::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Request::_get_only_type arg)
  {
    msg_.get_only = std::move(arg);
    return Init_SetMaxFingerTorque_Request_finger_ids(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Request msg_;
};

class Init_SetMaxFingerTorque_Request_ip
{
public:
  Init_SetMaxFingerTorque_Request_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMaxFingerTorque_Request_get_only ip(::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Request::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_SetMaxFingerTorque_Request_get_only(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Request>()
{
  return rysen_apexhand_msgs::srv::builder::Init_SetMaxFingerTorque_Request_ip();
}

}  // namespace rysen_apexhand_msgs


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_SetMaxFingerTorque_Response_max_torques
{
public:
  explicit Init_SetMaxFingerTorque_Response_max_torques(::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Response & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Response max_torques(::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Response::_max_torques_type arg)
  {
    msg_.max_torques = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Response msg_;
};

class Init_SetMaxFingerTorque_Response_message
{
public:
  explicit Init_SetMaxFingerTorque_Response_message(::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Response & msg)
  : msg_(msg)
  {}
  Init_SetMaxFingerTorque_Response_max_torques message(::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_SetMaxFingerTorque_Response_max_torques(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Response msg_;
};

class Init_SetMaxFingerTorque_Response_success
{
public:
  Init_SetMaxFingerTorque_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMaxFingerTorque_Response_message success(::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetMaxFingerTorque_Response_message(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::SetMaxFingerTorque_Response>()
{
  return rysen_apexhand_msgs::srv::builder::Init_SetMaxFingerTorque_Response_success();
}

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_MAX_FINGER_TORQUE__BUILDER_HPP_
