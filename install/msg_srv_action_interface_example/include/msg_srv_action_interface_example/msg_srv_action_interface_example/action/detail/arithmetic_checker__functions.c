// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg_srv_action_interface_example:action/ArithmeticChecker.idl
// generated code does not contain a copyright notice
#include "msg_srv_action_interface_example/action/detail/arithmetic_checker__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__init(msg_srv_action_interface_example__action__ArithmeticChecker_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // goal_sum
  return true;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__fini(msg_srv_action_interface_example__action__ArithmeticChecker_Goal * msg)
{
  if (!msg) {
    return;
  }
  // goal_sum
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__are_equal(const msg_srv_action_interface_example__action__ArithmeticChecker_Goal * lhs, const msg_srv_action_interface_example__action__ArithmeticChecker_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_sum
  if (lhs->goal_sum != rhs->goal_sum) {
    return false;
  }
  return true;
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__copy(
  const msg_srv_action_interface_example__action__ArithmeticChecker_Goal * input,
  msg_srv_action_interface_example__action__ArithmeticChecker_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_sum
  output->goal_sum = input->goal_sum;
  return true;
}

msg_srv_action_interface_example__action__ArithmeticChecker_Goal *
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_Goal * msg = (msg_srv_action_interface_example__action__ArithmeticChecker_Goal *)allocator.allocate(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Goal));
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_srv_action_interface_example__action__ArithmeticChecker_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_Goal * data = NULL;

  if (size) {
    data = (msg_srv_action_interface_example__action__ArithmeticChecker_Goal *)allocator.zero_allocate(size, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_srv_action_interface_example__action__ArithmeticChecker_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_srv_action_interface_example__action__ArithmeticChecker_Goal__fini(&data[i - 1]);
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
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence * array)
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
      msg_srv_action_interface_example__action__ArithmeticChecker_Goal__fini(&array->data[i]);
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

msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence * array = (msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence *)allocator.allocate(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence__are_equal(const msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence * lhs, const msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_srv_action_interface_example__action__ArithmeticChecker_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence__copy(
  const msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence * input,
  msg_srv_action_interface_example__action__ArithmeticChecker_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg_srv_action_interface_example__action__ArithmeticChecker_Goal * data =
      (msg_srv_action_interface_example__action__ArithmeticChecker_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_srv_action_interface_example__action__ArithmeticChecker_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg_srv_action_interface_example__action__ArithmeticChecker_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_srv_action_interface_example__action__ArithmeticChecker_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `all_formula`
#include "rosidl_runtime_c/string_functions.h"

bool
msg_srv_action_interface_example__action__ArithmeticChecker_Result__init(msg_srv_action_interface_example__action__ArithmeticChecker_Result * msg)
{
  if (!msg) {
    return false;
  }
  // all_formula
  if (!rosidl_runtime_c__String__Sequence__init(&msg->all_formula, 0)) {
    msg_srv_action_interface_example__action__ArithmeticChecker_Result__fini(msg);
    return false;
  }
  // total_sum
  return true;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_Result__fini(msg_srv_action_interface_example__action__ArithmeticChecker_Result * msg)
{
  if (!msg) {
    return;
  }
  // all_formula
  rosidl_runtime_c__String__Sequence__fini(&msg->all_formula);
  // total_sum
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_Result__are_equal(const msg_srv_action_interface_example__action__ArithmeticChecker_Result * lhs, const msg_srv_action_interface_example__action__ArithmeticChecker_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // all_formula
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->all_formula), &(rhs->all_formula)))
  {
    return false;
  }
  // total_sum
  if (lhs->total_sum != rhs->total_sum) {
    return false;
  }
  return true;
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_Result__copy(
  const msg_srv_action_interface_example__action__ArithmeticChecker_Result * input,
  msg_srv_action_interface_example__action__ArithmeticChecker_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // all_formula
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->all_formula), &(output->all_formula)))
  {
    return false;
  }
  // total_sum
  output->total_sum = input->total_sum;
  return true;
}

msg_srv_action_interface_example__action__ArithmeticChecker_Result *
msg_srv_action_interface_example__action__ArithmeticChecker_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_Result * msg = (msg_srv_action_interface_example__action__ArithmeticChecker_Result *)allocator.allocate(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Result));
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_Result__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_srv_action_interface_example__action__ArithmeticChecker_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_Result * data = NULL;

  if (size) {
    data = (msg_srv_action_interface_example__action__ArithmeticChecker_Result *)allocator.zero_allocate(size, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_srv_action_interface_example__action__ArithmeticChecker_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_srv_action_interface_example__action__ArithmeticChecker_Result__fini(&data[i - 1]);
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
msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence * array)
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
      msg_srv_action_interface_example__action__ArithmeticChecker_Result__fini(&array->data[i]);
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

msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence * array = (msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence *)allocator.allocate(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence__are_equal(const msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence * lhs, const msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_srv_action_interface_example__action__ArithmeticChecker_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence__copy(
  const msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence * input,
  msg_srv_action_interface_example__action__ArithmeticChecker_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg_srv_action_interface_example__action__ArithmeticChecker_Result * data =
      (msg_srv_action_interface_example__action__ArithmeticChecker_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_srv_action_interface_example__action__ArithmeticChecker_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg_srv_action_interface_example__action__ArithmeticChecker_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_srv_action_interface_example__action__ArithmeticChecker_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `formul`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__init(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // formul
  if (!rosidl_runtime_c__String__Sequence__init(&msg->formul, 0)) {
    msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__fini(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // formul
  rosidl_runtime_c__String__Sequence__fini(&msg->formul);
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__are_equal(const msg_srv_action_interface_example__action__ArithmeticChecker_Feedback * lhs, const msg_srv_action_interface_example__action__ArithmeticChecker_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // formul
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->formul), &(rhs->formul)))
  {
    return false;
  }
  return true;
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__copy(
  const msg_srv_action_interface_example__action__ArithmeticChecker_Feedback * input,
  msg_srv_action_interface_example__action__ArithmeticChecker_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // formul
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->formul), &(output->formul)))
  {
    return false;
  }
  return true;
}

msg_srv_action_interface_example__action__ArithmeticChecker_Feedback *
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_Feedback * msg = (msg_srv_action_interface_example__action__ArithmeticChecker_Feedback *)allocator.allocate(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback));
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_Feedback * data = NULL;

  if (size) {
    data = (msg_srv_action_interface_example__action__ArithmeticChecker_Feedback *)allocator.zero_allocate(size, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__fini(&data[i - 1]);
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
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence * array)
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
      msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__fini(&array->data[i]);
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

msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence * array = (msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence *)allocator.allocate(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence__are_equal(const msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence * lhs, const msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence__copy(
  const msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence * input,
  msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg_srv_action_interface_example__action__ArithmeticChecker_Feedback * data =
      (msg_srv_action_interface_example__action__ArithmeticChecker_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__functions.h"

bool
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__init(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!msg_srv_action_interface_example__action__ArithmeticChecker_Goal__init(&msg->goal)) {
    msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__fini(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  msg_srv_action_interface_example__action__ArithmeticChecker_Goal__fini(&msg->goal);
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__are_equal(const msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request * lhs, const msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!msg_srv_action_interface_example__action__ArithmeticChecker_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__copy(
  const msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request * input,
  msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!msg_srv_action_interface_example__action__ArithmeticChecker_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request *
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request * msg = (msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request *)allocator.allocate(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request));
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request * data = NULL;

  if (size) {
    data = (msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request *)allocator.zero_allocate(size, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__fini(&data[i - 1]);
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
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence * array)
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
      msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__fini(&array->data[i]);
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

msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence * array = (msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence *)allocator.allocate(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence__are_equal(const msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence * lhs, const msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence__copy(
  const msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence * input,
  msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request * data =
      (msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__init(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__fini(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__are_equal(const msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response * lhs, const msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__copy(
  const msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response * input,
  msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response *
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response * msg = (msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response *)allocator.allocate(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response));
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response * data = NULL;

  if (size) {
    data = (msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response *)allocator.zero_allocate(size, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__fini(&data[i - 1]);
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
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence * array)
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
      msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__fini(&array->data[i]);
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

msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence * array = (msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence *)allocator.allocate(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence__are_equal(const msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence * lhs, const msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence__copy(
  const msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence * input,
  msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response * data =
      (msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_srv_action_interface_example__action__ArithmeticChecker_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__init(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__fini(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__are_equal(const msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request * lhs, const msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__copy(
  const msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request * input,
  msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request *
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request * msg = (msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request *)allocator.allocate(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request));
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request * data = NULL;

  if (size) {
    data = (msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request *)allocator.zero_allocate(size, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__fini(&data[i - 1]);
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
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence * array)
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
      msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__fini(&array->data[i]);
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

msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence * array = (msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence *)allocator.allocate(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence__are_equal(const msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence * lhs, const msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence__copy(
  const msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence * input,
  msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request * data =
      (msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__functions.h"

bool
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__init(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!msg_srv_action_interface_example__action__ArithmeticChecker_Result__init(&msg->result)) {
    msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__fini(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  msg_srv_action_interface_example__action__ArithmeticChecker_Result__fini(&msg->result);
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__are_equal(const msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response * lhs, const msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!msg_srv_action_interface_example__action__ArithmeticChecker_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__copy(
  const msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response * input,
  msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!msg_srv_action_interface_example__action__ArithmeticChecker_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response *
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response * msg = (msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response *)allocator.allocate(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response));
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response * data = NULL;

  if (size) {
    data = (msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response *)allocator.zero_allocate(size, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__fini(&data[i - 1]);
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
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence * array)
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
      msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__fini(&array->data[i]);
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

msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence * array = (msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence *)allocator.allocate(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence__are_equal(const msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence * lhs, const msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence__copy(
  const msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence * input,
  msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response * data =
      (msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_srv_action_interface_example__action__ArithmeticChecker_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "msg_srv_action_interface_example/action/detail/arithmetic_checker__functions.h"

bool
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__init(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__init(&msg->feedback)) {
    msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__fini(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__fini(&msg->feedback);
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__are_equal(const msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage * lhs, const msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__copy(
  const msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage * input,
  msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!msg_srv_action_interface_example__action__ArithmeticChecker_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage *
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage * msg = (msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage *)allocator.allocate(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage));
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence__init(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage * data = NULL;

  if (size) {
    data = (msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage *)allocator.zero_allocate(size, sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__fini(&data[i - 1]);
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
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence__fini(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence * array)
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
      msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__fini(&array->data[i]);
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

msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence *
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence * array = (msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence *)allocator.allocate(sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence__destroy(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence__are_equal(const msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence * lhs, const msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence__copy(
  const msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence * input,
  msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage * data =
      (msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_srv_action_interface_example__action__ArithmeticChecker_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
