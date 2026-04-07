// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pubsub2_interfaces:msg/FiltroSensor.idl
// generated code does not contain a copyright notice
#include "pubsub2_interfaces/msg/detail/filtro_sensor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
pubsub2_interfaces__msg__FiltroSensor__init(pubsub2_interfaces__msg__FiltroSensor * msg)
{
  if (!msg) {
    return false;
  }
  // sensor_value
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    pubsub2_interfaces__msg__FiltroSensor__fini(msg);
    return false;
  }
  return true;
}

void
pubsub2_interfaces__msg__FiltroSensor__fini(pubsub2_interfaces__msg__FiltroSensor * msg)
{
  if (!msg) {
    return;
  }
  // sensor_value
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
pubsub2_interfaces__msg__FiltroSensor__are_equal(const pubsub2_interfaces__msg__FiltroSensor * lhs, const pubsub2_interfaces__msg__FiltroSensor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sensor_value
  if (lhs->sensor_value != rhs->sensor_value) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
pubsub2_interfaces__msg__FiltroSensor__copy(
  const pubsub2_interfaces__msg__FiltroSensor * input,
  pubsub2_interfaces__msg__FiltroSensor * output)
{
  if (!input || !output) {
    return false;
  }
  // sensor_value
  output->sensor_value = input->sensor_value;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

pubsub2_interfaces__msg__FiltroSensor *
pubsub2_interfaces__msg__FiltroSensor__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pubsub2_interfaces__msg__FiltroSensor * msg = (pubsub2_interfaces__msg__FiltroSensor *)allocator.allocate(sizeof(pubsub2_interfaces__msg__FiltroSensor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pubsub2_interfaces__msg__FiltroSensor));
  bool success = pubsub2_interfaces__msg__FiltroSensor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pubsub2_interfaces__msg__FiltroSensor__destroy(pubsub2_interfaces__msg__FiltroSensor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pubsub2_interfaces__msg__FiltroSensor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pubsub2_interfaces__msg__FiltroSensor__Sequence__init(pubsub2_interfaces__msg__FiltroSensor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pubsub2_interfaces__msg__FiltroSensor * data = NULL;

  if (size) {
    data = (pubsub2_interfaces__msg__FiltroSensor *)allocator.zero_allocate(size, sizeof(pubsub2_interfaces__msg__FiltroSensor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pubsub2_interfaces__msg__FiltroSensor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pubsub2_interfaces__msg__FiltroSensor__fini(&data[i - 1]);
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
pubsub2_interfaces__msg__FiltroSensor__Sequence__fini(pubsub2_interfaces__msg__FiltroSensor__Sequence * array)
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
      pubsub2_interfaces__msg__FiltroSensor__fini(&array->data[i]);
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

pubsub2_interfaces__msg__FiltroSensor__Sequence *
pubsub2_interfaces__msg__FiltroSensor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pubsub2_interfaces__msg__FiltroSensor__Sequence * array = (pubsub2_interfaces__msg__FiltroSensor__Sequence *)allocator.allocate(sizeof(pubsub2_interfaces__msg__FiltroSensor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pubsub2_interfaces__msg__FiltroSensor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pubsub2_interfaces__msg__FiltroSensor__Sequence__destroy(pubsub2_interfaces__msg__FiltroSensor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pubsub2_interfaces__msg__FiltroSensor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pubsub2_interfaces__msg__FiltroSensor__Sequence__are_equal(const pubsub2_interfaces__msg__FiltroSensor__Sequence * lhs, const pubsub2_interfaces__msg__FiltroSensor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pubsub2_interfaces__msg__FiltroSensor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pubsub2_interfaces__msg__FiltroSensor__Sequence__copy(
  const pubsub2_interfaces__msg__FiltroSensor__Sequence * input,
  pubsub2_interfaces__msg__FiltroSensor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pubsub2_interfaces__msg__FiltroSensor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pubsub2_interfaces__msg__FiltroSensor * data =
      (pubsub2_interfaces__msg__FiltroSensor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pubsub2_interfaces__msg__FiltroSensor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pubsub2_interfaces__msg__FiltroSensor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pubsub2_interfaces__msg__FiltroSensor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
