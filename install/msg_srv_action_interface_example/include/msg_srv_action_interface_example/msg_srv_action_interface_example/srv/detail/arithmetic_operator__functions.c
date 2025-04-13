// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg_srv_action_interface_example:srv/ArithmeticOperator.idl
// generated code does not contain a copyright notice
#include "msg_srv_action_interface_example/srv/detail/arithmetic_operator__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
msg_srv_action_interface_example__srv__ArithmeticOperator_Request__init(msg_srv_action_interface_example__srv__ArithmeticOperator_Request * msg)
{
  if (!msg) {
    return false;
  }
  // arithmetic_operator
  return true;
}

void
msg_srv_action_interface_example__srv__ArithmeticOperator_Request__fini(msg_srv_action_interface_example__srv__ArithmeticOperator_Request * msg)
{
  if (!msg) {
    return;
  }
  // arithmetic_operator
}

bool
msg_srv_action_interface_example__srv__ArithmeticOperator_Request__are_equal(const msg_srv_action_interface_example__srv__ArithmeticOperator_Request * lhs, const msg_srv_action_interface_example__srv__ArithmeticOperator_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // arithmetic_operator
  if (lhs->arithmetic_operator != rhs->arithmetic_operator) {
    return false;
  }
  return true;
}

bool
msg_srv_action_interface_example__srv__ArithmeticOperator_Request__copy(
  const msg_srv_action_interface_example__srv__ArithmeticOperator_Request * input,
  msg_srv_action_interface_example__srv__ArithmeticOperator_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // arithmetic_operator
  output->arithmetic_operator = input->arithmetic_operator;
  return true;
}

