# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pid_msg:msg/PIDError.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PIDError(type):
    """Metaclass of message 'PIDError'."""

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
            module = import_type_support('pid_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pid_msg.msg.PIDError')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pid_error
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pid_error
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pid_error
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pid_error
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pid_error

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PIDError(metaclass=Metaclass_PIDError):
    """Message class 'PIDError'."""

    __slots__ = [
        '_roll_error',
        '_pitch_error',
        '_throttle_error',
        '_yaw_error',
    ]

    _fields_and_field_types = {
        'roll_error': 'float',
        'pitch_error': 'float',
        'throttle_error': 'float',
        'yaw_error': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.roll_error = kwargs.get('roll_error', float())
        self.pitch_error = kwargs.get('pitch_error', float())
        self.throttle_error = kwargs.get('throttle_error', float())
        self.yaw_error = kwargs.get('yaw_error', float())

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
        if self.roll_error != other.roll_error:
            return False
        if self.pitch_error != other.pitch_error:
            return False
        if self.throttle_error != other.throttle_error:
            return False
        if self.yaw_error != other.yaw_error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def roll_error(self):
        """Message field 'roll_error'."""
        return self._roll_error

    @roll_error.setter
    def roll_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'roll_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._roll_error = value

    @builtins.property
    def pitch_error(self):
        """Message field 'pitch_error'."""
        return self._pitch_error

    @pitch_error.setter
    def pitch_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_error = value

    @builtins.property
    def throttle_error(self):
        """Message field 'throttle_error'."""
        return self._throttle_error

    @throttle_error.setter
    def throttle_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'throttle_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._throttle_error = value

    @builtins.property
    def yaw_error(self):
        """Message field 'yaw_error'."""
        return self._yaw_error

    @yaw_error.setter
    def yaw_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_error = value
