// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rysen_apexhand_msgs:msg/TactileImage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rysen_apexhand_msgs/msg/detail/tactile_image__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rysen_apexhand_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TactileImage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rysen_apexhand_msgs::msg::TactileImage(_init);
}

void TactileImage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rysen_apexhand_msgs::msg::TactileImage *>(message_memory);
  typed_message->~TactileImage();
}

size_t size_function__TactileImage__gray_image(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TactileImage__gray_image(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TactileImage__gray_image(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__TactileImage__gray_image(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__TactileImage__gray_image(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__TactileImage__gray_image(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__TactileImage__gray_image(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__TactileImage__gray_image(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TactileImage_message_member_array[4] = {
  {
    "width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs::msg::TactileImage, width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs::msg::TactileImage, height),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gray_image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs::msg::TactileImage, gray_image),  // bytes offset in struct
    nullptr,  // default value
    size_function__TactileImage__gray_image,  // size() function pointer
    get_const_function__TactileImage__gray_image,  // get_const(index) function pointer
    get_function__TactileImage__gray_image,  // get(index) function pointer
    fetch_function__TactileImage__gray_image,  // fetch(index, &value) function pointer
    assign_function__TactileImage__gray_image,  // assign(index, value) function pointer
    resize_function__TactileImage__gray_image  // resize(index) function pointer
  },
  {
    "tangential_forces",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rysen_apexhand_msgs::msg::TangentialForce>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rysen_apexhand_msgs::msg::TactileImage, tangential_forces),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TactileImage_message_members = {
  "rysen_apexhand_msgs::msg",  // message namespace
  "TactileImage",  // message name
  4,  // number of fields
  sizeof(rysen_apexhand_msgs::msg::TactileImage),
  TactileImage_message_member_array,  // message members
  TactileImage_init_function,  // function to initialize message memory (memory has to be allocated)
  TactileImage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TactileImage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TactileImage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rysen_apexhand_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rysen_apexhand_msgs::msg::TactileImage>()
{
  return &::rysen_apexhand_msgs::msg::rosidl_typesupport_introspection_cpp::TactileImage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rysen_apexhand_msgs, msg, TactileImage)() {
  return &::rysen_apexhand_msgs::msg::rosidl_typesupport_introspection_cpp::TactileImage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
