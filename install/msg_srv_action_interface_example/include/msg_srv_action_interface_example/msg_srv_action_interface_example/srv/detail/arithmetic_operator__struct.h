// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_srv_action_interface_example:srv/ArithmeticOperator.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACTION_INTERFACE_EXAMPLE__SRV__DETAIL__ARITHMETIC_OPERATOR__STRUCT_H_
#define MSG_SRV_ACTION_INTERFACE_EXAMPLE__SRV__DETAIL__ARITHMETIC_OPERATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PLUS'.
enum
{
  msg_srv_action_interface_example__srv__ArithmeticOperator_Request__PLUS = 1
};

/// Constant 'MINUS'.
enum
{
  msg_srv_action_interface_example__srv__ArithmeticOperator_Request__MINUS = 2
};

/// Constant 'MULTIPLY'.
enum
{
  msg_srv_action_interface_example__srv__ArithmeticOperator_Request__MULTIPLY = 3
};

/// Constant 'DIVISION'.
enum
{
  msg_srv_action_interface_example__srv__ArithmeticOperator_Request__DIVISION = 4
};

/// Struct defined in srv/ArithmeticOperator in the package msg_srv_action_interface_example.
typedef struct msg_srv_action_interface_example__srv__ArithmeticOperator_Request
{
  /// Request
  int8_t arithmetic_operator;
} msg_srv_action_interface_example__srv__ArithmeticOperator_Request;

// Struct for a sequence of msg_srv_action_interface_example__srv__ArithmeticOperator_Request.
typedef struct msg_srv_action_interface_example__srv__ArithmeticOperator_Request__Sequence
{
  msg_srv_action_interface_example__srv__ArithmeticOperator_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_example__srv__ArithmeticOperator_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ArithmeticOperator in the package msg_srv_action_interface_example.
typedef struct msg_srv_action_interface_example__srv__ArithmeticOperator_Response
{
  float arithmetic_result;
} msg_srv_action_interface_example__srv__ArithmeticOperator_Response;

// Struct for a sequence of msg_srv_action_interface_example__srv__ArithmeticOperator_Response.
typedef struct msg_srv_action_interface_example__srv__ArithmeticOperator_Response__Sequence
{
  msg_srv_action_interface_example__srv__ArithmeticOperator_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_example__srv__ArithmeticOperator_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_SRV_ACTION_INTERFACE_EXAMPLE__SRV__DETAIL__ARITHMETIC_OPERATOR__STRUCT_H_
