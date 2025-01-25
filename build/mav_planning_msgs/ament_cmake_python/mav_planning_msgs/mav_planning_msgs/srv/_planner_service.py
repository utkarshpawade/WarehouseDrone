# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mav_planning_msgs:srv/PlannerService.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlannerService_Request(type):
    """Metaclass of message 'PlannerService_Request'."""

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
            module = import_type_support('mav_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mav_planning_msgs.srv.PlannerService_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__planner_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__planner_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__planner_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__planner_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__planner_service__request

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlannerService_Request(metaclass=Metaclass_PlannerService_Request):
    """Message class 'PlannerService_Request'."""

    __slots__ = [
        '_start_pose',
        '_start_velocity',
        '_goal_pose',
        '_goal_velocity',
        '_bounding_box',
    ]

    _fields_and_field_types = {
        'start_pose': 'geometry_msgs/PoseStamped',
        'start_velocity': 'geometry_msgs/Vector3',
        'goal_pose': 'geometry_msgs/PoseStamped',
        'goal_velocity': 'geometry_msgs/Vector3',
        'bounding_box': 'geometry_msgs/Vector3',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseStamped
        self.start_pose = kwargs.get('start_pose', PoseStamped())
        from geometry_msgs.msg import Vector3
        self.start_velocity = kwargs.get('start_velocity', Vector3())
        from geometry_msgs.msg import PoseStamped
        self.goal_pose = kwargs.get('goal_pose', PoseStamped())
        from geometry_msgs.msg import Vector3
        self.goal_velocity = kwargs.get('goal_velocity', Vector3())
        from geometry_msgs.msg import Vector3
        self.bounding_box = kwargs.get('bounding_box', Vector3())

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
        if self.start_pose != other.start_pose:
            return False
        if self.start_velocity != other.start_velocity:
            return False
        if self.goal_pose != other.goal_pose:
            return False
        if self.goal_velocity != other.goal_velocity:
            return False
        if self.bounding_box != other.bounding_box:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def start_pose(self):
        """Message field 'start_pose'."""
        return self._start_pose

    @start_pose.setter
    def start_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'start_pose' field must be a sub message of type 'PoseStamped'"
        self._start_pose = value

    @builtins.property
    def start_velocity(self):
        """Message field 'start_velocity'."""
        return self._start_velocity

    @start_velocity.setter
    def start_velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'start_velocity' field must be a sub message of type 'Vector3'"
        self._start_velocity = value

    @builtins.property
    def goal_pose(self):
        """Message field 'goal_pose'."""
        return self._goal_pose

    @goal_pose.setter
    def goal_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'goal_pose' field must be a sub message of type 'PoseStamped'"
        self._goal_pose = value

    @builtins.property
    def goal_velocity(self):
        """Message field 'goal_velocity'."""
        return self._goal_velocity

    @goal_velocity.setter
    def goal_velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'goal_velocity' field must be a sub message of type 'Vector3'"
        self._goal_velocity = value

    @builtins.property
    def bounding_box(self):
        """Message field 'bounding_box'."""
        return self._bounding_box

    @bounding_box.setter
    def bounding_box(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'bounding_box' field must be a sub message of type 'Vector3'"
        self._bounding_box = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PlannerService_Response(type):
    """Metaclass of message 'PlannerService_Response'."""

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
            module = import_type_support('mav_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mav_planning_msgs.srv.PlannerService_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__planner_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__planner_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__planner_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__planner_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__planner_service__response

            from mav_planning_msgs.msg import PolynomialTrajectory
            if PolynomialTrajectory.__class__._TYPE_SUPPORT is None:
                PolynomialTrajectory.__class__.__import_type_support__()

            from mav_planning_msgs.msg import PolynomialTrajectory4D
            if PolynomialTrajectory4D.__class__._TYPE_SUPPORT is None:
                PolynomialTrajectory4D.__class__.__import_type_support__()

            from trajectory_msgs.msg import MultiDOFJointTrajectory
            if MultiDOFJointTrajectory.__class__._TYPE_SUPPORT is None:
                MultiDOFJointTrajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlannerService_Response(metaclass=Metaclass_PlannerService_Response):
    """Message class 'PlannerService_Response'."""

    __slots__ = [
        '_success',
        '_polynomial_plan',
        '_polynomial_plan_4d',
        '_sampled_plan',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'polynomial_plan': 'mav_planning_msgs/PolynomialTrajectory',
        'polynomial_plan_4d': 'mav_planning_msgs/PolynomialTrajectory4D',
        'sampled_plan': 'trajectory_msgs/MultiDOFJointTrajectory',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mav_planning_msgs', 'msg'], 'PolynomialTrajectory'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mav_planning_msgs', 'msg'], 'PolynomialTrajectory4D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'MultiDOFJointTrajectory'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        from mav_planning_msgs.msg import PolynomialTrajectory
        self.polynomial_plan = kwargs.get('polynomial_plan', PolynomialTrajectory())
        from mav_planning_msgs.msg import PolynomialTrajectory4D
        self.polynomial_plan_4d = kwargs.get('polynomial_plan_4d', PolynomialTrajectory4D())
        from trajectory_msgs.msg import MultiDOFJointTrajectory
        self.sampled_plan = kwargs.get('sampled_plan', MultiDOFJointTrajectory())

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
        if self.success != other.success:
            return False
        if self.polynomial_plan != other.polynomial_plan:
            return False
        if self.polynomial_plan_4d != other.polynomial_plan_4d:
            return False
        if self.sampled_plan != other.sampled_plan:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def polynomial_plan(self):
        """Message field 'polynomial_plan'."""
        return self._polynomial_plan

    @polynomial_plan.setter
    def polynomial_plan(self, value):
        if __debug__:
            from mav_planning_msgs.msg import PolynomialTrajectory
            assert \
                isinstance(value, PolynomialTrajectory), \
                "The 'polynomial_plan' field must be a sub message of type 'PolynomialTrajectory'"
        self._polynomial_plan = value

    @builtins.property
    def polynomial_plan_4d(self):
        """Message field 'polynomial_plan_4d'."""
        return self._polynomial_plan_4d

    @polynomial_plan_4d.setter
    def polynomial_plan_4d(self, value):
        if __debug__:
            from mav_planning_msgs.msg import PolynomialTrajectory4D
            assert \
                isinstance(value, PolynomialTrajectory4D), \
                "The 'polynomial_plan_4d' field must be a sub message of type 'PolynomialTrajectory4D'"
        self._polynomial_plan_4d = value

    @builtins.property
    def sampled_plan(self):
        """Message field 'sampled_plan'."""
        return self._sampled_plan

    @sampled_plan.setter
    def sampled_plan(self, value):
        if __debug__:
            from trajectory_msgs.msg import MultiDOFJointTrajectory
            assert \
                isinstance(value, MultiDOFJointTrajectory), \
                "The 'sampled_plan' field must be a sub message of type 'MultiDOFJointTrajectory'"
        self._sampled_plan = value


class Metaclass_PlannerService(type):
    """Metaclass of service 'PlannerService'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mav_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mav_planning_msgs.srv.PlannerService')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__planner_service

            from mav_planning_msgs.srv import _planner_service
            if _planner_service.Metaclass_PlannerService_Request._TYPE_SUPPORT is None:
                _planner_service.Metaclass_PlannerService_Request.__import_type_support__()
            if _planner_service.Metaclass_PlannerService_Response._TYPE_SUPPORT is None:
                _planner_service.Metaclass_PlannerService_Response.__import_type_support__()


class PlannerService(metaclass=Metaclass_PlannerService):
    from mav_planning_msgs.srv._planner_service import PlannerService_Request as Request
    from mav_planning_msgs.srv._planner_service import PlannerService_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
