// Generated by gencpp from file marti_nav_msgs/PathPlanning.msg
// DO NOT EDIT!


#ifndef MARTI_NAV_MSGS_MESSAGE_PATHPLANNING_H
#define MARTI_NAV_MSGS_MESSAGE_PATHPLANNING_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace marti_nav_msgs
{
template <class ContainerAllocator>
struct PathPlanning_
{
  typedef PathPlanning_<ContainerAllocator> Type;

  PathPlanning_()
    : header()
    , segment_type(0)
    , length(0.0)
    , start_speed(0.0)
    , end_speed(0.0)
    , startx(0.0)
    , starty(0.0)
    , endx(0.0)
    , endy(0.0)
    , theta0(0.0)
    , a1(0.0)
    , a2(0.0)
    , k0(0.0)
    , c1(0.0)
    , c2(0.0)
    , behavior(0)
    , creep(0)
    , acc(0)
    , reverse(0)
    , vehicle_track(0)
    , transmitted(false)
    , auxTransmitted(false)
    , theta_end(0.0)
    , k_end(0.0)
    , seg_len(0)
    , speed_limit(0.0)
    , max_error(0.0)
    , max_smooth(0.0)
    , max_curv(0.0)
    , possible_points(0)
    , bExitSegment(false)  {
    }
  PathPlanning_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , segment_type(0)
    , length(0.0)
    , start_speed(0.0)
    , end_speed(0.0)
    , startx(0.0)
    , starty(0.0)
    , endx(0.0)
    , endy(0.0)
    , theta0(0.0)
    , a1(0.0)
    , a2(0.0)
    , k0(0.0)
    , c1(0.0)
    , c2(0.0)
    , behavior(0)
    , creep(0)
    , acc(0)
    , reverse(0)
    , vehicle_track(0)
    , transmitted(false)
    , auxTransmitted(false)
    , theta_end(0.0)
    , k_end(0.0)
    , seg_len(0)
    , speed_limit(0.0)
    , max_error(0.0)
    , max_smooth(0.0)
    , max_curv(0.0)
    , possible_points(0)
    , bExitSegment(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _segment_type_type;
  _segment_type_type segment_type;

   typedef float _length_type;
  _length_type length;

   typedef float _start_speed_type;
  _start_speed_type start_speed;

   typedef float _end_speed_type;
  _end_speed_type end_speed;

   typedef float _startx_type;
  _startx_type startx;

   typedef float _starty_type;
  _starty_type starty;

   typedef float _endx_type;
  _endx_type endx;

   typedef float _endy_type;
  _endy_type endy;

   typedef float _theta0_type;
  _theta0_type theta0;

   typedef float _a1_type;
  _a1_type a1;

   typedef float _a2_type;
  _a2_type a2;

   typedef float _k0_type;
  _k0_type k0;

   typedef float _c1_type;
  _c1_type c1;

   typedef float _c2_type;
  _c2_type c2;

   typedef int32_t _behavior_type;
  _behavior_type behavior;

   typedef int32_t _creep_type;
  _creep_type creep;

   typedef int32_t _acc_type;
  _acc_type acc;

   typedef int32_t _reverse_type;
  _reverse_type reverse;

   typedef int32_t _vehicle_track_type;
  _vehicle_track_type vehicle_track;

   typedef uint8_t _transmitted_type;
  _transmitted_type transmitted;

   typedef uint8_t _auxTransmitted_type;
  _auxTransmitted_type auxTransmitted;

   typedef float _theta_end_type;
  _theta_end_type theta_end;

   typedef float _k_end_type;
  _k_end_type k_end;

   typedef int32_t _seg_len_type;
  _seg_len_type seg_len;

   typedef float _speed_limit_type;
  _speed_limit_type speed_limit;

   typedef float _max_error_type;
  _max_error_type max_error;

   typedef float _max_smooth_type;
  _max_smooth_type max_smooth;

   typedef float _max_curv_type;
  _max_curv_type max_curv;

   typedef int32_t _possible_points_type;
  _possible_points_type possible_points;

   typedef uint8_t _bExitSegment_type;
  _bExitSegment_type bExitSegment;





  typedef boost::shared_ptr< ::marti_nav_msgs::PathPlanning_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marti_nav_msgs::PathPlanning_<ContainerAllocator> const> ConstPtr;

}; // struct PathPlanning_

typedef ::marti_nav_msgs::PathPlanning_<std::allocator<void> > PathPlanning;

typedef boost::shared_ptr< ::marti_nav_msgs::PathPlanning > PathPlanningPtr;
typedef boost::shared_ptr< ::marti_nav_msgs::PathPlanning const> PathPlanningConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marti_nav_msgs::PathPlanning_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marti_nav_msgs::PathPlanning_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marti_nav_msgs::PathPlanning_<ContainerAllocator1> & lhs, const ::marti_nav_msgs::PathPlanning_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.segment_type == rhs.segment_type &&
    lhs.length == rhs.length &&
    lhs.start_speed == rhs.start_speed &&
    lhs.end_speed == rhs.end_speed &&
    lhs.startx == rhs.startx &&
    lhs.starty == rhs.starty &&
    lhs.endx == rhs.endx &&
    lhs.endy == rhs.endy &&
    lhs.theta0 == rhs.theta0 &&
    lhs.a1 == rhs.a1 &&
    lhs.a2 == rhs.a2 &&
    lhs.k0 == rhs.k0 &&
    lhs.c1 == rhs.c1 &&
    lhs.c2 == rhs.c2 &&
    lhs.behavior == rhs.behavior &&
    lhs.creep == rhs.creep &&
    lhs.acc == rhs.acc &&
    lhs.reverse == rhs.reverse &&
    lhs.vehicle_track == rhs.vehicle_track &&
    lhs.transmitted == rhs.transmitted &&
    lhs.auxTransmitted == rhs.auxTransmitted &&
    lhs.theta_end == rhs.theta_end &&
    lhs.k_end == rhs.k_end &&
    lhs.seg_len == rhs.seg_len &&
    lhs.speed_limit == rhs.speed_limit &&
    lhs.max_error == rhs.max_error &&
    lhs.max_smooth == rhs.max_smooth &&
    lhs.max_curv == rhs.max_curv &&
    lhs.possible_points == rhs.possible_points &&
    lhs.bExitSegment == rhs.bExitSegment;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marti_nav_msgs::PathPlanning_<ContainerAllocator1> & lhs, const ::marti_nav_msgs::PathPlanning_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marti_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marti_nav_msgs::PathPlanning_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marti_nav_msgs::PathPlanning_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_nav_msgs::PathPlanning_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_nav_msgs::PathPlanning_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_nav_msgs::PathPlanning_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_nav_msgs::PathPlanning_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marti_nav_msgs::PathPlanning_<ContainerAllocator> >
{
  static const char* value()
  {
    return "275fd723a6af7fd7f102a3f07eca0829";
  }

  static const char* value(const ::marti_nav_msgs::PathPlanning_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x275fd723a6af7fd7ULL;
  static const uint64_t static_value2 = 0xf102a3f07eca0829ULL;
};

template<class ContainerAllocator>
struct DataType< ::marti_nav_msgs::PathPlanning_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marti_nav_msgs/PathPlanning";
  }

  static const char* value(const ::marti_nav_msgs::PathPlanning_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marti_nav_msgs::PathPlanning_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"\n"
"int32   segment_type    # Type of path segment\n"
"float32 length          # Length of path segment\n"
"float32 start_speed     # Desired speed at start of path segment\n"
"float32 end_speed       # Desired speed at end of path segment\n"
"float32 startx          # Starting x-coordinate of the vehicle\n"
"float32 starty          # Starting y-coordinate of the vehicle\n"
"float32 endx            # Ending x-coordinate of the vehicle\n"
"float32 endy            # Ending y-coordinate of the vehicle\n"
"float32 theta0          # theta0 (constant) parameter for initial heading\n"
"float32 a1              # a1 (linear) parameter for the x-y track\n"
"float32 a2              # a2 (quadratric) parameter for the x-y track\n"
"float32 k0              # k0 (constant) parameter for the curvature\n"
"float32 c1              # c1 (linear) parameter for the curvature\n"
"float32 c2              # c2 (quadratic) parameter for the curvature\n"
"int32 behavior          # Type of behavior for the segment\n"
"int32 creep             # Whether we should be in creep mode of not (0-No, 1-Yes)\n"
"int32 acc               # Whether ACC Override is on (0-Normal ACC, 1-Override ACC)\n"
"int32 reverse           # Whether we should be in reverse or not (0-No, 1-Yes)\n"
"int32 vehicle_track     # Whether we are tracking a vehicle (0-No, 1-Yes)\n"
"\n"
"# The following items are used in Intelligence, but won't be transmitted with\n"
"# the segments to C&C\n"
"\n"
"bool transmitted        # Flag to indicate whether the path segment has been\n"
"                        # transmitted\n"
"\n"
"bool auxTransmitted\n"
"\n"
"float32 theta_end       # End heading (provided explicitly)\n"
"float32 k_end           # End curvature\n"
"int32 seg_len           # Number of route points used to calculate the segment\n"
"float32 speed_limit     # Minimum speed of route points used (comes from MDF or -1)\n"
"\n"
"# Other variables\n"
"float32 max_error\n"
"float32 max_smooth\n"
"float32 max_curv\n"
"int32 possible_points\n"
"bool bExitSegment\n"
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
;
  }

  static const char* value(const ::marti_nav_msgs::PathPlanning_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marti_nav_msgs::PathPlanning_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.segment_type);
      stream.next(m.length);
      stream.next(m.start_speed);
      stream.next(m.end_speed);
      stream.next(m.startx);
      stream.next(m.starty);
      stream.next(m.endx);
      stream.next(m.endy);
      stream.next(m.theta0);
      stream.next(m.a1);
      stream.next(m.a2);
      stream.next(m.k0);
      stream.next(m.c1);
      stream.next(m.c2);
      stream.next(m.behavior);
      stream.next(m.creep);
      stream.next(m.acc);
      stream.next(m.reverse);
      stream.next(m.vehicle_track);
      stream.next(m.transmitted);
      stream.next(m.auxTransmitted);
      stream.next(m.theta_end);
      stream.next(m.k_end);
      stream.next(m.seg_len);
      stream.next(m.speed_limit);
      stream.next(m.max_error);
      stream.next(m.max_smooth);
      stream.next(m.max_curv);
      stream.next(m.possible_points);
      stream.next(m.bExitSegment);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PathPlanning_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marti_nav_msgs::PathPlanning_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marti_nav_msgs::PathPlanning_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "segment_type: ";
    Printer<int32_t>::stream(s, indent + "  ", v.segment_type);
    s << indent << "length: ";
    Printer<float>::stream(s, indent + "  ", v.length);
    s << indent << "start_speed: ";
    Printer<float>::stream(s, indent + "  ", v.start_speed);
    s << indent << "end_speed: ";
    Printer<float>::stream(s, indent + "  ", v.end_speed);
    s << indent << "startx: ";
    Printer<float>::stream(s, indent + "  ", v.startx);
    s << indent << "starty: ";
    Printer<float>::stream(s, indent + "  ", v.starty);
    s << indent << "endx: ";
    Printer<float>::stream(s, indent + "  ", v.endx);
    s << indent << "endy: ";
    Printer<float>::stream(s, indent + "  ", v.endy);
    s << indent << "theta0: ";
    Printer<float>::stream(s, indent + "  ", v.theta0);
    s << indent << "a1: ";
    Printer<float>::stream(s, indent + "  ", v.a1);
    s << indent << "a2: ";
    Printer<float>::stream(s, indent + "  ", v.a2);
    s << indent << "k0: ";
    Printer<float>::stream(s, indent + "  ", v.k0);
    s << indent << "c1: ";
    Printer<float>::stream(s, indent + "  ", v.c1);
    s << indent << "c2: ";
    Printer<float>::stream(s, indent + "  ", v.c2);
    s << indent << "behavior: ";
    Printer<int32_t>::stream(s, indent + "  ", v.behavior);
    s << indent << "creep: ";
    Printer<int32_t>::stream(s, indent + "  ", v.creep);
    s << indent << "acc: ";
    Printer<int32_t>::stream(s, indent + "  ", v.acc);
    s << indent << "reverse: ";
    Printer<int32_t>::stream(s, indent + "  ", v.reverse);
    s << indent << "vehicle_track: ";
    Printer<int32_t>::stream(s, indent + "  ", v.vehicle_track);
    s << indent << "transmitted: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.transmitted);
    s << indent << "auxTransmitted: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.auxTransmitted);
    s << indent << "theta_end: ";
    Printer<float>::stream(s, indent + "  ", v.theta_end);
    s << indent << "k_end: ";
    Printer<float>::stream(s, indent + "  ", v.k_end);
    s << indent << "seg_len: ";
    Printer<int32_t>::stream(s, indent + "  ", v.seg_len);
    s << indent << "speed_limit: ";
    Printer<float>::stream(s, indent + "  ", v.speed_limit);
    s << indent << "max_error: ";
    Printer<float>::stream(s, indent + "  ", v.max_error);
    s << indent << "max_smooth: ";
    Printer<float>::stream(s, indent + "  ", v.max_smooth);
    s << indent << "max_curv: ";
    Printer<float>::stream(s, indent + "  ", v.max_curv);
    s << indent << "possible_points: ";
    Printer<int32_t>::stream(s, indent + "  ", v.possible_points);
    s << indent << "bExitSegment: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.bExitSegment);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARTI_NAV_MSGS_MESSAGE_PATHPLANNING_H
