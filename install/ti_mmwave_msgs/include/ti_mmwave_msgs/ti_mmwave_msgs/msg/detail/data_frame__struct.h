// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ti_mmwave_msgs:msg/DataFrame.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_MSGS__MSG__DETAIL__DATA_FRAME__STRUCT_H_
#define TI_MMWAVE_MSGS__MSG__DETAIL__DATA_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/DataFrame in the package ti_mmwave_msgs.
typedef struct ti_mmwave_msgs__msg__DataFrame
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__int16__Sequence data;
} ti_mmwave_msgs__msg__DataFrame;

// Struct for a sequence of ti_mmwave_msgs__msg__DataFrame.
typedef struct ti_mmwave_msgs__msg__DataFrame__Sequence
{
  ti_mmwave_msgs__msg__DataFrame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ti_mmwave_msgs__msg__DataFrame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TI_MMWAVE_MSGS__MSG__DETAIL__DATA_FRAME__STRUCT_H_
