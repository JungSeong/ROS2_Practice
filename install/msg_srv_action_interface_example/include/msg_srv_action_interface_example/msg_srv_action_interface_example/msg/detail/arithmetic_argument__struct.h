// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_srv_action_interface_example:msg/ArithmeticArgument.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACTION_INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__STRUCT_H_
#define MSG_SRV_ACTION_INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/ArithmeticArgument in the package msg_srv_action_interface_example.
/**
  * Messages
 */
typedef struct msg_srv_action_interface_example__msg__ArithmeticArgument
{
  builtin_interfaces__msg__Time stamp;
  float argument_a;
  float argument_b;
} msg_srv_action_interface_example__msg__ArithmeticArgument;

// Struct for a sequence of msg_srv_action_interface_example__msg__ArithmeticArgument.
typedef struct msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence
{
  msg_srv_action_interface_example__msg__ArithmeticArgument * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_example__msg__ArithmeticArgument__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_SRV_ACTION_INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__STRUCT_H_
