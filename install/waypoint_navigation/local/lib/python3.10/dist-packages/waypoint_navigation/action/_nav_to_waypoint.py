# generated from rosidl_generator_py/resource/_idl.py.em
# with input from waypoint_navigation:action/NavToWaypoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NavToWaypoint_Goal(type):
    """Metaclass of message 'NavToWaypoint_Goal'."""

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
            module = import_type_support('waypoint_navigation')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'waypoint_navigation.action.NavToWaypoint_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__nav_to_waypoint__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__nav_to_waypoint__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__nav_to_waypoint__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__nav_to_waypoint__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__nav_to_waypoint__goal

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavToWaypoint_Goal(metaclass=Metaclass_NavToWaypoint_Goal):
    """Message class 'NavToWaypoint_Goal'."""

    __slots__ = [
        '_waypoint',
    ]

    _fields_and_field_types = {
        'waypoint': 'geometry_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose
        self.waypoint = kwargs.get('waypoint', Pose())

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
        if self.waypoint != other.waypoint:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def waypoint(self):
        """Message field 'waypoint'."""
        return self._waypoint

    @waypoint.setter
    def waypoint(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'waypoint' field must be a sub message of type 'Pose'"
        self._waypoint = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NavToWaypoint_Result(type):
    """Metaclass of message 'NavToWaypoint_Result'."""

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
            module = import_type_support('waypoint_navigation')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'waypoint_navigation.action.NavToWaypoint_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__nav_to_waypoint__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__nav_to_waypoint__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__nav_to_waypoint__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__nav_to_waypoint__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__nav_to_waypoint__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavToWaypoint_Result(metaclass=Metaclass_NavToWaypoint_Result):
    """Message class 'NavToWaypoint_Result'."""

    __slots__ = [
        '_hov_time',
    ]

    _fields_and_field_types = {
        'hov_time': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.hov_time = kwargs.get('hov_time', int())

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
        if self.hov_time != other.hov_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def hov_time(self):
        """Message field 'hov_time'."""
        return self._hov_time

    @hov_time.setter
    def hov_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hov_time' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hov_time' field must be an integer in [-2147483648, 2147483647]"
        self._hov_time = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NavToWaypoint_Feedback(type):
    """Metaclass of message 'NavToWaypoint_Feedback'."""

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
            module = import_type_support('waypoint_navigation')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'waypoint_navigation.action.NavToWaypoint_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__nav_to_waypoint__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__nav_to_waypoint__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__nav_to_waypoint__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__nav_to_waypoint__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__nav_to_waypoint__feedback

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavToWaypoint_Feedback(metaclass=Metaclass_NavToWaypoint_Feedback):
    """Message class 'NavToWaypoint_Feedback'."""

    __slots__ = [
        '_current_waypoint',
    ]

    _fields_and_field_types = {
        'current_waypoint': 'geometry_msgs/PoseStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseStamped
        self.current_waypoint = kwargs.get('current_waypoint', PoseStamped())

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
        if self.current_waypoint != other.current_waypoint:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_waypoint(self):
        """Message field 'current_waypoint'."""
        return self._current_waypoint

    @current_waypoint.setter
    def current_waypoint(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'current_waypoint' field must be a sub message of type 'PoseStamped'"
        self._current_waypoint = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NavToWaypoint_SendGoal_Request(type):
    """Metaclass of message 'NavToWaypoint_SendGoal_Request'."""

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
            module = import_type_support('waypoint_navigation')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'waypoint_navigation.action.NavToWaypoint_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__nav_to_waypoint__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__nav_to_waypoint__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__nav_to_waypoint__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__nav_to_waypoint__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__nav_to_waypoint__send_goal__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

            from waypoint_navigation.action import NavToWaypoint
            if NavToWaypoint.Goal.__class__._TYPE_SUPPORT is None:
                NavToWaypoint.Goal.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavToWaypoint_SendGoal_Request(metaclass=Metaclass_NavToWaypoint_SendGoal_Request):
    """Message class 'NavToWaypoint_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'waypoint_navigation/NavToWaypoint_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['waypoint_navigation', 'action'], 'NavToWaypoint_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from waypoint_navigation.action._nav_to_waypoint import NavToWaypoint_Goal
        self.goal = kwargs.get('goal', NavToWaypoint_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from waypoint_navigation.action._nav_to_waypoint import NavToWaypoint_Goal
            assert \
                isinstance(value, NavToWaypoint_Goal), \
                "The 'goal' field must be a sub message of type 'NavToWaypoint_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NavToWaypoint_SendGoal_Response(type):
    """Metaclass of message 'NavToWaypoint_SendGoal_Response'."""

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
            module = import_type_support('waypoint_navigation')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'waypoint_navigation.action.NavToWaypoint_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__nav_to_waypoint__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__nav_to_waypoint__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__nav_to_waypoint__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__nav_to_waypoint__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__nav_to_waypoint__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavToWaypoint_SendGoal_Response(metaclass=Metaclass_NavToWaypoint_SendGoal_Response):
    """Message class 'NavToWaypoint_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_NavToWaypoint_SendGoal(type):
    """Metaclass of service 'NavToWaypoint_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('waypoint_navigation')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'waypoint_navigation.action.NavToWaypoint_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__nav_to_waypoint__send_goal

            from waypoint_navigation.action import _nav_to_waypoint
            if _nav_to_waypoint.Metaclass_NavToWaypoint_SendGoal_Request._TYPE_SUPPORT is None:
                _nav_to_waypoint.Metaclass_NavToWaypoint_SendGoal_Request.__import_type_support__()
            if _nav_to_waypoint.Metaclass_NavToWaypoint_SendGoal_Response._TYPE_SUPPORT is None:
                _nav_to_waypoint.Metaclass_NavToWaypoint_SendGoal_Response.__import_type_support__()


class NavToWaypoint_SendGoal(metaclass=Metaclass_NavToWaypoint_SendGoal):
    from waypoint_navigation.action._nav_to_waypoint import NavToWaypoint_SendGoal_Request as Request
    from waypoint_navigation.action._nav_to_waypoint import NavToWaypoint_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NavToWaypoint_GetResult_Request(type):
    """Metaclass of message 'NavToWaypoint_GetResult_Request'."""

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
            module = import_type_support('waypoint_navigation')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'waypoint_navigation.action.NavToWaypoint_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__nav_to_waypoint__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__nav_to_waypoint__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__nav_to_waypoint__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__nav_to_waypoint__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__nav_to_waypoint__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavToWaypoint_GetResult_Request(metaclass=Metaclass_NavToWaypoint_GetResult_Request):
    """Message class 'NavToWaypoint_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NavToWaypoint_GetResult_Response(type):
    """Metaclass of message 'NavToWaypoint_GetResult_Response'."""

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
            module = import_type_support('waypoint_navigation')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'waypoint_navigation.action.NavToWaypoint_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__nav_to_waypoint__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__nav_to_waypoint__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__nav_to_waypoint__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__nav_to_waypoint__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__nav_to_waypoint__get_result__response

            from waypoint_navigation.action import NavToWaypoint
            if NavToWaypoint.Result.__class__._TYPE_SUPPORT is None:
                NavToWaypoint.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavToWaypoint_GetResult_Response(metaclass=Metaclass_NavToWaypoint_GetResult_Response):
    """Message class 'NavToWaypoint_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'waypoint_navigation/NavToWaypoint_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['waypoint_navigation', 'action'], 'NavToWaypoint_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from waypoint_navigation.action._nav_to_waypoint import NavToWaypoint_Result
        self.result = kwargs.get('result', NavToWaypoint_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from waypoint_navigation.action._nav_to_waypoint import NavToWaypoint_Result
            assert \
                isinstance(value, NavToWaypoint_Result), \
                "The 'result' field must be a sub message of type 'NavToWaypoint_Result'"
        self._result = value


class Metaclass_NavToWaypoint_GetResult(type):
    """Metaclass of service 'NavToWaypoint_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('waypoint_navigation')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'waypoint_navigation.action.NavToWaypoint_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__nav_to_waypoint__get_result

            from waypoint_navigation.action import _nav_to_waypoint
            if _nav_to_waypoint.Metaclass_NavToWaypoint_GetResult_Request._TYPE_SUPPORT is None:
                _nav_to_waypoint.Metaclass_NavToWaypoint_GetResult_Request.__import_type_support__()
            if _nav_to_waypoint.Metaclass_NavToWaypoint_GetResult_Response._TYPE_SUPPORT is None:
                _nav_to_waypoint.Metaclass_NavToWaypoint_GetResult_Response.__import_type_support__()


class NavToWaypoint_GetResult(metaclass=Metaclass_NavToWaypoint_GetResult):
    from waypoint_navigation.action._nav_to_waypoint import NavToWaypoint_GetResult_Request as Request
    from waypoint_navigation.action._nav_to_waypoint import NavToWaypoint_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NavToWaypoint_FeedbackMessage(type):
    """Metaclass of message 'NavToWaypoint_FeedbackMessage'."""

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
            module = import_type_support('waypoint_navigation')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'waypoint_navigation.action.NavToWaypoint_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__nav_to_waypoint__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__nav_to_waypoint__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__nav_to_waypoint__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__nav_to_waypoint__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__nav_to_waypoint__feedback_message

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

            from waypoint_navigation.action import NavToWaypoint
            if NavToWaypoint.Feedback.__class__._TYPE_SUPPORT is None:
                NavToWaypoint.Feedback.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavToWaypoint_FeedbackMessage(metaclass=Metaclass_NavToWaypoint_FeedbackMessage):
    """Message class 'NavToWaypoint_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'waypoint_navigation/NavToWaypoint_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['waypoint_navigation', 'action'], 'NavToWaypoint_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from waypoint_navigation.action._nav_to_waypoint import NavToWaypoint_Feedback
        self.feedback = kwargs.get('feedback', NavToWaypoint_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from waypoint_navigation.action._nav_to_waypoint import NavToWaypoint_Feedback
            assert \
                isinstance(value, NavToWaypoint_Feedback), \
                "The 'feedback' field must be a sub message of type 'NavToWaypoint_Feedback'"
        self._feedback = value


class Metaclass_NavToWaypoint(type):
    """Metaclass of action 'NavToWaypoint'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('waypoint_navigation')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'waypoint_navigation.action.NavToWaypoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__nav_to_waypoint

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from waypoint_navigation.action import _nav_to_waypoint
            if _nav_to_waypoint.Metaclass_NavToWaypoint_SendGoal._TYPE_SUPPORT is None:
                _nav_to_waypoint.Metaclass_NavToWaypoint_SendGoal.__import_type_support__()
            if _nav_to_waypoint.Metaclass_NavToWaypoint_GetResult._TYPE_SUPPORT is None:
                _nav_to_waypoint.Metaclass_NavToWaypoint_GetResult.__import_type_support__()
            if _nav_to_waypoint.Metaclass_NavToWaypoint_FeedbackMessage._TYPE_SUPPORT is None:
                _nav_to_waypoint.Metaclass_NavToWaypoint_FeedbackMessage.__import_type_support__()


class NavToWaypoint(metaclass=Metaclass_NavToWaypoint):

    # The goal message defined in the action definition.
    from waypoint_navigation.action._nav_to_waypoint import NavToWaypoint_Goal as Goal
    # The result message defined in the action definition.
    from waypoint_navigation.action._nav_to_waypoint import NavToWaypoint_Result as Result
    # The feedback message defined in the action definition.
    from waypoint_navigation.action._nav_to_waypoint import NavToWaypoint_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from waypoint_navigation.action._nav_to_waypoint import NavToWaypoint_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from waypoint_navigation.action._nav_to_waypoint import NavToWaypoint_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from waypoint_navigation.action._nav_to_waypoint import NavToWaypoint_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
