# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from marti_nav_msgs/UpdateRouteMetadataRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import marti_common_msgs.msg
import marti_nav_msgs.msg

class UpdateRouteMetadataRequest(genpy.Message):
  _md5sum = "4326dd3985865ba6412643260ac9da6f"
  _type = "marti_nav_msgs/UpdateRouteMetadataRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# This service is intended for modifying the properties on an existing route 
# and its points.
# 
# The use of this service is a little non-intuitive.  Set route_guid to the GUID
# of the route you want to modify, and fill metadata_points with all of the points
# you want to modify.  The coordinates of the points actually don't matter; the
# "guid" property will be matched against an existing point in the route, and that
# point's properties will be replaced with the one in the new point.
string route_guid # The GUID of the route to modify
marti_nav_msgs/RoutePoint[] metadata_points # All of the points that should be modified

================================================================================
MSG: marti_nav_msgs/RoutePoint
geometry_msgs/Pose           pose
string                       id         # unique identifier for this point
marti_common_msgs/KeyValue[] properties

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: marti_common_msgs/KeyValue
# An arbitrary key-value pair

string key
string value
"""
  __slots__ = ['route_guid','metadata_points']
  _slot_types = ['string','marti_nav_msgs/RoutePoint[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       route_guid,metadata_points

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(UpdateRouteMetadataRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.route_guid is None:
        self.route_guid = ''
      if self.metadata_points is None:
        self.metadata_points = []
    else:
      self.route_guid = ''
      self.metadata_points = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.route_guid
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.metadata_points)
      buff.write(_struct_I.pack(length))
      for val1 in self.metadata_points:
        _v1 = val1.pose
        _v2 = _v1.position
        _x = _v2
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v3 = _v1.orientation
        _x = _v3
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
        _x = val1.id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        length = len(val1.properties)
        buff.write(_struct_I.pack(length))
        for val2 in val1.properties:
          _x = val2.key
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
          _x = val2.value
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.metadata_points is None:
        self.metadata_points = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.route_guid = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.route_guid = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.metadata_points = []
      for i in range(0, length):
        val1 = marti_nav_msgs.msg.RoutePoint()
        _v4 = val1.pose
        _v5 = _v4.position
        _x = _v5
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v6 = _v4.orientation
        _x = _v6
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.id = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.id = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.properties = []
        for i in range(0, length):
          val2 = marti_common_msgs.msg.KeyValue()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.key = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val2.key = str[start:end]
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.value = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val2.value = str[start:end]
          val1.properties.append(val2)
        self.metadata_points.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.route_guid
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.metadata_points)
      buff.write(_struct_I.pack(length))
      for val1 in self.metadata_points:
        _v7 = val1.pose
        _v8 = _v7.position
        _x = _v8
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v9 = _v7.orientation
        _x = _v9
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
        _x = val1.id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        length = len(val1.properties)
        buff.write(_struct_I.pack(length))
        for val2 in val1.properties:
          _x = val2.key
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
          _x = val2.value
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.metadata_points is None:
        self.metadata_points = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.route_guid = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.route_guid = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.metadata_points = []
      for i in range(0, length):
        val1 = marti_nav_msgs.msg.RoutePoint()
        _v10 = val1.pose
        _v11 = _v10.position
        _x = _v11
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v12 = _v10.orientation
        _x = _v12
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.id = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.id = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.properties = []
        for i in range(0, length):
          val2 = marti_common_msgs.msg.KeyValue()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.key = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val2.key = str[start:end]
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.value = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val2.value = str[start:end]
          val1.properties.append(val2)
        self.metadata_points.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
_struct_4d = None
def _get_struct_4d():
    global _struct_4d
    if _struct_4d is None:
        _struct_4d = struct.Struct("<4d")
    return _struct_4d
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from marti_nav_msgs/UpdateRouteMetadataResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class UpdateRouteMetadataResponse(genpy.Message):
  _md5sum = "937c9679a518e3a18d831e57125ea522"
  _type = "marti_nav_msgs/UpdateRouteMetadataResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """bool success
string message


"""
  __slots__ = ['success','message']
  _slot_types = ['bool','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       success,message

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(UpdateRouteMetadataResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.success is None:
        self.success = False
      if self.message is None:
        self.message = ''
    else:
      self.success = False
      self.message = ''

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.success
      buff.write(_get_struct_B().pack(_x))
      _x = self.message
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 1
      (self.success,) = _get_struct_B().unpack(str[start:end])
      self.success = bool(self.success)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.message = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.message = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.success
      buff.write(_get_struct_B().pack(_x))
      _x = self.message
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 1
      (self.success,) = _get_struct_B().unpack(str[start:end])
      self.success = bool(self.success)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.message = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.message = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
class UpdateRouteMetadata(object):
  _type          = 'marti_nav_msgs/UpdateRouteMetadata'
  _md5sum = '680bbce4d545516006965d175dfcdb08'
  _request_class  = UpdateRouteMetadataRequest
  _response_class = UpdateRouteMetadataResponse
