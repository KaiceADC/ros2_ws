// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_simulator:msg/RadarObject.idl
// generated code does not contain a copyright notice

#ifndef RADAR_SIMULATOR__MSG__DETAIL__RADAR_OBJECT__STRUCT_HPP_
#define RADAR_SIMULATOR__MSG__DETAIL__RADAR_OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__radar_simulator__msg__RadarObject __attribute__((deprecated))
#else
# define DEPRECATED__radar_simulator__msg__RadarObject __declspec(deprecated)
#endif

namespace radar_simulator
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarObject_
{
  using Type = RadarObject_<ContainerAllocator>;

  explicit RadarObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->velocity = 0.0f;
      this->angle = 0.0f;
      this->rcs = 0.0f;
      this->object_id = 0l;
    }
  }

  explicit RadarObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->velocity = 0.0f;
      this->angle = 0.0f;
      this->rcs = 0.0f;
      this->object_id = 0l;
    }
  }

  // field types and members
  using _distance_type =
    float;
  _distance_type distance;
  using _velocity_type =
    float;
  _velocity_type velocity;
  using _angle_type =
    float;
  _angle_type angle;
  using _rcs_type =
    float;
  _rcs_type rcs;
  using _object_id_type =
    int32_t;
  _object_id_type object_id;

  // setters for named parameter idiom
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__rcs(
    const float & _arg)
  {
    this->rcs = _arg;
    return *this;
  }
  Type & set__object_id(
    const int32_t & _arg)
  {
    this->object_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_simulator::msg::RadarObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_simulator::msg::RadarObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_simulator::msg::RadarObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_simulator::msg::RadarObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_simulator::msg::RadarObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_simulator::msg::RadarObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_simulator::msg::RadarObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_simulator::msg::RadarObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_simulator::msg::RadarObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_simulator::msg::RadarObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_simulator__msg__RadarObject
    std::shared_ptr<radar_simulator::msg::RadarObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_simulator__msg__RadarObject
    std::shared_ptr<radar_simulator::msg::RadarObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarObject_ & other) const
  {
    if (this->distance != other.distance) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->rcs != other.rcs) {
      return false;
    }
    if (this->object_id != other.object_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarObject_

// alias to use template instance with default allocator
using RadarObject =
  radar_simulator::msg::RadarObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_simulator

#endif  // RADAR_SIMULATOR__MSG__DETAIL__RADAR_OBJECT__STRUCT_HPP_
