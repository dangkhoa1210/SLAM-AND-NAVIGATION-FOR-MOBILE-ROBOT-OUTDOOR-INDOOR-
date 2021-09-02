// Generated by gencpp from file marti_nav_msgs/GetRouteResponse.msg
// DO NOT EDIT!


#ifndef MARTI_NAV_MSGS_MESSAGE_GETROUTERESPONSE_H
#define MARTI_NAV_MSGS_MESSAGE_GETROUTERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <marti_nav_msgs/Route.h>

namespace marti_nav_msgs
{
template <class ContainerAllocator>
struct GetRouteResponse_
{
  typedef GetRouteResponse_<ContainerAllocator> Type;

  GetRouteResponse_()
    : route()
    , success(false)
    , message()  {
    }
  GetRouteResponse_(const ContainerAllocator& _alloc)
    : route(_alloc)
    , success(false)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef  ::marti_nav_msgs::Route_<ContainerAllocator>  _route_type;
  _route_type route;

   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetRouteResponse_

typedef ::marti_nav_msgs::GetRouteResponse_<std::allocator<void> > GetRouteResponse;

typedef boost::shared_ptr< ::marti_nav_msgs::GetRouteResponse > GetRouteResponsePtr;
typedef boost::shared_ptr< ::marti_nav_msgs::GetRouteResponse const> GetRouteResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator1> & lhs, const ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator2> & rhs)
{
  return lhs.route == rhs.route &&
    lhs.success == rhs.success &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator1> & lhs, const ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marti_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e26b1588478f0a3ae6a88761fafe29f8";
  }

  static const char* value(const ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe26b1588478f0a3aULL;
  static const uint64_t static_value2 = 0xe6a88761fafe29f8ULL;
};

template<class ContainerAllocator>
struct DataType< ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marti_nav_msgs/GetRouteResponse";
  }

  static const char* value(const ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"marti_nav_msgs/Route route\n"
"\n"
"bool success     # indicate successful run of triggered service\n"
"string message   # informational, e.g. for error messages\n"
"\n"
"\n"
"================================================================================\n"
"MSG: marti_nav_msgs/Route\n"
"std_msgs/Header                header\n"
"RoutePoint[]                   route_points\n"
"marti_common_msgs/KeyValue[]   properties\n"
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
"MSG: marti_nav_msgs/RoutePoint\n"
"geometry_msgs/Pose           pose\n"
"string                       id         # unique identifier for this point\n"
"marti_common_msgs/KeyValue[] properties\n"
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
"\n"
"================================================================================\n"
"MSG: marti_common_msgs/KeyValue\n"
"# An arbitrary key-value pair\n"
"\n"
"string key\n"
"string value\n"
;
  }

  static const char* value(const ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.route);
      stream.next(m.success);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetRouteResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marti_nav_msgs::GetRouteResponse_<ContainerAllocator>& v)
  {
    s << indent << "route: ";
    s << std::endl;
    Printer< ::marti_nav_msgs::Route_<ContainerAllocator> >::stream(s, indent + "  ", v.route);
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARTI_NAV_MSGS_MESSAGE_GETROUTERESPONSE_H
