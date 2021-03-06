// Generated by gencpp from file marti_visualization_msgs/TexturedMarker.msg
// DO NOT EDIT!


#ifndef MARTI_VISUALIZATION_MSGS_MESSAGE_TEXTUREDMARKER_H
#define MARTI_VISUALIZATION_MSGS_MESSAGE_TEXTUREDMARKER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <sensor_msgs/Image.h>
#include <geometry_msgs/Pose.h>

namespace marti_visualization_msgs
{
template <class ContainerAllocator>
struct TexturedMarker_
{
  typedef TexturedMarker_<ContainerAllocator> Type;

  TexturedMarker_()
    : header()
    , ns()
    , id(0)
    , action(0)
    , lifetime()
    , image()
    , pose()
    , resolution(0.0)
    , alpha(0.0)  {
    }
  TexturedMarker_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ns(_alloc)
    , id(0)
    , action(0)
    , lifetime()
    , image(_alloc)
    , pose(_alloc)
    , resolution(0.0)
    , alpha(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _ns_type;
  _ns_type ns;

   typedef int32_t _id_type;
  _id_type id;

   typedef int32_t _action_type;
  _action_type action;

   typedef ros::Duration _lifetime_type;
  _lifetime_type lifetime;

   typedef  ::sensor_msgs::Image_<ContainerAllocator>  _image_type;
  _image_type image;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef double _resolution_type;
  _resolution_type resolution;

   typedef float _alpha_type;
  _alpha_type alpha;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(ADD)
  #undef ADD
#endif
#if defined(_WIN32) && defined(MODIFY)
  #undef MODIFY
#endif
#if defined(_WIN32) && defined(DELETE)
  #undef DELETE
#endif

  enum {
    ADD = 0u,
    MODIFY = 0u,
    DELETE = 2u,
  };


  typedef boost::shared_ptr< ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator> const> ConstPtr;

}; // struct TexturedMarker_

typedef ::marti_visualization_msgs::TexturedMarker_<std::allocator<void> > TexturedMarker;

typedef boost::shared_ptr< ::marti_visualization_msgs::TexturedMarker > TexturedMarkerPtr;
typedef boost::shared_ptr< ::marti_visualization_msgs::TexturedMarker const> TexturedMarkerConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator1> & lhs, const ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ns == rhs.ns &&
    lhs.id == rhs.id &&
    lhs.action == rhs.action &&
    lhs.lifetime == rhs.lifetime &&
    lhs.image == rhs.image &&
    lhs.pose == rhs.pose &&
    lhs.resolution == rhs.resolution &&
    lhs.alpha == rhs.alpha;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator1> & lhs, const ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marti_visualization_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cabc14f2922415c46794a05046c577fc";
  }

  static const char* value(const ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcabc14f2922415c4ULL;
  static const uint64_t static_value2 = 0x6794a05046c577fcULL;
};

template<class ContainerAllocator>
struct DataType< ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marti_visualization_msgs/TexturedMarker";
  }

  static const char* value(const ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 ADD=0\n"
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

  static const char* value(const ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ns);
      stream.next(m.id);
      stream.next(m.action);
      stream.next(m.lifetime);
      stream.next(m.image);
      stream.next(m.pose);
      stream.next(m.resolution);
      stream.next(m.alpha);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TexturedMarker_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marti_visualization_msgs::TexturedMarker_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ns: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.ns);
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "action: ";
    Printer<int32_t>::stream(s, indent + "  ", v.action);
    s << indent << "lifetime: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.lifetime);
    s << indent << "image: ";
    s << std::endl;
    Printer< ::sensor_msgs::Image_<ContainerAllocator> >::stream(s, indent + "  ", v.image);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "resolution: ";
    Printer<double>::stream(s, indent + "  ", v.resolution);
    s << indent << "alpha: ";
    Printer<float>::stream(s, indent + "  ", v.alpha);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARTI_VISUALIZATION_MSGS_MESSAGE_TEXTUREDMARKER_H
