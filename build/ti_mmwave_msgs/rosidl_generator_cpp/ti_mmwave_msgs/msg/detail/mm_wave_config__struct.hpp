// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ti_mmwave_msgs:msg/MMWaveConfig.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_MSGS__MSG__DETAIL__MM_WAVE_CONFIG__STRUCT_HPP_
#define TI_MMWAVE_MSGS__MSG__DETAIL__MM_WAVE_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ti_mmwave_msgs__msg__MMWaveConfig __attribute__((deprecated))
#else
# define DEPRECATED__ti_mmwave_msgs__msg__MMWaveConfig __declspec(deprecated)
#endif

namespace ti_mmwave_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MMWaveConfig_
{
  using Type = MMWaveConfig_<ContainerAllocator>;

  explicit MMWaveConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_adc_samples = 0l;
      this->num_loops = 0l;
      this->num_tx = 0l;
      this->num_lvds_lanes = 0l;
      this->f_s = 0.0f;
      this->f_c = 0.0f;
      this->bw = 0.0f;
      this->pri = 0.0f;
      this->t_fr = 0.0f;
      this->range_max = 0.0f;
      this->range_res = 0.0f;
      this->doppler_max = 0.0f;
      this->doppler_res = 0.0f;
      this->raw_commands = "";
    }
  }

  explicit MMWaveConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : raw_commands(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_adc_samples = 0l;
      this->num_loops = 0l;
      this->num_tx = 0l;
      this->num_lvds_lanes = 0l;
      this->f_s = 0.0f;
      this->f_c = 0.0f;
      this->bw = 0.0f;
      this->pri = 0.0f;
      this->t_fr = 0.0f;
      this->range_max = 0.0f;
      this->range_res = 0.0f;
      this->doppler_max = 0.0f;
      this->doppler_res = 0.0f;
      this->raw_commands = "";
    }
  }

  // field types and members
  using _num_adc_samples_type =
    int32_t;
  _num_adc_samples_type num_adc_samples;
  using _num_loops_type =
    int32_t;
  _num_loops_type num_loops;
  using _num_tx_type =
    int32_t;
  _num_tx_type num_tx;
  using _num_lvds_lanes_type =
    int32_t;
  _num_lvds_lanes_type num_lvds_lanes;
  using _f_s_type =
    float;
  _f_s_type f_s;
  using _f_c_type =
    float;
  _f_c_type f_c;
  using _bw_type =
    float;
  _bw_type bw;
  using _pri_type =
    float;
  _pri_type pri;
  using _t_fr_type =
    float;
  _t_fr_type t_fr;
  using _range_max_type =
    float;
  _range_max_type range_max;
  using _range_res_type =
    float;
  _range_res_type range_res;
  using _doppler_max_type =
    float;
  _doppler_max_type doppler_max;
  using _doppler_res_type =
    float;
  _doppler_res_type doppler_res;
  using _raw_commands_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _raw_commands_type raw_commands;

  // setters for named parameter idiom
  Type & set__num_adc_samples(
    const int32_t & _arg)
  {
    this->num_adc_samples = _arg;
    return *this;
  }
  Type & set__num_loops(
    const int32_t & _arg)
  {
    this->num_loops = _arg;
    return *this;
  }
  Type & set__num_tx(
    const int32_t & _arg)
  {
    this->num_tx = _arg;
    return *this;
  }
  Type & set__num_lvds_lanes(
    const int32_t & _arg)
  {
    this->num_lvds_lanes = _arg;
    return *this;
  }
  Type & set__f_s(
    const float & _arg)
  {
    this->f_s = _arg;
    return *this;
  }
  Type & set__f_c(
    const float & _arg)
  {
    this->f_c = _arg;
    return *this;
  }
  Type & set__bw(
    const float & _arg)
  {
    this->bw = _arg;
    return *this;
  }
  Type & set__pri(
    const float & _arg)
  {
    this->pri = _arg;
    return *this;
  }
  Type & set__t_fr(
    const float & _arg)
  {
    this->t_fr = _arg;
    return *this;
  }
  Type & set__range_max(
    const float & _arg)
  {
    this->range_max = _arg;
    return *this;
  }
  Type & set__range_res(
    const float & _arg)
  {
    this->range_res = _arg;
    return *this;
  }
  Type & set__doppler_max(
    const float & _arg)
  {
    this->doppler_max = _arg;
    return *this;
  }
  Type & set__doppler_res(
    const float & _arg)
  {
    this->doppler_res = _arg;
    return *this;
  }
  Type & set__raw_commands(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->raw_commands = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ti_mmwave_msgs::msg::MMWaveConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const ti_mmwave_msgs::msg::MMWaveConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ti_mmwave_msgs::msg::MMWaveConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ti_mmwave_msgs::msg::MMWaveConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ti_mmwave_msgs::msg::MMWaveConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ti_mmwave_msgs::msg::MMWaveConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ti_mmwave_msgs::msg::MMWaveConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ti_mmwave_msgs::msg::MMWaveConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ti_mmwave_msgs::msg::MMWaveConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ti_mmwave_msgs::msg::MMWaveConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ti_mmwave_msgs__msg__MMWaveConfig
    std::shared_ptr<ti_mmwave_msgs::msg::MMWaveConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ti_mmwave_msgs__msg__MMWaveConfig
    std::shared_ptr<ti_mmwave_msgs::msg::MMWaveConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MMWaveConfig_ & other) const
  {
    if (this->num_adc_samples != other.num_adc_samples) {
      return false;
    }
    if (this->num_loops != other.num_loops) {
      return false;
    }
    if (this->num_tx != other.num_tx) {
      return false;
    }
    if (this->num_lvds_lanes != other.num_lvds_lanes) {
      return false;
    }
    if (this->f_s != other.f_s) {
      return false;
    }
    if (this->f_c != other.f_c) {
      return false;
    }
    if (this->bw != other.bw) {
      return false;
    }
    if (this->pri != other.pri) {
      return false;
    }
    if (this->t_fr != other.t_fr) {
      return false;
    }
    if (this->range_max != other.range_max) {
      return false;
    }
    if (this->range_res != other.range_res) {
      return false;
    }
    if (this->doppler_max != other.doppler_max) {
      return false;
    }
    if (this->doppler_res != other.doppler_res) {
      return false;
    }
    if (this->raw_commands != other.raw_commands) {
      return false;
    }
    return true;
  }
  bool operator!=(const MMWaveConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MMWaveConfig_

// alias to use template instance with default allocator
using MMWaveConfig =
  ti_mmwave_msgs::msg::MMWaveConfig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ti_mmwave_msgs

#endif  // TI_MMWAVE_MSGS__MSG__DETAIL__MM_WAVE_CONFIG__STRUCT_HPP_
