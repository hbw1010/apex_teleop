// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rysen_apexhand_msgs:srv/GetConnectionInfo.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__GET_CONNECTION_INFO__STRUCT_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__GET_CONNECTION_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rysen_apexhand_msgs__srv__GetConnectionInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__rysen_apexhand_msgs__srv__GetConnectionInfo_Request __declspec(deprecated)
#endif

namespace rysen_apexhand_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetConnectionInfo_Request_
{
  using Type = GetConnectionInfo_Request_<ContainerAllocator>;

  explicit GetConnectionInfo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetConnectionInfo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    rysen_apexhand_msgs::srv::GetConnectionInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rysen_apexhand_msgs::srv::GetConnectionInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::srv::GetConnectionInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::srv::GetConnectionInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::srv::GetConnectionInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::srv::GetConnectionInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::srv::GetConnectionInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::srv::GetConnectionInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::srv::GetConnectionInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::srv::GetConnectionInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rysen_apexhand_msgs__srv__GetConnectionInfo_Request
    std::shared_ptr<rysen_apexhand_msgs::srv::GetConnectionInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rysen_apexhand_msgs__srv__GetConnectionInfo_Request
    std::shared_ptr<rysen_apexhand_msgs::srv::GetConnectionInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetConnectionInfo_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetConnectionInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetConnectionInfo_Request_

// alias to use template instance with default allocator
using GetConnectionInfo_Request =
  rysen_apexhand_msgs::srv::GetConnectionInfo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rysen_apexhand_msgs


#ifndef _WIN32
# define DEPRECATED__rysen_apexhand_msgs__srv__GetConnectionInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__rysen_apexhand_msgs__srv__GetConnectionInfo_Response __declspec(deprecated)
#endif

namespace rysen_apexhand_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetConnectionInfo_Response_
{
  using Type = GetConnectionInfo_Response_<ContainerAllocator>;

  explicit GetConnectionInfo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetConnectionInfo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _ips_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _ips_type ips;
  using _connected_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _connected_type connected;
  using _device_ips_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _device_ips_type device_ips;
  using _hand_sides_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _hand_sides_type hand_sides;
  using _hardware_uids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _hardware_uids_type hardware_uids;

  // setters for named parameter idiom
  Type & set__ips(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->ips = _arg;
    return *this;
  }
  Type & set__connected(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->connected = _arg;
    return *this;
  }
  Type & set__device_ips(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->device_ips = _arg;
    return *this;
  }
  Type & set__hand_sides(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->hand_sides = _arg;
    return *this;
  }
  Type & set__hardware_uids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->hardware_uids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rysen_apexhand_msgs::srv::GetConnectionInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rysen_apexhand_msgs::srv::GetConnectionInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::srv::GetConnectionInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::srv::GetConnectionInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::srv::GetConnectionInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::srv::GetConnectionInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::srv::GetConnectionInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::srv::GetConnectionInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::srv::GetConnectionInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::srv::GetConnectionInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rysen_apexhand_msgs__srv__GetConnectionInfo_Response
    std::shared_ptr<rysen_apexhand_msgs::srv::GetConnectionInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rysen_apexhand_msgs__srv__GetConnectionInfo_Response
    std::shared_ptr<rysen_apexhand_msgs::srv::GetConnectionInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetConnectionInfo_Response_ & other) const
  {
    if (this->ips != other.ips) {
      return false;
    }
    if (this->connected != other.connected) {
      return false;
    }
    if (this->device_ips != other.device_ips) {
      return false;
    }
    if (this->hand_sides != other.hand_sides) {
      return false;
    }
    if (this->hardware_uids != other.hardware_uids) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetConnectionInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetConnectionInfo_Response_

// alias to use template instance with default allocator
using GetConnectionInfo_Response =
  rysen_apexhand_msgs::srv::GetConnectionInfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rysen_apexhand_msgs

namespace rysen_apexhand_msgs
{

namespace srv
{

struct GetConnectionInfo
{
  using Request = rysen_apexhand_msgs::srv::GetConnectionInfo_Request;
  using Response = rysen_apexhand_msgs::srv::GetConnectionInfo_Response;
};

}  // namespace srv

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__GET_CONNECTION_INFO__STRUCT_HPP_
