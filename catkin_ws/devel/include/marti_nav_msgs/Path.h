// Generated by gencpp from file marti_nav_msgs/Path.msg
// DO NOT EDIT!


#ifndef MARTI_NAV_MSGS_MESSAGE_PATH_H
#define MARTI_NAV_MSGS_MESSAGE_PATH_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <marti_nav_msgs/PathPoint.h>

namespace marti_nav_msgs
{
template <class ContainerAllocator>
struct Path_
{
  typedef Path_<ContainerAllocator> Type;

  Path_()
    : header()
    , points()
    , in_reverse(false)  {
    }
  Path_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , points(_alloc)
    , in_reverse(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::marti_nav_msgs::PathPoint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::marti_nav_msgs::PathPoint_<ContainerAllocator> >::other >  _points_type;
  _points_type points;

   typedef uint8_t _in_reverse_type;
  _in_reverse_type in_reverse;





  typedef boost::shared_ptr< ::marti_nav_msgs::Path_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marti_nav_msgs::Path_<ContainerAllocator> const> ConstPtr;

}; // struct Path_

typedef ::marti_nav_msgs::Path_<std::allocator<void> > Path;

typedef boost::shared_ptr< ::marti_nav_msgs::Path > PathPtr;
typedef boost::shared_ptr< ::marti_nav_msgs::Path const> PathConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marti_nav_msgs::Path_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marti_nav_msgs::Path_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marti_nav_msgs::Path_<ContainerAllocator1> & lhs, const ::marti_nav_msgs::Path_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.points == rhs.points &&
    lhs.in_reverse == rhs.in_reverse;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marti_nav_msgs::Path_<ContainerAllocator1> & lhs, const ::marti_nav_msgs::Path_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marti_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marti_nav_msgs::Path_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marti_nav_msgs::Path_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_nav_msgs::Path_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_nav_msgs::Path_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_nav_msgs::Path_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_nav_msgs::Path_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marti_nav_msgs::Path_<ContainerAllocator> >
{
  static const char* value()
  {
    return "da4d7292371593c2128396b6c7229d46";
  }

  static const char* value(const ::marti_nav_msgs::Path_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xda4d7292371593c2ULL;
  static const uint64_t static_value2 = 0x128396b6c7229d46ULL;
};

template<class ContainerAllocator>
struct DataType< ::marti_nav_msgs::Path_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marti_nav_msgs/Path";
  }

  static const char* value(const ::marti_nav_msgs::Path_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marti_nav_msgs::Path_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header                         header\n"
"PathPoint[]                    points\n"
"bool in_reverse\n"
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
"MSG: marti_nav_msgs/PathPoint\n"
"float64 x\n"
"float64 y\n"
"float32 yaw   # In radians\n"
"float32 speed # In m/s\n"
;
  }

  static const char* value(const ::marti_nav_msgs::Path_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marti_nav_msgs::Path_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.points);
      stream.next(m.in_reverse);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Path_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marti_nav_msgs::Path_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marti_nav_msgs::Path_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::marti_nav_msgs::PathPoint_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
    s << indent << "in_reverse: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.in_reverse);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARTI_NAV_MSGS_MESSAGE_PATH_H
