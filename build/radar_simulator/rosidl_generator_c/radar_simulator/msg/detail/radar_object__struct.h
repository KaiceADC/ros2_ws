// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_simulator:msg/RadarObject.idl
// generated code does not contain a copyright notice

#ifndef RADAR_SIMULATOR__MSG__DETAIL__RADAR_OBJECT__STRUCT_H_
#define RADAR_SIMULATOR__MSG__DETAIL__RADAR_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RadarObject in the package radar_simulator.
/**
  * Custom message for radar object detection
 */
typedef struct radar_simulator__msg__RadarObject
{
  /// Distance in meters
  float distance;
  /// Velocity in m/s (positive = away, negative = toward)
  float velocity;
  /// Angle in degrees (-90 to +90)
  float angle;
  /// Radar Cross Section in dB
  float rcs;
  /// Object identifier
  int32_t object_id;
} radar_simulator__msg__RadarObject;

// Struct for a sequence of radar_simulator__msg__RadarObject.
typedef struct radar_simulator__msg__RadarObject__Sequence
{
  radar_simulator__msg__RadarObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_simulator__msg__RadarObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_SIMULATOR__MSG__DETAIL__RADAR_OBJECT__STRUCT_H_
