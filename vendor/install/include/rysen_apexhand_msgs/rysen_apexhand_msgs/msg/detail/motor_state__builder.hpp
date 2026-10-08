// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rysen_apexhand_msgs:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rysen_apexhand_msgs/msg/detail/motor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rysen_apexhand_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorState_current
{
public:
  explicit Init_MotorState_current(::rysen_apexhand_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::msg::MotorState current(::rysen_apexhand_msgs::msg::MotorState::_current_type arg)
  {
    msg_.current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::MotorState msg_;
};

class Init_MotorState_temperature
{
public:
  explicit Init_MotorState_temperature(::rysen_apexhand_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_current temperature(::rysen_apexhand_msgs::msg::MotorState::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_MotorState_current(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::MotorState msg_;
};

class Init_MotorState_name
{
public:
  explicit Init_MotorState_name(::rysen_apexhand_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_temperature name(::rysen_apexhand_msgs::msg::MotorState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_MotorState_temperature(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::MotorState msg_;
};

class Init_MotorState_header
{
public:
  Init_MotorState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorState_name header(::rysen_apexhand_msgs::msg::MotorState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorState_name(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::MotorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::msg::MotorState>()
{
  return rysen_apexhand_msgs::msg::builder::Init_MotorState_header();
}

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