msg_srv_action_interface_example__srv__ArithmeticOperator_Request *
msg_srv_action_interface_example__srv__ArithmeticOperator_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__srv__ArithmeticOperator_Request * msg = (msg_srv_action_interface_example__srv__ArithmeticOperator_Request *)allocator.allocate(sizeof(msg_srv_action_interface_example__srv__ArithmeticOperator_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_srv_action_interface_example__srv__ArithmeticOperator_Request));
  bool success = msg_srv_action_interface_example__srv__ArithmeticOperator_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_srv_action_interface_example__srv__ArithmeticOperator_Request__destroy(msg_srv_action_interface_example__srv__ArithmeticOperator_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_srv_action_interface_example__srv__ArithmeticOperator_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_srv_action_interface_example__srv__ArithmeticOperator_Request__Sequence__init(msg_srv_action_interface_example__srv__ArithmeticOperator_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__srv__ArithmeticOperator_Request * data = NULL;

  if (size) {
    data = (msg_srv_action_interface_example__srv__ArithmeticOperator_Request *)allocator.zero_allocate(size, sizeof(msg_srv_action_interface_example__srv__ArithmeticOperator_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_srv_action_interface_example__srv__ArithmeticOperator_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_srv_action_interface_example__srv__ArithmeticOperator_Request__fini(&data[i - 1]);
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
msg_srv_action_interface_example__srv__ArithmeticOperator_Request__Sequence__fini(msg_srv_action_interface_example__srv__ArithmeticOperator_Request__Sequence * array)
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
      msg_srv_action_interface_example__srv__ArithmeticOperator_Request__fini(&array->data[i]);
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

msg_srv_action_interface_example__srv__ArithmeticOperator_Request__Sequence *
msg_srv_action_interface_example__srv__ArithmeticOperator_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__srv__ArithmeticOperator_Request__Sequence * array = (msg_srv_action_interface_example__srv__ArithmeticOperator_Request__Sequence *)allocator.allocate(sizeof(msg_srv_action_interface_example__srv__ArithmeticOperator_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_srv_action_interface_example__srv__ArithmeticOperator_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_srv_action_interface_example__srv__ArithmeticOperator_Request__Sequence__destroy(msg_srv_action_interface_example__srv__ArithmeticOperator_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_srv_action_interface_example__srv__ArithmeticOperator_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_srv_action_interface_example__srv__ArithmeticOperator_Request__Sequence__are_equal(const msg_srv_action_interface_example__srv__ArithmeticOperator_Request__Sequence * lhs, const msg_srv_action_interface_example__srv__ArithmeticOperator_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_srv_action_interface_example__srv__ArithmeticOperator_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_srv_action_interface_example__srv__ArithmeticOperator_Request__Sequence__copy(
  const msg_srv_action_interface_example__srv__ArithmeticOperator_Request__Sequence * input,
  msg_srv_action_interface_example__srv__ArithmeticOperator_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_srv_action_interface_example__srv__ArithmeticOperator_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg_srv_action_interface_example__srv__ArithmeticOperator_Request * data =
      (msg_srv_action_interface_example__srv__ArithmeticOperator_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_srv_action_interface_example__srv__ArithmeticOperator_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg_srv_action_interface_example__srv__ArithmeticOperator_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_srv_action_interface_example__srv__ArithmeticOperator_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
msg_srv_action_interface_example__srv__ArithmeticOperator_Response__init(msg_srv_action_interface_example__srv__ArithmeticOperator_Response * msg)
{
  if (!msg) {
    return false;
  }
  // arithmetic_result
  return true;
}

void
msg_srv_action_interface_example__srv__ArithmeticOperator_Response__fini(msg_srv_action_interface_example__srv__ArithmeticOperator_Response * msg)
{
  if (!msg) {
    return;
  }
  // arithmetic_result
}

bool
msg_srv_action_interface_example__srv__ArithmeticOperator_Response__are_equal(const msg_srv_action_interface_example__srv__ArithmeticOperator_Response * lhs, const msg_srv_action_interface_example__srv__ArithmeticOperator_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // arithmetic_result
  if (lhs->arithmetic_result != rhs->arithmetic_result) {
    return false;
  }
  return true;
}

bool
msg_srv_action_interface_example__srv__ArithmeticOperator_Response__copy(
  const msg_srv_action_interface_example__srv__ArithmeticOperator_Response * input,
  msg_srv_action_interface_example__srv__ArithmeticOperator_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // arithmetic_result
  output->arithmetic_result = input->arithmetic_result;
  return true;
}

msg_srv_action_interface_example__srv__ArithmeticOperator_Response *
msg_srv_action_interface_example__srv__ArithmeticOperator_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__srv__ArithmeticOperator_Response * msg = (msg_srv_action_interface_example__srv__ArithmeticOperator_Response *)allocator.allocate(sizeof(msg_srv_action_interface_example__srv__ArithmeticOperator_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_srv_action_interface_example__srv__ArithmeticOperator_Response));
  bool success = msg_srv_action_interface_example__srv__ArithmeticOperator_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_srv_action_interface_example__srv__ArithmeticOperator_Response__destroy(msg_srv_action_interface_example__srv__ArithmeticOperator_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_srv_action_interface_example__srv__ArithmeticOperator_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_srv_action_interface_example__srv__ArithmeticOperator_Response__Sequence__init(msg_srv_action_interface_example__srv__ArithmeticOperator_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__srv__ArithmeticOperator_Response * data = NULL;

  if (size) {
    data = (msg_srv_action_interface_example__srv__ArithmeticOperator_Response *)allocator.zero_allocate(size, sizeof(msg_srv_action_interface_example__srv__ArithmeticOperator_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_srv_action_interface_example__srv__ArithmeticOperator_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_srv_action_interface_example__srv__ArithmeticOperator_Response__fini(&data[i - 1]);
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
msg_srv_action_interface_example__srv__ArithmeticOperator_Response__Sequence__fini(msg_srv_action_interface_example__srv__ArithmeticOperator_Response__Sequence * array)
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
      msg_srv_action_interface_example__srv__ArithmeticOperator_Response__fini(&array->data[i]);
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

msg_srv_action_interface_example__srv__ArithmeticOperator_Response__Sequence *
msg_srv_action_interface_example__srv__ArithmeticOperator_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_srv_action_interface_example__srv__ArithmeticOperator_Response__Sequence * array = (msg_srv_action_interface_example__srv__ArithmeticOperator_Response__Sequence *)allocator.allocate(sizeof(msg_srv_action_interface_example__srv__ArithmeticOperator_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_srv_action_interface_example__srv__ArithmeticOperator_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_srv_action_interface_example__srv__ArithmeticOperator_Response__Sequence__destroy(msg_srv_action_interface_example__srv__ArithmeticOperator_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_srv_action_interface_example__srv__ArithmeticOperator_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_srv_action_interface_example__srv__ArithmeticOperator_Response__Sequence__are_equal(const msg_srv_action_interface_example__srv__ArithmeticOperator_Response__Sequence * lhs, const msg_srv_action_interface_example__srv__ArithmeticOperator_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_srv_action_interface_example__srv__ArithmeticOperator_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_srv_action_interface_example__srv__ArithmeticOperator_Response__Sequence__copy(
  const msg_srv_action_interface_example__srv__ArithmeticOperator_Response__Sequence * input,
  msg_srv_action_interface_example__srv__ArithmeticOperator_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_srv_action_interface_example__srv__ArithmeticOperator_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg_srv_action_interface_example__srv__ArithmeticOperator_Response * data =
      (msg_srv_action_interface_example__srv__ArithmeticOperator_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_srv_action_interface_example__srv__ArithmeticOperator_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg_srv_action_interface_example__srv__ArithmeticOperator_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_srv_action_interface_example__srv__ArithmeticOperator_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
