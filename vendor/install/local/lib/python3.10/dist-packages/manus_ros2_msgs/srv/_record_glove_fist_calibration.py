# generated from rosidl_generator_py/resource/_idl.py.em
# with input from manus_ros2_msgs:srv/RecordGloveFistCalibration.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RecordGloveFistCalibration_Request(type):
    """Metaclass of message 'RecordGloveFistCalibration_Request'."""

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
            module = import_type_support('manus_ros2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'manus_ros2_msgs.srv.RecordGloveFistCalibration_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__record_glove_fist_calibration__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__record_glove_fist_calibration__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__record_glove_fist_calibration__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__record_glove_fist_calibration__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__record_glove_fist_calibration__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RecordGloveFistCalibration_Request(metaclass=Metaclass_RecordGloveFistCalibration_Request):
    """Message class 'RecordGloveFistCalibration_Request'."""

    __slots__ = [
        '_side',
    ]

    _fields_and_field_types = {
        'side': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.side = kwargs.get('side', str())

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
        if self.side != other.side:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def side(self):
        """Message field 'side'."""
        return self._side

    @side.setter
    def side(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'side' field must be of type 'str'"
        self._side = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RecordGloveFistCalibration_Response(type):
    """Metaclass of message 'RecordGloveFistCalibration_Response'."""

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
            module = import_type_support('manus_ros2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'manus_ros2_msgs.srv.RecordGloveFistCalibration_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__record_glove_fist_calibration__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__record_glove_fist_calibration__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__record_glove_fist_calibration__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__record_glove_fist_calibration__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__record_glove_fist_calibration__response

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RecordGloveFistCalibration_Response(metaclass=Metaclass_RecordGloveFistCalibration_Response):
    """Message class 'RecordGloveFistCalibration_Response'."""

    __slots__ = [
        '_success',
        '_fist_tips',
        '_sample_count',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'fist_tips': 'geometry_msgs/Point[5]',
        'sample_count': 'uint32',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'), 5),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        from geometry_msgs.msg import Point
        self.fist_tips = kwargs.get(
            'fist_tips',
            [Point() for x in range(5)]
        )
        self.sample_count = kwargs.get('sample_count', int())
        self.message = kwargs.get('message', str())

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
        if self.fist_tips != other.fist_tips:
            return False
        if self.sample_count != other.sample_count:
            return False
        if self.message != other.message:
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
    def fist_tips(self):
        """Message field 'fist_tips'."""
        return self._fist_tips

    @fist_tips.setter
    def fist_tips(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 5 and
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'fist_tips' field must be a set or sequence with length 5 and each value of type 'Point'"
        self._fist_tips = value

    @builtins.property
    def sample_count(self):
        """Message field 'sample_count'."""
        return self._sample_count

    @sample_count.setter
    def sample_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sample_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sample_count' field must be an unsigned integer in [0, 4294967295]"
        self._sample_count = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_RecordGloveFistCalibration(type):
    """Metaclass of service 'RecordGloveFistCalibration'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('manus_ros2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'manus_ros2_msgs.srv.RecordGloveFistCalibration')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__record_glove_fist_calibration

            from manus_ros2_msgs.srv import _record_glove_fist_calibration
            if _record_glove_fist_calibration.Metaclass_RecordGloveFistCalibration_Request._TYPE_SUPPORT is None:
                _record_glove_fist_calibration.Metaclass_RecordGloveFistCalibration_Request.__import_type_support__()
            if _record_glove_fist_calibration.Metaclass_RecordGloveFistCalibration_Response._TYPE_SUPPORT is None:
                _record_glove_fist_calibration.Metaclass_RecordGloveFistCalibration_Response.__import_type_support__()


class RecordGloveFistCalibration(metaclass=Metaclass_RecordGloveFistCalibration):
    from manus_ros2_msgs.srv._record_glove_fist_calibration import RecordGloveFistCalibration_Request as Request
    from manus_ros2_msgs.srv._record_glove_fist_calibration import RecordGloveFistCalibration_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
