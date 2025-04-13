// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_srv_action_interface_example:srv/ArithmeticOperator.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACTION_INTERFACE_EXAMPLE__SRV__DETAIL__ARITHMETIC_OPERATOR__BUILDER_HPP_
#define MSG_SRV_ACTION_INTERFACE_EXAMPLE__SRV__DETAIL__ARITHMETIC_OPERATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg_srv_action_interface_example/srv/detail/arithmetic_operator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg_srv_action_interface_example
{

namespace srv
{

namespace builder
{

class Init_ArithmeticOperator_Request_arithmetic_operator
{
public:
  Init_ArithmeticOperator_Request_arithmetic_operator()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_srv_action_interface_example::srv::ArithmeticOperator_Request arithmetic_operator(::msg_srv_action_interface_example::srv::ArithmeticOperator_Request::_arithmetic_operator_type arg)
  {
    msg_.arithmetic_operator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_action_interface_example::srv::ArithmeticOperator_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_action_interface_example::srv::ArithmeticOperator_Request>()
{
  return msg_srv_action_interface_example::srv::builder::Init_ArithmeticOperator_Request_arithmetic_operator();
}

}  // namespace msg_srv_action_interface_example


namespace msg_srv_action_interface_example
{

namespace srv
{

namespace builder
{

class Init_ArithmeticOperator_Response_arithmetic_result
{
public:
  Init_ArithmeticOperator_Response_arithmetic_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_srv_action_interface_example::srv::ArithmeticOperator_Response arithmetic_result(::msg_srv_action_interface_example::srv::ArithmeticOperator_Response::_arithmetic_result_type arg)
  {
    msg_.arithmetic_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_action_interface_example::srv::ArithmeticOperator_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_action_interface_example::srv::ArithmeticOperator_Response>()
{
  return msg_srv_action_interface_example::srv::builder::Init_ArithmeticOperator_Response_arithmetic_result();
}

}  // namespace msg_srv_action_interface_example

#endif  // MSG_SRV_ACTION_INTERFACE_EXAMPLE__SRV__DETAIL__ARITHMETIC_OPERATOR__BUILDER_HPP_
