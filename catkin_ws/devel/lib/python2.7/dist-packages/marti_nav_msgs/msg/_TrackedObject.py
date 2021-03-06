# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from marti_nav_msgs/TrackedObject.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy
import geometry_msgs.msg
import std_msgs.msg

class TrackedObject(genpy.Message):
  _md5sum = "cbb29999f8b089f4f41612b25a8b7540"
  _type = "marti_nav_msgs/TrackedObject"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """uint8 VEHICLE=0
uint8 PEDESTRIAN=1
uint8 UNKNOWN=255

std_msgs/Header header  # Frame and timestamp
uint16 id      # Id

geometry_msgs/PoseWithCovariance pose      # Pose in the header frame.
geometry_msgs/TwistWithCovariance velocity # Velocity in the header frame.
geometry_msgs/Vector3 linear_acceleration  # Acceleration in the header frame.
float64[9] linear_acceleration_covariance  # Row major x, y z

geometry_msgs/Point[] polygon
# A list of points that define the obstacle's geometry in horizontal
# plane relative to the obstacle's pose.  The polygon is implicitly
# closed by a segment between the last and first points.

# Estimated oriented bounding box for object classes with rectangular shapes.
float32 length                 # Length of the object in meters
float32 length_quality         # Length quality number [0,1]
float32 width                  # Width of the object in meters
float32 width_quality          # Width quality number [0,1]

uint8 classification           # Classification
float32 classification_quality # Classification quality number [0,1]

float32 existence_probability  # Existence probability [0,1]

duration age_duration          # Age of the track since first detection.
duration prediction_duration   # Age of the prediction since the active flag was last true.

bool active                    # Active flag for if the objects is currently being detected.

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: geometry_msgs/PoseWithCovariance
# This represents a pose in free space with uncertainty.

Pose pose

# Row-major representation of the 6x6 covariance matrix
# The orientation parameters use a fixed-axis representation.
# In order, the parameters are:
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
float64[36] covariance

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
MSG: geometry_msgs/TwistWithCovariance
# This expresses velocity in free space with uncertainty.

Twist twist

# Row-major representation of the 6x6 covariance matrix
# The orientation parameters use a fixed-axis representation.
# In order, the parameters are:
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
float64[36] covariance

================================================================================
MSG: geometry_msgs/Twist
# This expresses velocity in free space broken into its linear and angular parts.
Vector3  linear
Vector3  angular

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z"""
  # Pseudo-constants
  VEHICLE = 0
  PEDESTRIAN = 1
  UNKNOWN = 255

  __slots__ = ['header','id','pose','velocity','linear_acceleration','linear_acceleration_covariance','polygon','length','length_quality','width','width_quality','classification','classification_quality','existence_probability','age_duration','prediction_duration','active']
  _slot_types = ['std_msgs/Header','uint16','geometry_msgs/PoseWithCovariance','geometry_msgs/TwistWithCovariance','geometry_msgs/Vector3','float64[9]','geometry_msgs/Point[]','float32','float32','float32','float32','uint8','float32','float32','duration','duration','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,id,pose,velocity,linear_acceleration,linear_acceleration_covariance,polygon,length,length_quality,width,width_quality,classification,classification_quality,existence_probability,age_duration,prediction_duration,active

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(TrackedObject, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.id is None:
        self.id = 0
      if self.pose is None:
        self.pose = geometry_msgs.msg.PoseWithCovariance()
      if self.velocity is None:
        self.velocity = geometry_msgs.msg.TwistWithCovariance()
      if self.linear_acceleration is None:
        self.linear_acceleration = geometry_msgs.msg.Vector3()
      if self.linear_acceleration_covariance is None:
        self.linear_acceleration_covariance = [0.] * 9
      if self.polygon is None:
        self.polygon = []
      if self.length is None:
        self.length = 0.
      if self.length_quality is None:
        self.length_quality = 0.
      if self.width is None:
        self.width = 0.
      if self.width_quality is None:
        self.width_quality = 0.
      if self.classification is None:
        self.classification = 0
      if self.classification_quality is None:
        self.classification_quality = 0.
      if self.existence_probability is None:
        self.existence_probability = 0.
      if self.age_duration is None:
        self.age_duration = genpy.Duration()
      if self.prediction_duration is None:
        self.prediction_duration = genpy.Duration()
      if self.active is None:
        self.active = False
    else:
      self.header = std_msgs.msg.Header()
      self.id = 0
      self.pose = geometry_msgs.msg.PoseWithCovariance()
      self.velocity = geometry_msgs.msg.TwistWithCovariance()
      self.linear_acceleration = geometry_msgs.msg.Vector3()
      self.linear_acceleration_covariance = [0.] * 9
      self.polygon = []
      self.length = 0.
      self.length_quality = 0.
      self.width = 0.
      self.width_quality = 0.
      self.classification = 0
      self.classification_quality = 0.
      self.existence_probability = 0.
      self.age_duration = genpy.Duration()
      self.prediction_duration = genpy.Duration()
      self.active = False

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
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_H7d().pack(_x.id, _x.pose.pose.position.x, _x.pose.pose.position.y, _x.pose.pose.position.z, _x.pose.pose.orientation.x, _x.pose.pose.orientation.y, _x.pose.pose.orientation.z, _x.pose.pose.orientation.w))
      buff.write(_get_struct_36d().pack(*self.pose.covariance))
      _x = self
      buff.write(_get_struct_6d().pack(_x.velocity.twist.linear.x, _x.velocity.twist.linear.y, _x.velocity.twist.linear.z, _x.velocity.twist.angular.x, _x.velocity.twist.angular.y, _x.velocity.twist.angular.z))
      buff.write(_get_struct_36d().pack(*self.velocity.covariance))
      _x = self
      buff.write(_get_struct_3d().pack(_x.linear_acceleration.x, _x.linear_acceleration.y, _x.linear_acceleration.z))
      buff.write(_get_struct_9d().pack(*self.linear_acceleration_covariance))
      length = len(self.polygon)
      buff.write(_struct_I.pack(length))
      for val1 in self.polygon:
        _x = val1
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
      _x = self
      buff.write(_get_struct_4fB2f4iB().pack(_x.length, _x.length_quality, _x.width, _x.width_quality, _x.classification, _x.classification_quality, _x.existence_probability, _x.age_duration.secs, _x.age_duration.nsecs, _x.prediction_duration.secs, _x.prediction_duration.nsecs, _x.active))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.pose is None:
        self.pose = geometry_msgs.msg.PoseWithCovariance()
      if self.velocity is None:
        self.velocity = geometry_msgs.msg.TwistWithCovariance()
      if self.linear_acceleration is None:
        self.linear_acceleration = geometry_msgs.msg.Vector3()
      if self.polygon is None:
        self.polygon = None
      if self.age_duration is None:
        self.age_duration = genpy.Duration()
      if self.prediction_duration is None:
        self.prediction_duration = genpy.Duration()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 58
      (_x.id, _x.pose.pose.position.x, _x.pose.pose.position.y, _x.pose.pose.position.z, _x.pose.pose.orientation.x, _x.pose.pose.orientation.y, _x.pose.pose.orientation.z, _x.pose.pose.orientation.w,) = _get_struct_H7d().unpack(str[start:end])
      start = end
      end += 288
      self.pose.covariance = _get_struct_36d().unpack(str[start:end])
      _x = self
      start = end
      end += 48
      (_x.velocity.twist.linear.x, _x.velocity.twist.linear.y, _x.velocity.twist.linear.z, _x.velocity.twist.angular.x, _x.velocity.twist.angular.y, _x.velocity.twist.angular.z,) = _get_struct_6d().unpack(str[start:end])
      start = end
      end += 288
      self.velocity.covariance = _get_struct_36d().unpack(str[start:end])
      _x = self
      start = end
      end += 24
      (_x.linear_acceleration.x, _x.linear_acceleration.y, _x.linear_acceleration.z,) = _get_struct_3d().unpack(str[start:end])
      start = end
      end += 72
      self.linear_acceleration_covariance = _get_struct_9d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.polygon = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point()
        _x = val1
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        self.polygon.append(val1)
      _x = self
      start = end
      end += 42
      (_x.length, _x.length_quality, _x.width, _x.width_quality, _x.classification, _x.classification_quality, _x.existence_probability, _x.age_duration.secs, _x.age_duration.nsecs, _x.prediction_duration.secs, _x.prediction_duration.nsecs, _x.active,) = _get_struct_4fB2f4iB().unpack(str[start:end])
      self.active = bool(self.active)
      self.age_duration.canon()
      self.prediction_duration.canon()
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
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_H7d().pack(_x.id, _x.pose.pose.position.x, _x.pose.pose.position.y, _x.pose.pose.position.z, _x.pose.pose.orientation.x, _x.pose.pose.orientation.y, _x.pose.pose.orientation.z, _x.pose.pose.orientation.w))
      buff.write(self.pose.covariance.tostring())
      _x = self
      buff.write(_get_struct_6d().pack(_x.velocity.twist.linear.x, _x.velocity.twist.linear.y, _x.velocity.twist.linear.z, _x.velocity.twist.angular.x, _x.velocity.twist.angular.y, _x.velocity.twist.angular.z))
      buff.write(self.velocity.covariance.tostring())
      _x = self
      buff.write(_get_struct_3d().pack(_x.linear_acceleration.x, _x.linear_acceleration.y, _x.linear_acceleration.z))
      buff.write(self.linear_acceleration_covariance.tostring())
      length = len(self.polygon)
      buff.write(_struct_I.pack(length))
      for val1 in self.polygon:
        _x = val1
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
      _x = self
      buff.write(_get_struct_4fB2f4iB().pack(_x.length, _x.length_quality, _x.width, _x.width_quality, _x.classification, _x.classification_quality, _x.existence_probability, _x.age_duration.secs, _x.age_duration.nsecs, _x.prediction_duration.secs, _x.prediction_duration.nsecs, _x.active))
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
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.pose is None:
        self.pose = geometry_msgs.msg.PoseWithCovariance()
      if self.velocity is None:
        self.velocity = geometry_msgs.msg.TwistWithCovariance()
      if self.linear_acceleration is None:
        self.linear_acceleration = geometry_msgs.msg.Vector3()
      if self.polygon is None:
        self.polygon = None
      if self.age_duration is None:
        self.age_duration = genpy.Duration()
      if self.prediction_duration is None:
        self.prediction_duration = genpy.Duration()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 58
      (_x.id, _x.pose.pose.position.x, _x.pose.pose.position.y, _x.pose.pose.position.z, _x.pose.pose.orientation.x, _x.pose.pose.orientation.y, _x.pose.pose.orientation.z, _x.pose.pose.orientation.w,) = _get_struct_H7d().unpack(str[start:end])
      start = end
      end += 288
      self.pose.covariance = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=36)
      _x = self
      start = end
      end += 48
      (_x.velocity.twist.linear.x, _x.velocity.twist.linear.y, _x.velocity.twist.linear.z, _x.velocity.twist.angular.x, _x.velocity.twist.angular.y, _x.velocity.twist.angular.z,) = _get_struct_6d().unpack(str[start:end])
      start = end
      end += 288
      self.velocity.covariance = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=36)
      _x = self
      start = end
      end += 24
      (_x.linear_acceleration.x, _x.linear_acceleration.y, _x.linear_acceleration.z,) = _get_struct_3d().unpack(str[start:end])
      start = end
      end += 72
      self.linear_acceleration_covariance = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=9)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.polygon = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point()
        _x = val1
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        self.polygon.append(val1)
      _x = self
      start = end
      end += 42
      (_x.length, _x.length_quality, _x.width, _x.width_quality, _x.classification, _x.classification_quality, _x.existence_probability, _x.age_duration.secs, _x.age_duration.nsecs, _x.prediction_duration.secs, _x.prediction_duration.nsecs, _x.active,) = _get_struct_4fB2f4iB().unpack(str[start:end])
      self.active = bool(self.active)
      self.age_duration.canon()
      self.prediction_duration.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_36d = None
def _get_struct_36d():
    global _struct_36d
    if _struct_36d is None:
        _struct_36d = struct.Struct("<36d")
    return _struct_36d
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
_struct_4fB2f4iB = None
def _get_struct_4fB2f4iB():
    global _struct_4fB2f4iB
    if _struct_4fB2f4iB is None:
        _struct_4fB2f4iB = struct.Struct("<4fB2f4iB")
    return _struct_4fB2f4iB
_struct_6d = None
def _get_struct_6d():
    global _struct_6d
    if _struct_6d is None:
        _struct_6d = struct.Struct("<6d")
    return _struct_6d
_struct_9d = None
def _get_struct_9d():
    global _struct_9d
    if _struct_9d is None:
        _struct_9d = struct.Struct("<9d")
    return _struct_9d
_struct_H7d = None
def _get_struct_H7d():
    global _struct_H7d
    if _struct_H7d is None:
        _struct_H7d = struct.Struct("<H7d")
    return _struct_H7d
