// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rysen_apexhand_msgs:msg/TangentialForce.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__TANGENTIAL_FORCE__BUILDER_HPP_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__TANGENTIAL_FORCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rysen_apexhand_msgs/msg/detail/tangential_force__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rysen_apexhand_msgs
{

namespace msg
{

namespace builder
{

class Init_TangentialForce_magnitude
{
public:
  explicit Init_TangentialForce_magnitude(::rysen_apexhand_msgs::msg::TangentialForce & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::msg::TangentialForce magnitude(::rysen_apexhand_msgs::msg::TangentialForce::_magnitude_type arg)
  {
    msg_.magnitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::TangentialForce msg_;
};

class Init_TangentialForce_theta
{
public:
  Init_TangentialForce_theta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TangentialForce_magnitude theta(::rysen_apexhand_msgs::msg::TangentialForce::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_TangentialForce_magnitude(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::TangentialForce msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::msg::TangentialForce>()
{
  return rysen_apexhand_msgs::msg::builder::Init_TangentialForce_theta();
}

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__TANGENTIAL_FORCE__BUILDER_HPP_
