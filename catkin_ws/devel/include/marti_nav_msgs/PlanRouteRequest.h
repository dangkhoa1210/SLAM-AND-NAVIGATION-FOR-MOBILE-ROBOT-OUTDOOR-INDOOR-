// Generated by gencpp from file marti_nav_msgs/PlanRouteRequest.msg
// DO NOT EDIT!


#ifndef MARTI_NAV_MSGS_MESSAGE_PLANROUTEREQUEST_H
#define MARTI_NAV_MSGS_MESSAGE_PLANROUTEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>

namespace marti_nav_msgs
{
template <class ContainerAllocator>
struct PlanRouteRequest_
{
  typedef PlanRouteRequest_<ContainerAllocator> Type;

  PlanRouteRequest_()
    : header()
    , waypoints()
    , plan_from_vehicle(false)  {
    }
  PlanRouteRequest_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , waypoints(_alloc)
    , plan_from_vehicle(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Pose_<ContainerAllocator> >::other >  _waypoints_type;
  _waypoints_type waypoints;

   typedef uint8_t _plan_from_vehicle_type;
  _plan_from_vehicle_type plan_from_vehicle;





  typedef boost::shared_ptr< ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PlanRouteRequest_

typedef ::marti_nav_msgs::PlanRouteRequest_<std::allocator<void> > PlanRouteRequest;

typedef boost::shared_ptr< ::marti_nav_msgs::PlanRouteRequest > PlanRouteRequestPtr;
typedef boost::shared_ptr< ::marti_nav_msgs::PlanRouteRequest const> PlanRouteRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator1> & lhs, const ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.waypoints == rhs.waypoints &&
    lhs.plan_from_vehicle == rhs.plan_from_vehicle;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator1> & lhs, const ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marti_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9f8dfd7f9c9e104ba05adfcc37f17c42";
  }

  static const char* value(const ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9f8dfd7f9c9e104bULL;
  static const uint64_t static_value2 = 0xa05adfcc37f17c42ULL;
};

template<class ContainerAllocator>
struct DataType< ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marti_nav_msgs/PlanRouteRequest";
  }

  static const char* value(const ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header         # the frame the request and response are\n"
"                               # referenced in\n"
"\n"
"geometry_msgs/Pose[] waypoints # series of points the route should pass through\n"
"bool plan_from_vehicle         # add the vehicle position as the first waypoint\n"
"\n"
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

  static const char* value(const ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.waypoints);
      stream.next(m.plan_from_vehicle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlanRouteRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marti_nav_msgs::PlanRouteRequest_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "waypoints[]" << std::endl;
    for (size_t i = 0; i < v.waypoints.size(); ++i)
    {
      s << indent << "  waypoints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.waypoints[i]);
    }
    s << indent << "plan_from_vehicle: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.plan_from_vehicle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARTI_NAV_MSGS_MESSAGE_PLANROUTEREQUEST_H
