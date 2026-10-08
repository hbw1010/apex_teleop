// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rysen_apexhand_msgs:msg/ThumbFingerTactile.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__THUMB_FINGER_TACTILE__BUILDER_HPP_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__THUMB_FINGER_TACTILE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rysen_apexhand_msgs/msg/detail/thumb_finger_tactile__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rysen_apexhand_msgs
{

namespace msg
{

namespace builder
{

class Init_ThumbFingerTactile_dist_pad
{
public:
  explicit Init_ThumbFingerTactile_dist_pad(::rysen_apexhand_msgs::msg::ThumbFingerTactile & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::msg::ThumbFingerTactile dist_pad(::rysen_apexhand_msgs::msg::ThumbFingerTactile::_dist_pad_type arg)
  {
    msg_.dist_pad = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::ThumbFingerTactile msg_;
};

class Init_ThumbFingerTactile_mid_pad
{
public:
  explicit Init_ThumbFingerTactile_mid_pad(::rysen_apexhand_msgs::msg::ThumbFingerTactile & msg)
  : msg_(msg)
  {}
  Init_ThumbFingerTactile_dist_pad mid_pad(::rysen_apexhand_msgs::msg::ThumbFingerTactile::_mid_pad_type arg)
  {
    msg_.mid_pad = std::move(arg);
    return Init_ThumbFingerTactile_dist_pad(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::ThumbFingerTactile msg_;
};

class Init_ThumbFingerTactile_prox_pad
{
public:
  Init_ThumbFingerTactile_prox_pad()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ThumbFingerTactile_mid_pad prox_pad(::rysen_apexhand_msgs::msg::ThumbFingerTactile::_prox_pad_type arg)
  {
    msg_.prox_pad = std::move(arg);
    return Init_ThumbFingerTactile_mid_pad(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::ThumbFingerTactile msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::msg::ThumbFingerTactile>()
{
  return rysen_apexhand_msgs::msg::builder::Init_ThumbFingerTactile_prox_pad();
}

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__THUMB_FINGER_TACTILE__BUILDER_HPP_
