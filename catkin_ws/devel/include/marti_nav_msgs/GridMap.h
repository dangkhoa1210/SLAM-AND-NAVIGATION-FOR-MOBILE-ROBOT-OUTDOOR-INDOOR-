// Generated by gencpp from file marti_nav_msgs/GridMap.msg
// DO NOT EDIT!


#ifndef MARTI_NAV_MSGS_MESSAGE_GRIDMAP_H
#define MARTI_NAV_MSGS_MESSAGE_GRIDMAP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>
#include <sensor_msgs/Image.h>

namespace marti_nav_msgs
{
template <class ContainerAllocator>
struct GridMap_
{
  typedef GridMap_<ContainerAllocator> Type;

  GridMap_()
    : header()
    , top_left()
    , top_right()
    , bottom_right()
    , bottom_left()
    , map_names()
    , map_data()  {
    }
  GridMap_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , top_left(_alloc)
    , top_right(_alloc)
    , bottom_right(_alloc)
    , bottom_left(_alloc)
    , map_names(_alloc)
    , map_data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _top_left_type;
  _top_left_type top_left;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _top_right_type;
  _top_right_type top_right;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _bottom_right_type;
  _bottom_right_type bottom_right;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _bottom_left_type;
  _bottom_left_type bottom_left;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _map_names_type;
  _map_names_type map_names;

   typedef std::vector< ::sensor_msgs::Image_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::sensor_msgs::Image_<ContainerAllocator> >::other >  _map_data_type;
  _map_data_type map_data;





  typedef boost::shared_ptr< ::marti_nav_msgs::GridMap_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marti_nav_msgs::GridMap_<ContainerAllocator> const> ConstPtr;

}; // struct GridMap_

typedef ::marti_nav_msgs::GridMap_<std::allocator<void> > GridMap;

typedef boost::shared_ptr< ::marti_nav_msgs::GridMap > GridMapPtr;
typedef boost::shared_ptr< ::marti_nav_msgs::GridMap const> GridMapConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marti_nav_msgs::GridMap_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marti_nav_msgs::GridMap_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marti_nav_msgs::GridMap_<ContainerAllocator1> & lhs, const ::marti_nav_msgs::GridMap_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.top_left == rhs.top_left &&
    lhs.top_right == rhs.top_right &&
    lhs.bottom_right == rhs.bottom_right &&
    lhs.bottom_left == rhs.bottom_left &&
    lhs.map_names == rhs.map_names &&
    lhs.map_data == rhs.map_data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marti_nav_msgs::GridMap_<ContainerAllocator1> & lhs, const ::marti_nav_msgs::GridMap_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marti_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marti_nav_msgs::GridMap_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marti_nav_msgs::GridMap_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_nav_msgs::GridMap_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_nav_msgs::GridMap_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_nav_msgs::GridMap_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_nav_msgs::GridMap_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marti_nav_msgs::GridMap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3b88254125f8a40bfc5628e3d7439242";
  }

  static const char* value(const ::marti_nav_msgs::GridMap_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3b88254125f8a40bULL;
  static const uint64_t static_value2 = 0xfc5628e3d7439242ULL;
};

template<class ContainerAllocator>
struct DataType< ::marti_nav_msgs::GridMap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marti_nav_msgs/GridMap";
  }

  static const char* value(const ::marti_nav_msgs::GridMap_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marti_nav_msgs::GridMap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"\n"
"# Map extents in the header frame.\n"
"geometry_msgs/Point top_left\n"
"geometry_msgs/Point top_right\n"
"geometry_msgs/Point bottom_right\n"
"geometry_msgs/Point bottom_left\n"
"\n"
"# Map data layers\n"
"string[]            map_names\n"
"sensor_msgs/Image[] map_data\n"
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
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
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
;
  }

  static const char* value(const ::marti_nav_msgs::GridMap_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marti_nav_msgs::GridMap_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.top_left);
      stream.next(m.top_right);
      stream.next(m.bottom_right);
      stream.next(m.bottom_left);
      stream.next(m.map_names);
      stream.next(m.map_data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GridMap_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marti_nav_msgs::GridMap_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marti_nav_msgs::GridMap_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "top_left: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.top_left);
    s << indent << "top_right: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.top_right);
    s << indent << "bottom_right: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.bottom_right);
    s << indent << "bottom_left: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.bottom_left);
    s << indent << "map_names[]" << std::endl;
    for (size_t i = 0; i < v.map_names.size(); ++i)
    {
      s << indent << "  map_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.map_names[i]);
    }
    s << indent << "map_data[]" << std::endl;
    for (size_t i = 0; i < v.map_data.size(); ++i)
    {
      s << indent << "  map_data[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::sensor_msgs::Image_<ContainerAllocator> >::stream(s, indent + "    ", v.map_data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARTI_NAV_MSGS_MESSAGE_GRIDMAP_H
