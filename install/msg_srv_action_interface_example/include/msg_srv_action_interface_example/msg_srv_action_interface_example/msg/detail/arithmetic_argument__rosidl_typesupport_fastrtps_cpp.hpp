// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from msg_srv_action_interface_example:msg/ArithmeticArgument.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACTION_INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MSG_SRV_ACTION_INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "msg_srv_action_interface_example/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "msg_srv_action_interface_example/msg/detail/arithmetic_argument__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace msg_srv_action_interface_example
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_serialize(
  const msg_srv_action_interface_example::msg::ArithmeticArgument & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_example
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msg_srv_action_interface_example::msg::ArithmeticArgument & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_example
get_serialized_size(
  const msg_srv_action_interface_example::msg::ArithmeticArgument & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_example
max_serialized_size_ArithmeticArgument(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace msg_srv_action_interface_example

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_example
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_srv_action_interface_example, msg, ArithmeticArgument)();

#ifdef __cplusplus
}
#endif

#endif  // MSG_SRV_ACTION_INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
