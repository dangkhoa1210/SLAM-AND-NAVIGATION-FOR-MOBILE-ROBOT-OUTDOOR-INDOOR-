# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from marti_sensor_msgs/WheelEncoderSet.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import marti_sensor_msgs.msg
import std_msgs.msg

class WheelEncoderSet(genpy.Message):
  _md5sum = "a1169b74ddf14d2e1ad1aa65311182d9"
  _type = "marti_sensor_msgs/WheelEncoderSet"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """std_msgs/Header header

marti_sensor_msgs/WheelEncoder[] encoders

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
MSG: marti_sensor_msgs/WheelEncoder
# Frequency from wheel encoder
#  If directional (below) is True, positive frequency means forward, and
#   negative frequency means backward.
#  If directional is False, frequency is non-negative and has no directional
#   information
float64 frequency

# True if frequency sign is significant; false else
bool directional

# ID of the wheel with which this data is associated
uint8 id"""
  __slots__ = ['header','encoders']
  _slot_types = ['std_msgs/Header','marti_sensor_msgs/WheelEncoder[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,encoders

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(WheelEncoderSet, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.encoders is None:
        self.encoders = []
    else:
      self.header = std_msgs.msg.Header()
      self.encoders = []

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
      length = len(self.encoders)
      buff.write(_struct_I.pack(length))
      for val1 in self.encoders:
        _x = val1
        buff.write(_get_struct_d2B().pack(_x.frequency, _x.directional, _x.id))
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
      if self.encoders is None:
        self.encoders = None
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
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.encoders = []
      for i in range(0, length):
        val1 = marti_sensor_msgs.msg.WheelEncoder()
        _x = val1
        start = end
        end += 10
        (_x.frequency, _x.directional, _x.id,) = _get_struct_d2B().unpack(str[start:end])
        val1.directional = bool(val1.directional)
        self.encoders.append(val1)
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
      length = len(self.encoders)
      buff.write(_struct_I.pack(length))
      for val1 in self.encoders:
        _x = val1
        buff.write(_get_struct_d2B().pack(_x.frequency, _x.directional, _x.id))
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
      if self.encoders is None:
        self.encoders = None
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
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.encoders = []
      for i in range(0, length):
        val1 = marti_sensor_msgs.msg.WheelEncoder()
        _x = val1
        start = end
        end += 10
        (_x.frequency, _x.directional, _x.id,) = _get_struct_d2B().unpack(str[start:end])
        val1.directional = bool(val1.directional)
        self.encoders.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_d2B = None
def _get_struct_d2B():
    global _struct_d2B
    if _struct_d2B is None:
        _struct_d2B = struct.Struct("<d2B")
    return _struct_d2B
