// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ti_mmwave_msgs:msg/MMWaveConfig.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_MSGS__MSG__DETAIL__MM_WAVE_CONFIG__STRUCT_H_
#define TI_MMWAVE_MSGS__MSG__DETAIL__MM_WAVE_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'raw_commands'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MMWaveConfig in the package ti_mmwave_msgs.
typedef struct ti_mmwave_msgs__msg__MMWaveConfig
{
  int32_t num_adc_samples;
  int32_t num_loops;
  int32_t num_tx;
  int32_t num_lvds_lanes;
  float f_s;
  float f_c;
  float bw;
  float pri;
  float t_fr;
  float range_max;
  float range_res;
  float doppler_max;
  float doppler_res;
  rosidl_runtime_c__String raw_commands;
} ti_mmwave_msgs__msg__MMWaveConfig;

// Struct for a sequence of ti_mmwave_msgs__msg__MMWaveConfig.
typedef struct ti_mmwave_msgs__msg__MMWaveConfig__Sequence
{
  ti_mmwave_msgs__msg__MMWaveConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ti_mmwave_msgs__msg__MMWaveConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TI_MMWAVE_MSGS__MSG__DETAIL__MM_WAVE_CONFIG__STRUCT_H_
