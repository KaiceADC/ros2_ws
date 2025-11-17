// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_simulator:msg/RadarObject.idl
// generated code does not contain a copyright notice
#include "radar_simulator/msg/detail/radar_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
radar_simulator__msg__RadarObject__init(radar_simulator__msg__RadarObject * msg)
{
  if (!msg) {
    return false;
  }
  // distance
  // velocity
  // angle
  // rcs
  // object_id
  return true;
}

void
radar_simulator__msg__RadarObject__fini(radar_simulator__msg__RadarObject * msg)
{
  if (!msg) {
    return;
  }
  // distance
  // velocity
  // angle
  // rcs
  // object_id
}

bool
radar_simulator__msg__RadarObject__are_equal(const radar_simulator__msg__RadarObject * lhs, const radar_simulator__msg__RadarObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // rcs
  if (lhs->rcs != rhs->rcs) {
    return false;
  }
  // object_id
  if (lhs->object_id != rhs->object_id) {
    return false;
  }
  return true;
}

bool
radar_simulator__msg__RadarObject__copy(
  const radar_simulator__msg__RadarObject * input,
  radar_simulator__msg__RadarObject * output)
{
  if (!input || !output) {
    return false;
  }
  // distance
  output->distance = input->distance;
  // velocity
  output->velocity = input->velocity;
  // angle
  output->angle = input->angle;
  // rcs
  output->rcs = input->rcs;
  // object_id
  output->object_id = input->object_id;
  return true;
}

radar_simulator__msg__RadarObject *
radar_simulator__msg__RadarObject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_simulator__msg__RadarObject * msg = (radar_simulator__msg__RadarObject *)allocator.allocate(sizeof(radar_simulator__msg__RadarObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_simulator__msg__RadarObject));
  bool success = radar_simulator__msg__RadarObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_simulator__msg__RadarObject__destroy(radar_simulator__msg__RadarObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_simulator__msg__RadarObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_simulator__msg__RadarObject__Sequence__init(radar_simulator__msg__RadarObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_simulator__msg__RadarObject * data = NULL;

  if (size) {
    data = (radar_simulator__msg__RadarObject *)allocator.zero_allocate(size, sizeof(radar_simulator__msg__RadarObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_simulator__msg__RadarObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_simulator__msg__RadarObject__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
radar_simulator__msg__RadarObject__Sequence__fini(radar_simulator__msg__RadarObject__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      radar_simulator__msg__RadarObject__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

radar_simulator__msg__RadarObject__Sequence *
radar_simulator__msg__RadarObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_simulator__msg__RadarObject__Sequence * array = (radar_simulator__msg__RadarObject__Sequence *)allocator.allocate(sizeof(radar_simulator__msg__RadarObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_simulator__msg__RadarObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_simulator__msg__RadarObject__Sequence__destroy(radar_simulator__msg__RadarObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_simulator__msg__RadarObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_simulator__msg__RadarObject__Sequence__are_equal(const radar_simulator__msg__RadarObject__Sequence * lhs, const radar_simulator__msg__RadarObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_simulator__msg__RadarObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_simulator__msg__RadarObject__Sequence__copy(
  const radar_simulator__msg__RadarObject__Sequence * input,
  radar_simulator__msg__RadarObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_simulator__msg__RadarObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_simulator__msg__RadarObject * data =
      (radar_simulator__msg__RadarObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_simulator__msg__RadarObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_simulator__msg__RadarObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_simulator__msg__RadarObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
