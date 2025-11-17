// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ti_mmwave_msgs:msg/DataFrame.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_MSGS__MSG__DETAIL__DATA_FRAME__STRUCT_HPP_
#define TI_MMWAVE_MSGS__MSG__DETAIL__DATA_FRAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ti_mmwave_msgs__msg__DataFrame __attribute__((deprecated))
#else
# define DEPRECATED__ti_mmwave_msgs__msg__DataFrame __declspec(deprecated)
#endif

namespace ti_mmwave_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DataFrame_
{
  using Type = DataFrame_<ContainerAllocator>;

  explicit DataFrame_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit DataFrame_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _data_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ti_mmwave_msgs::msg::DataFrame_<ContainerAllocator> *;
  using ConstRawPtr =
    const ti_mmwave_msgs::msg::DataFrame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ti_mmwave_msgs::msg::DataFrame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ti_mmwave_msgs::msg::DataFrame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ti_mmwave_msgs::msg::DataFrame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ti_mmwave_msgs::msg::DataFrame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ti_mmwave_msgs::msg::DataFrame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ti_mmwave_msgs::msg::DataFrame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ti_mmwave_msgs::msg::DataFrame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ti_mmwave_msgs::msg::DataFrame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ti_mmwave_msgs__msg__DataFrame
    std::shared_ptr<ti_mmwave_msgs::msg::DataFrame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ti_mmwave_msgs__msg__DataFrame
    std::shared_ptr<ti_mmwave_msgs::msg::DataFrame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataFrame_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataFrame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataFrame_

// alias to use template instance with default allocator
using DataFrame =
  ti_mmwave_msgs::msg::DataFrame_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ti_mmwave_msgs

#endif  // TI_MMWAVE_MSGS__MSG__DETAIL__DATA_FRAME__STRUCT_HPP_
