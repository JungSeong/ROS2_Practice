// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_srv_action_interface_example:msg/ArithmeticArgument.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACTION_INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__BUILDER_HPP_
#define MSG_SRV_ACTION_INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg_srv_action_interface_example/msg/detail/arithmetic_argument__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg_srv_action_interface_example
{

namespace msg
{

namespace builder
{

class Init_ArithmeticArgument_argument_b
{
public:
  explicit Init_ArithmeticArgument_argument_b(::msg_srv_action_interface_example::msg::ArithmeticArgument & msg)
  : msg_(msg)
  {}
  ::msg_srv_action_interface_example::msg::ArithmeticArgument argument_b(::msg_srv_action_interface_example::msg::ArithmeticArgument::_argument_b_type arg)
  {
    msg_.argument_b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_action_interface_example::msg::ArithmeticArgument msg_;
};

class Init_ArithmeticArgument_argument_a
{
public:
  explicit Init_ArithmeticArgument_argument_a(::msg_srv_action_interface_example::msg::ArithmeticArgument & msg)
  : msg_(msg)
  {}
  Init_ArithmeticArgument_argument_b argument_a(::msg_srv_action_interface_example::msg::ArithmeticArgument::_argument_a_type arg)
  {
    msg_.argument_a = std::move(arg);
    return Init_ArithmeticArgument_argument_b(msg_);
  }

private:
  ::msg_srv_action_interface_example::msg::ArithmeticArgument msg_;
};

class Init_ArithmeticArgument_stamp
{
public:
  Init_ArithmeticArgument_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArithmeticArgument_argument_a stamp(::msg_srv_action_interface_example::msg::ArithmeticArgument::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ArithmeticArgument_argument_a(msg_);
  }

private:
  ::msg_srv_action_interface_example::msg::ArithmeticArgument msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_action_interface_example::msg::ArithmeticArgument>()
{
  return msg_srv_action_interface_example::msg::builder::Init_ArithmeticArgument_stamp();
}

}  // namespace msg_srv_action_interface_example

#endif  // MSG_SRV_ACTION_INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__BUILDER_HPP_
