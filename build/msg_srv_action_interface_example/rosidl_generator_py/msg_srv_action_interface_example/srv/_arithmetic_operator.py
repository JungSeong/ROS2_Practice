# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msg_srv_action_interface_example:srv/ArithmeticOperator.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArithmeticOperator_Request(type):
    """Metaclass of message 'ArithmeticOperator_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PLUS': 1,
        'MINUS': 2,
        'MULTIPLY': 3,
        'DIVISION': 4,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_srv_action_interface_example')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_srv_action_interface_example.srv.ArithmeticOperator_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__arithmetic_operator__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__arithmetic_operator__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__arithmetic_operator__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__arithmetic_operator__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__arithmetic_operator__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PLUS': cls.__constants['PLUS'],
            'MINUS': cls.__constants['MINUS'],
            'MULTIPLY': cls.__constants['MULTIPLY'],
            'DIVISION': cls.__constants['DIVISION'],
        }

    @property
    def PLUS(self):
        """Message constant 'PLUS'."""
        return Metaclass_ArithmeticOperator_Request.__constants['PLUS']

    @property
    def MINUS(self):
        """Message constant 'MINUS'."""
        return Metaclass_ArithmeticOperator_Request.__constants['MINUS']

    @property
    def MULTIPLY(self):
        """Message constant 'MULTIPLY'."""
        return Metaclass_ArithmeticOperator_Request.__constants['MULTIPLY']

    @property
    def DIVISION(self):
        """Message constant 'DIVISION'."""
        return Metaclass_ArithmeticOperator_Request.__constants['DIVISION']


class ArithmeticOperator_Request(metaclass=Metaclass_ArithmeticOperator_Request):
    """
    Message class 'ArithmeticOperator_Request'.

    Constants:
      PLUS
      MINUS
      MULTIPLY
      DIVISION
    """

    __slots__ = [
        '_arithmetic_operator',
    ]

    _fields_and_field_types = {
        'arithmetic_operator': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.arithmetic_operator = kwargs.get('arithmetic_operator', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.arithmetic_operator != other.arithmetic_operator:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def arithmetic_operator(self):
        """Message field 'arithmetic_operator'."""
        return self._arithmetic_operator

    @arithmetic_operator.setter
    def arithmetic_operator(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'arithmetic_operator' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'arithmetic_operator' field must be an integer in [-128, 127]"
        self._arithmetic_operator = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_ArithmeticOperator_Response(type):
    """Metaclass of message 'ArithmeticOperator_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_srv_action_interface_example')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_srv_action_interface_example.srv.ArithmeticOperator_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__arithmetic_operator__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__arithmetic_operator__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__arithmetic_operator__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__arithmetic_operator__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__arithmetic_operator__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArithmeticOperator_Response(metaclass=Metaclass_ArithmeticOperator_Response):
    """Message class 'ArithmeticOperator_Response'."""

    __slots__ = [
        '_arithmetic_result',
    ]

    _fields_and_field_types = {
        'arithmetic_result': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.arithmetic_result = kwargs.get('arithmetic_result', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.arithmetic_result != other.arithmetic_result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def arithmetic_result(self):
        """Message field 'arithmetic_result'."""
        return self._arithmetic_result

    @arithmetic_result.setter
    def arithmetic_result(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arithmetic_result' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arithmetic_result' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arithmetic_result = value


class Metaclass_ArithmeticOperator(type):
    """Metaclass of service 'ArithmeticOperator'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_srv_action_interface_example')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_srv_action_interface_example.srv.ArithmeticOperator')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__arithmetic_operator

            from msg_srv_action_interface_example.srv import _arithmetic_operator
            if _arithmetic_operator.Metaclass_ArithmeticOperator_Request._TYPE_SUPPORT is None:
                _arithmetic_operator.Metaclass_ArithmeticOperator_Request.__import_type_support__()
            if _arithmetic_operator.Metaclass_ArithmeticOperator_Response._TYPE_SUPPORT is None:
                _arithmetic_operator.Metaclass_ArithmeticOperator_Response.__import_type_support__()


class ArithmeticOperator(metaclass=Metaclass_ArithmeticOperator):
    from msg_srv_action_interface_example.srv._arithmetic_operator import ArithmeticOperator_Request as Request
    from msg_srv_action_interface_example.srv._arithmetic_operator import ArithmeticOperator_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
