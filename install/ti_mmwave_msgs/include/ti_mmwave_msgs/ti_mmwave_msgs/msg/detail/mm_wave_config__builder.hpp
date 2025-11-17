// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ti_mmwave_msgs:msg/MMWaveConfig.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_MSGS__MSG__DETAIL__MM_WAVE_CONFIG__BUILDER_HPP_
#define TI_MMWAVE_MSGS__MSG__DETAIL__MM_WAVE_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ti_mmwave_msgs/msg/detail/mm_wave_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ti_mmwave_msgs
{

namespace msg
{

namespace builder
{

class Init_MMWaveConfig_raw_commands
{
public:
  explicit Init_MMWaveConfig_raw_commands(::ti_mmwave_msgs::msg::MMWaveConfig & msg)
  : msg_(msg)
  {}
  ::ti_mmwave_msgs::msg::MMWaveConfig raw_commands(::ti_mmwave_msgs::msg::MMWaveConfig::_raw_commands_type arg)
  {
    msg_.raw_commands = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ti_mmwave_msgs::msg::MMWaveConfig msg_;
};

class Init_MMWaveConfig_doppler_res
{
public:
  explicit Init_MMWaveConfig_doppler_res(::ti_mmwave_msgs::msg::MMWaveConfig & msg)
  : msg_(msg)
  {}
  Init_MMWaveConfig_raw_commands doppler_res(::ti_mmwave_msgs::msg::MMWaveConfig::_doppler_res_type arg)
  {
    msg_.doppler_res = std::move(arg);
    return Init_MMWaveConfig_raw_commands(msg_);
  }

private:
  ::ti_mmwave_msgs::msg::MMWaveConfig msg_;
};

class Init_MMWaveConfig_doppler_max
{
public:
  explicit Init_MMWaveConfig_doppler_max(::ti_mmwave_msgs::msg::MMWaveConfig & msg)
  : msg_(msg)
  {}
  Init_MMWaveConfig_doppler_res doppler_max(::ti_mmwave_msgs::msg::MMWaveConfig::_doppler_max_type arg)
  {
    msg_.doppler_max = std::move(arg);
    return Init_MMWaveConfig_doppler_res(msg_);
  }

private:
  ::ti_mmwave_msgs::msg::MMWaveConfig msg_;
};

class Init_MMWaveConfig_range_res
{
public:
  explicit Init_MMWaveConfig_range_res(::ti_mmwave_msgs::msg::MMWaveConfig & msg)
  : msg_(msg)
  {}
  Init_MMWaveConfig_doppler_max range_res(::ti_mmwave_msgs::msg::MMWaveConfig::_range_res_type arg)
  {
    msg_.range_res = std::move(arg);
    return Init_MMWaveConfig_doppler_max(msg_);
  }

private:
  ::ti_mmwave_msgs::msg::MMWaveConfig msg_;
};

class Init_MMWaveConfig_range_max
{
public:
  explicit Init_MMWaveConfig_range_max(::ti_mmwave_msgs::msg::MMWaveConfig & msg)
  : msg_(msg)
  {}
  Init_MMWaveConfig_range_res range_max(::ti_mmwave_msgs::msg::MMWaveConfig::_range_max_type arg)
  {
    msg_.range_max = std::move(arg);
    return Init_MMWaveConfig_range_res(msg_);
  }

private:
  ::ti_mmwave_msgs::msg::MMWaveConfig msg_;
};

class Init_MMWaveConfig_t_fr
{
public:
  explicit Init_MMWaveConfig_t_fr(::ti_mmwave_msgs::msg::MMWaveConfig & msg)
  : msg_(msg)
  {}
  Init_MMWaveConfig_range_max t_fr(::ti_mmwave_msgs::msg::MMWaveConfig::_t_fr_type arg)
  {
    msg_.t_fr = std::move(arg);
    return Init_MMWaveConfig_range_max(msg_);
  }

private:
  ::ti_mmwave_msgs::msg::MMWaveConfig msg_;
};

class Init_MMWaveConfig_pri
{
public:
  explicit Init_MMWaveConfig_pri(::ti_mmwave_msgs::msg::MMWaveConfig & msg)
  : msg_(msg)
  {}
  Init_MMWaveConfig_t_fr pri(::ti_mmwave_msgs::msg::MMWaveConfig::_pri_type arg)
  {
    msg_.pri = std::move(arg);
    return Init_MMWaveConfig_t_fr(msg_);
  }

private:
  ::ti_mmwave_msgs::msg::MMWaveConfig msg_;
};

class Init_MMWaveConfig_bw
{
public:
  explicit Init_MMWaveConfig_bw(::ti_mmwave_msgs::msg::MMWaveConfig & msg)
  : msg_(msg)
  {}
  Init_MMWaveConfig_pri bw(::ti_mmwave_msgs::msg::MMWaveConfig::_bw_type arg)
  {
    msg_.bw = std::move(arg);
    return Init_MMWaveConfig_pri(msg_);
  }

private:
  ::ti_mmwave_msgs::msg::MMWaveConfig msg_;
};

class Init_MMWaveConfig_f_c
{
public:
  explicit Init_MMWaveConfig_f_c(::ti_mmwave_msgs::msg::MMWaveConfig & msg)
  : msg_(msg)
  {}
  Init_MMWaveConfig_bw f_c(::ti_mmwave_msgs::msg::MMWaveConfig::_f_c_type arg)
  {
    msg_.f_c = std::move(arg);
    return Init_MMWaveConfig_bw(msg_);
  }

private:
  ::ti_mmwave_msgs::msg::MMWaveConfig msg_;
};

class Init_MMWaveConfig_f_s
{
public:
  explicit Init_MMWaveConfig_f_s(::ti_mmwave_msgs::msg::MMWaveConfig & msg)
  : msg_(msg)
  {}
  Init_MMWaveConfig_f_c f_s(::ti_mmwave_msgs::msg::MMWaveConfig::_f_s_type arg)
  {
    msg_.f_s = std::move(arg);
    return Init_MMWaveConfig_f_c(msg_);
  }

private:
  ::ti_mmwave_msgs::msg::MMWaveConfig msg_;
};

class Init_MMWaveConfig_num_lvds_lanes
{
public:
  explicit Init_MMWaveConfig_num_lvds_lanes(::ti_mmwave_msgs::msg::MMWaveConfig & msg)
  : msg_(msg)
  {}
  Init_MMWaveConfig_f_s num_lvds_lanes(::ti_mmwave_msgs::msg::MMWaveConfig::_num_lvds_lanes_type arg)
  {
    msg_.num_lvds_lanes = std::move(arg);
    return Init_MMWaveConfig_f_s(msg_);
  }

private:
  ::ti_mmwave_msgs::msg::MMWaveConfig msg_;
};

class Init_MMWaveConfig_num_tx
{
public:
  explicit Init_MMWaveConfig_num_tx(::ti_mmwave_msgs::msg::MMWaveConfig & msg)
  : msg_(msg)
  {}
  Init_MMWaveConfig_num_lvds_lanes num_tx(::ti_mmwave_msgs::msg::MMWaveConfig::_num_tx_type arg)
  {
    msg_.num_tx = std::move(arg);
    return Init_MMWaveConfig_num_lvds_lanes(msg_);
  }

private:
  ::ti_mmwave_msgs::msg::MMWaveConfig msg_;
};

class Init_MMWaveConfig_num_loops
{
public:
  explicit Init_MMWaveConfig_num_loops(::ti_mmwave_msgs::msg::MMWaveConfig & msg)
  : msg_(msg)
  {}
  Init_MMWaveConfig_num_tx num_loops(::ti_mmwave_msgs::msg::MMWaveConfig::_num_loops_type arg)
  {
    msg_.num_loops = std::move(arg);
    return Init_MMWaveConfig_num_tx(msg_);
  }

private:
  ::ti_mmwave_msgs::msg::MMWaveConfig msg_;
};

class Init_MMWaveConfig_num_adc_samples
{
public:
  Init_MMWaveConfig_num_adc_samples()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MMWaveConfig_num_loops num_adc_samples(::ti_mmwave_msgs::msg::MMWaveConfig::_num_adc_samples_type arg)
  {
    msg_.num_adc_samples = std::move(arg);
    return Init_MMWaveConfig_num_loops(msg_);
  }

private:
  ::ti_mmwave_msgs::msg::MMWaveConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ti_mmwave_msgs::msg::MMWaveConfig>()
{
  return ti_mmwave_msgs::msg::builder::Init_MMWaveConfig_num_adc_samples();
}

}  // namespace ti_mmwave_msgs

#endif  // TI_MMWAVE_MSGS__MSG__DETAIL__MM_WAVE_CONFIG__BUILDER_HPP_
