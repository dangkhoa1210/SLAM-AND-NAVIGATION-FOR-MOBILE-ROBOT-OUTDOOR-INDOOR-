// Generated by gencpp from file marti_visualization_msgs/TexturedMarkerArray.msg
// DO NOT EDIT!


#ifndef MARTI_VISUALIZATION_MSGS_MESSAGE_TEXTUREDMARKERARRAY_H
#define MARTI_VISUALIZATION_MSGS_MESSAGE_TEXTUREDMARKERARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <marti_visualization_msgs/TexturedMarker.h>

namespace marti_visualization_msgs
{
template <class ContainerAllocator>
struct TexturedMarkerArray_
{
  typedef TexturedMarkerArray_<ContainerAllocator> Type;

  TexturedMarkerArray_()
    : markers()  {
    }
  TexturedMarkerArray_(const ContainerAllocator& _alloc)
    : markers(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator> >::other >  _markers_type;
  _markers_type markers;





  typedef boost::shared_ptr< ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator> const> ConstPtr;

}; // struct TexturedMarkerArray_

typedef ::marti_visualization_msgs::TexturedMarkerArray_<std::allocator<void> > TexturedMarkerArray;

typedef boost::shared_ptr< ::marti_visualization_msgs::TexturedMarkerArray > TexturedMarkerArrayPtr;
typedef boost::shared_ptr< ::marti_visualization_msgs::TexturedMarkerArray const> TexturedMarkerArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator1> & lhs, const ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator2> & rhs)
{
  return lhs.markers == rhs.markers;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator1> & lhs, const ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marti_visualization_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9a529a0eaa0a63d94d3445d26d3fe59a";
  }

  static const char* value(const ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9a529a0eaa0a63d9ULL;
  static const uint64_t static_value2 = 0x4d3445d26d3fe59aULL;
};

template<class ContainerAllocator>
struct DataType< ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marti_visualization_msgs/TexturedMarkerArray";
  }

  static const char* value(const ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "TexturedMarker[] markers\n"
"\n"
"================================================================================\n"
"MSG: marti_visualization_msgs/TexturedMarker\n"
"uint8 ADD=0\n"
"uint8 MODIFY=0\n"
"uint8 DELETE=2\n"
"\n"
"std_msgs/Header     header\n"
"\n"
"string              ns           # Namespace to place this object in... used in\n"
"                                 # conjunction with id to create a unique name\n"
"                                 # for the object.\n"
"\n"
"int32               id\n"
"int32               action       # 0 add/modify an object, 2 deletes an object\n"
"\n"
"duration            lifetime     # How long the object should last before being\n"
"                                 # automatically deleted.  0 means forever\n"
"\n"
"sensor_msgs/Image   image\n"
"geometry_msgs/Pose  pose         # The pose of the image center with respect to\n"
"                                 # the header frame.\n"
"\n"
"float64             resolution   # The pixel scale in meters.\n"
"\n"
"float32             alpha        # The overall alpha transparency to display the\n"
"                                 # marker with.\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/Image\n"
"# This message contains an uncompressed image\n"
"# (0, 0) is at top-left corner of image\n"
"#\n"
"\n"
"Header header        # Header timestamp should be acquisition time of image\n"
"                     # Header frame_id should be optical frame of camera\n"
"                     # origin of frame should be optical center of camera\n"
"                     # +x should point to the right in the image\n"
"                     # +y should point down in the image\n"
"                     # +z should point into to plane of the image\n"
"                     # If the frame_id here and the frame_id of the CameraInfo\n"
"                     # message associated with the image conflict\n"
"                     # the behavior is undefined\n"
"\n"
"uint32 height         # image height, that is, number of rows\n"
"uint32 width          # image width, that is, number of columns\n"
"\n"
"# The legal values for encoding are in file src/image_encodings.cpp\n"
"# If you want to standardize a new string format, join\n"
"# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n"
"\n"
"string encoding       # Encoding of pixels -- channel meaning, ordering, size\n"
"                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n"
"\n"
"uint8 is_bigendian    # is this data bigendian?\n"
"uint32 step           # Full row length in bytes\n"
"uint8[] data          # actual matrix data, size is (step * rows)\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.markers);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TexturedMarkerArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marti_visualization_msgs::TexturedMarkerArray_<ContainerAllocator>& v)
  {
    s << indent << "markers[]" << std::endl;
    for (size_t i = 0; i < v.markers.size(); ++i)
    {
      s << indent << "  markers[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator> >::stream(s, indent + "    ", v.markers[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARTI_VISUALIZATION_MSGS_MESSAGE_TEXTUREDMARKERARRAY_H
