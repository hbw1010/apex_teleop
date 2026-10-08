// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rysen_apexhand_msgs:msg/CommonFingerTactile.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__COMMON_FINGER_TACTILE__BUILDER_HPP_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__COMMON_FINGER_TACTILE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rysen_apexhand_msgs/msg/detail/common_finger_tactile__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rysen_apexhand_msgs
{

namespace msg
{

namespace builder
{

class Init_CommonFingerTactile_dist_pad
{
public:
  explicit Init_CommonFingerTactile_dist_pad(::rysen_apexhand_msgs::msg::CommonFingerTactile & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::msg::CommonFingerTactile dist_pad(::rysen_apexhand_msgs::msg::CommonFingerTactile::_dist_pad_type arg)
  {
    msg_.dist_pad = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::CommonFingerTactile msg_;
};

class Init_CommonFingerTactile_mid_pad
{
public:
  explicit Init_CommonFingerTactile_mid_pad(::rysen_apexhand_msgs::msg::CommonFingerTactile & msg)
  : msg_(msg)
  {}
  Init_CommonFingerTactile_dist_pad mid_pad(::rysen_apexhand_msgs::msg::CommonFingerTactile::_mid_pad_type arg)
  {
    msg_.mid_pad = std::move(arg);
    return Init_CommonFingerTactile_dist_pad(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::CommonFingerTactile msg_;
};

class Init_CommonFingerTactile_prox_pad
{
public:
  Init_CommonFingerTactile_prox_pad()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommonFingerTactile_mid_pad prox_pad(::rysen_apexhand_msgs::msg::CommonFingerTactile::_prox_pad_type arg)
  {
    msg_.prox_pad = std::move(arg);
    return Init_CommonFingerTactile_mid_pad(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::CommonFingerTactile msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::msg::CommonFingerTactile>()
{
  return rysen_apexhand_msgs::msg::builder::Init_CommonFingerTactile_prox_pad();
}

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__COMMON_FINGER_TACTILE__BUILDER_HPP_
