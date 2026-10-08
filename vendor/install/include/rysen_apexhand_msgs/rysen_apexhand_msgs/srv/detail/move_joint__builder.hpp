// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rysen_apexhand_msgs:srv/MoveJoint.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__MOVE_JOINT__BUILDER_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__MOVE_JOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rysen_apexhand_msgs/srv/detail/move_joint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveJoint_Request_accelerations
{
public:
  explicit Init_MoveJoint_Request_accelerations(::rysen_apexhand_msgs::srv::MoveJoint_Request & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::srv::MoveJoint_Request accelerations(::rysen_apexhand_msgs::srv::MoveJoint_Request::_accelerations_type arg)
  {
    msg_.accelerations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::MoveJoint_Request msg_;
};

class Init_MoveJoint_Request_velocities
{
public:
  explicit Init_MoveJoint_Request_velocities(::rysen_apexhand_msgs::srv::MoveJoint_Request & msg)
  : msg_(msg)
  {}
  Init_MoveJoint_Request_accelerations velocities(::rysen_apexhand_msgs::srv::MoveJoint_Request::_velocities_type arg)
  {
    msg_.velocities = std::move(arg);
    return Init_MoveJoint_Request_accelerations(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::MoveJoint_Request msg_;
};

class Init_MoveJoint_Request_positions
{
public:
  explicit Init_MoveJoint_Request_positions(::rysen_apexhand_msgs::srv::MoveJoint_Request & msg)
  : msg_(msg)
  {}
  Init_MoveJoint_Request_velocities positions(::rysen_apexhand_msgs::srv::MoveJoint_Request::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_MoveJoint_Request_velocities(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::MoveJoint_Request msg_;
};

class Init_MoveJoint_Request_joint_ids
{
public:
  explicit Init_MoveJoint_Request_joint_ids(::rysen_apexhand_msgs::srv::MoveJoint_Request & msg)
  : msg_(msg)
  {}
  Init_MoveJoint_Request_positions joint_ids(::rysen_apexhand_msgs::srv::MoveJoint_Request::_joint_ids_type arg)
  {
    msg_.joint_ids = std::move(arg);
    return Init_MoveJoint_Request_positions(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::MoveJoint_Request msg_;
};

class Init_MoveJoint_Request_ip
{
public:
  Init_MoveJoint_Request_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveJoint_Request_joint_ids ip(::rysen_apexhand_msgs::srv::MoveJoint_Request::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_MoveJoint_Request_joint_ids(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::MoveJoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::MoveJoint_Request>()
{
  return rysen_apexhand_msgs::srv::builder::Init_MoveJoint_Request_ip();
}

}  // namespace rysen_apexhand_msgs


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveJoint_Response_message
{
public:
  explicit Init_MoveJoint_Response_message(::rysen_apexhand_msgs::srv::MoveJoint_Response & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::srv::MoveJoint_Response message(::rysen_apexhand_msgs::srv::MoveJoint_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::MoveJoint_Response msg_;
};

class Init_MoveJoint_Response_success
{
public:
  Init_MoveJoint_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveJoint_Response_message success(::rysen_apexhand_msgs::srv::MoveJoint_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MoveJoint_Response_message(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::MoveJoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::MoveJoint_Response>()
{
  return rysen_apexhand_msgs::srv::builder::Init_MoveJoint_Response_success();
}

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__MOVE_JOINT__BUILDER_HPP_
