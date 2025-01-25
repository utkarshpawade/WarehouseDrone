# generated from rosidl_generator_py/resource/_idl.py.em
# with input from waypoint_navigation:srv/GetPath.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetPath_Request(type):
    """Metaclass of message 'GetPath_Request'."""

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
                'waypoint_navigation.srv.GetPath_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_path__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_path__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_path__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_path__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_path__request

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


class GetPath_Request(metaclass=Metaclass_GetPath_Request):
    """Message class 'GetPath_Request'."""

    __slots__ = [
        '_start_point',
        '_end_point',
    ]

    _fields_and_field_types = {
        'start_point': 'geometry_msgs/Pose',
        'end_point': 'geometry_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose
        self.start_point = kwargs.get('start_point', Pose())
        from geometry_msgs.msg import Pose
        self.end_point = kwargs.get('end_point', Pose())

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
        if self.start_point != other.start_point:
            return False
        if self.end_point != other.end_point:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def start_point(self):
        """Message field 'start_point'."""
        return self._start_point

    @start_point.setter
    def start_point(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'start_point' field must be a sub message of type 'Pose'"
        self._start_point = value

    @builtins.property
    def end_point(self):
        """Message field 'end_point'."""
        return self._end_point

    @end_point.setter
    def end_point(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'end_point' field must be a sub message of type 'Pose'"
        self._end_point = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetPath_Response(type):
    """Metaclass of message 'GetPath_Response'."""

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
                'waypoint_navigation.srv.GetPath_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_path__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_path__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_path__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_path__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_path__response

            from geometry_msgs.msg import PoseArray
            if PoseArray.__class__._TYPE_SUPPORT is None:
                PoseArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPath_Response(metaclass=Metaclass_GetPath_Response):
    """Message class 'GetPath_Response'."""

    __slots__ = [
        '_path',
        '_is_on_first_path',
    ]

    _fields_and_field_types = {
        'path': 'geometry_msgs/PoseArray',
        'is_on_first_path': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseArray'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseArray
        self.path = kwargs.get('path', PoseArray())
        self.is_on_first_path = kwargs.get('is_on_first_path', bool())

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
        if self.path != other.path:
            return False
        if self.is_on_first_path != other.is_on_first_path:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def path(self):
        """Message field 'path'."""
        return self._path

    @path.setter
    def path(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseArray
            assert \
                isinstance(value, PoseArray), \
                "The 'path' field must be a sub message of type 'PoseArray'"
        self._path = value

    @builtins.property
    def is_on_first_path(self):
        """Message field 'is_on_first_path'."""
        return self._is_on_first_path

    @is_on_first_path.setter
    def is_on_first_path(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_on_first_path' field must be of type 'bool'"
        self._is_on_first_path = value


class Metaclass_GetPath(type):
    """Metaclass of service 'GetPath'."""

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
                'waypoint_navigation.srv.GetPath')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_path

            from waypoint_navigation.srv import _get_path
            if _get_path.Metaclass_GetPath_Request._TYPE_SUPPORT is None:
                _get_path.Metaclass_GetPath_Request.__import_type_support__()
            if _get_path.Metaclass_GetPath_Response._TYPE_SUPPORT is None:
                _get_path.Metaclass_GetPath_Response.__import_type_support__()


class GetPath(metaclass=Metaclass_GetPath):
    from waypoint_navigation.srv._get_path import GetPath_Request as Request
    from waypoint_navigation.srv._get_path import GetPath_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
