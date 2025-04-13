// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_srv_action_interface_example:action/ArithmeticChecker.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACTION_INTERFACE_EXAMPLE__ACTION__DETAIL__ARITHMETIC_CHECKER__BUILDER_HPP_
#define MSG_SRV_ACTION_INTERFACE_EXAMPLE__ACTION__DETAIL__ARITHMETIC_CHECKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg_srv_action_interface_example/action/detail/arithmetic_checker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg_srv_action_interface_example
{

namespace action
{

namespace builder
{

class Init_ArithmeticChecker_Goal_goal_sum
{
public:
  Init_ArithmeticChecker_Goal_goal_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_srv_action_interface_example::action::ArithmeticChecker_Goal goal_sum(::msg_srv_action_interface_example::action::ArithmeticChecker_Goal::_goal_sum_type arg)
  {
    msg_.goal_sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_action_interface_example::action::ArithmeticChecker_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_action_interface_example::action::ArithmeticChecker_Goal>()
{
  return msg_srv_action_interface_example::action::builder::Init_ArithmeticChecker_Goal_goal_sum();
}

}  // namespace msg_srv_action_interface_example


namespace msg_srv_action_interface_example
{

namespace action
{

namespace builder
{

class Init_ArithmeticChecker_Result_total_sum
{
public:
  explicit Init_ArithmeticChecker_Result_total_sum(::msg_srv_action_interface_example::action::ArithmeticChecker_Result & msg)
  : msg_(msg)
  {}
  ::msg_srv_action_interface_example::action::ArithmeticChecker_Result total_sum(::msg_srv_action_interface_example::action::ArithmeticChecker_Result::_total_sum_type arg)
  {
    msg_.total_sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_action_interface_example::action::ArithmeticChecker_Result msg_;
};

class Init_ArithmeticChecker_Result_all_formula
{
public:
  Init_ArithmeticChecker_Result_all_formula()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArithmeticChecker_Result_total_sum all_formula(::msg_srv_action_interface_example::action::ArithmeticChecker_Result::_all_formula_type arg)
  {
    msg_.all_formula = std::move(arg);
    return Init_ArithmeticChecker_Result_total_sum(msg_);
  }

private:
  ::msg_srv_action_interface_example::action::ArithmeticChecker_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_action_interface_example::action::ArithmeticChecker_Result>()
{
  return msg_srv_action_interface_example::action::builder::Init_ArithmeticChecker_Result_all_formula();
}

}  // namespace msg_srv_action_interface_example


namespace msg_srv_action_interface_example
{

namespace action
{

namespace builder
{

class Init_ArithmeticChecker_Feedback_formul
{
public:
  Init_ArithmeticChecker_Feedback_formul()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_srv_action_interface_example::action::ArithmeticChecker_Feedback formul(::msg_srv_action_interface_example::action::ArithmeticChecker_Feedback::_formul_type arg)
  {
    msg_.formul = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_action_interface_example::action::ArithmeticChecker_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_action_interface_example::action::ArithmeticChecker_Feedback>()
{
  return msg_srv_action_interface_example::action::builder::Init_ArithmeticChecker_Feedback_formul();
}

}  // namespace msg_srv_action_interface_example


namespace msg_srv_action_interface_example
{

namespace action
{

namespace builder
{

class Init_ArithmeticChecker_SendGoal_Request_goal
{
public:
  explicit Init_ArithmeticChecker_SendGoal_Request_goal(::msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request goal(::msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request msg_;
};

class Init_ArithmeticChecker_SendGoal_Request_goal_id
{
public:
  Init_ArithmeticChecker_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArithmeticChecker_SendGoal_Request_goal goal_id(::msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ArithmeticChecker_SendGoal_Request_goal(msg_);
  }

private:
  ::msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Request>()
{
  return msg_srv_action_interface_example::action::builder::Init_ArithmeticChecker_SendGoal_Request_goal_id();
}

}  // namespace msg_srv_action_interface_example


namespace msg_srv_action_interface_example
{

namespace action
{

namespace builder
{

class Init_ArithmeticChecker_SendGoal_Response_stamp
{
public:
  explicit Init_ArithmeticChecker_SendGoal_Response_stamp(::msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response stamp(::msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response msg_;
};

class Init_ArithmeticChecker_SendGoal_Response_accepted
{
public:
  Init_ArithmeticChecker_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArithmeticChecker_SendGoal_Response_stamp accepted(::msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ArithmeticChecker_SendGoal_Response_stamp(msg_);
  }

private:
  ::msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_action_interface_example::action::ArithmeticChecker_SendGoal_Response>()
{
  return msg_srv_action_interface_example::action::builder::Init_ArithmeticChecker_SendGoal_Response_accepted();
}

}  // namespace msg_srv_action_interface_example


namespace msg_srv_action_interface_example
{

namespace action
{

namespace builder
{

class Init_ArithmeticChecker_GetResult_Request_goal_id
{
public:
  Init_ArithmeticChecker_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request goal_id(::msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Request>()
{
  return msg_srv_action_interface_example::action::builder::Init_ArithmeticChecker_GetResult_Request_goal_id();
}

}  // namespace msg_srv_action_interface_example


namespace msg_srv_action_interface_example
{

namespace action
{

namespace builder
{

class Init_ArithmeticChecker_GetResult_Response_result
{
public:
  explicit Init_ArithmeticChecker_GetResult_Response_result(::msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response result(::msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response msg_;
};

class Init_ArithmeticChecker_GetResult_Response_status
{
public:
  Init_ArithmeticChecker_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArithmeticChecker_GetResult_Response_result status(::msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ArithmeticChecker_GetResult_Response_result(msg_);
  }

private:
  ::msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_action_interface_example::action::ArithmeticChecker_GetResult_Response>()
{
  return msg_srv_action_interface_example::action::builder::Init_ArithmeticChecker_GetResult_Response_status();
}

}  // namespace msg_srv_action_interface_example


namespace msg_srv_action_interface_example
{

namespace action
{

namespace builder
{

class Init_ArithmeticChecker_FeedbackMessage_feedback
{
public:
  explicit Init_ArithmeticChecker_FeedbackMessage_feedback(::msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage feedback(::msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage msg_;
};

class Init_ArithmeticChecker_FeedbackMessage_goal_id
{
public:
  Init_ArithmeticChecker_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArithmeticChecker_FeedbackMessage_feedback goal_id(::msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ArithmeticChecker_FeedbackMessage_feedback(msg_);
  }

private:
  ::msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_action_interface_example::action::ArithmeticChecker_FeedbackMessage>()
{
  return msg_srv_action_interface_example::action::builder::Init_ArithmeticChecker_FeedbackMessage_goal_id();
}

}  // namespace msg_srv_action_interface_example

#endif  // MSG_SRV_ACTION_INTERFACE_EXAMPLE__ACTION__DETAIL__ARITHMETIC_CHECKER__BUILDER_HPP_
