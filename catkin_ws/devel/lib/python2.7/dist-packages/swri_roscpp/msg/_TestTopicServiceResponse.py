# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from swri_roscpp/TestTopicServiceResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy
import marti_common_msgs.msg

class TestTopicServiceResponse(genpy.Message):
  _md5sum = "ffa572c724c22095570f217a11ef9386"
  _type = "swri_roscpp/TestTopicServiceResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# Test message used only for swri_roscpp unit tests
# Messages for TopicServices would normally be generated by the add_topic_service_files CMake macro
marti_common_msgs/ServiceHeader srv_header
int32 response_value

================================================================================
MSG: marti_common_msgs/ServiceHeader
# This message contains all of the data filled in automatically by the service system
# It is required in each request and response message to be named srv_header
time stamp
uint32 sequence
string sender
bool result # Used to indicate if the service request was successful or not
"""
  __slots__ = ['srv_header','response_value']
  _slot_types = ['marti_common_msgs/ServiceHeader','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       srv_header,response_value

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(TestTopicServiceResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.srv_header is None:
        self.srv_header = marti_common_msgs.msg.ServiceHeader()
      if self.response_value is None:
        self.response_value = 0
    else:
      self.srv_header = marti_common_msgs.msg.ServiceHeader()
      self.response_value = 0

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
      buff.write(_get_struct_3I().pack(_x.srv_header.stamp.secs, _x.srv_header.stamp.nsecs, _x.srv_header.sequence))
      _x = self.srv_header.sender
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_Bi().pack(_x.srv_header.result, _x.response_value))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.srv_header is None:
        self.srv_header = marti_common_msgs.msg.ServiceHeader()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.srv_header.stamp.secs, _x.srv_header.stamp.nsecs, _x.srv_header.sequence,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.srv_header.sender = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.srv_header.sender = str[start:end]
      _x = self
      start = end
      end += 5
      (_x.srv_header.result, _x.response_value,) = _get_struct_Bi().unpack(str[start:end])
      self.srv_header.result = bool(self.srv_header.result)
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
      buff.write(_get_struct_3I().pack(_x.srv_header.stamp.secs, _x.srv_header.stamp.nsecs, _x.srv_header.sequence))
      _x = self.srv_header.sender
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_Bi().pack(_x.srv_header.result, _x.response_value))
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
      if self.srv_header is None:
        self.srv_header = marti_common_msgs.msg.ServiceHeader()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.srv_header.stamp.secs, _x.srv_header.stamp.nsecs, _x.srv_header.sequence,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.srv_header.sender = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.srv_header.sender = str[start:end]
      _x = self
      start = end
      end += 5
      (_x.srv_header.result, _x.response_value,) = _get_struct_Bi().unpack(str[start:end])
      self.srv_header.result = bool(self.srv_header.result)
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
_struct_Bi = None
def _get_struct_Bi():
    global _struct_Bi
    if _struct_Bi is None:
        _struct_Bi = struct.Struct("<Bi")
    return _struct_Bi
