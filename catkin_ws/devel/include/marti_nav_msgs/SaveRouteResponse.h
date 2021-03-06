// Generated by gencpp from file marti_nav_msgs/SaveRouteResponse.msg
// DO NOT EDIT!


#ifndef MARTI_NAV_MSGS_MESSAGE_SAVEROUTERESPONSE_H
#define MARTI_NAV_MSGS_MESSAGE_SAVEROUTERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace marti_nav_msgs
{
template <class ContainerAllocator>
struct SaveRouteResponse_
{
  typedef SaveRouteResponse_<ContainerAllocator> Type;

  SaveRouteResponse_()
    : success(false)
    , message()  {
    }
  SaveRouteResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SaveRouteResponse_

typedef ::marti_nav_msgs::SaveRouteResponse_<std::allocator<void> > SaveRouteResponse;

typedef boost::shared_ptr< ::marti_nav_msgs::SaveRouteResponse > SaveRouteResponsePtr;
typedef boost::shared_ptr< ::marti_nav_msgs::SaveRouteResponse const> SaveRouteResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator1> & lhs, const ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator1> & lhs, const ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marti_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "937c9679a518e3a18d831e57125ea522";
  }

  static const char* value(const ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x937c9679a518e3a1ULL;
  static const uint64_t static_value2 = 0x8d831e57125ea522ULL;
};

template<class ContainerAllocator>
struct DataType< ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marti_nav_msgs/SaveRouteResponse";
  }

  static const char* value(const ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success # indicate successful run of triggered service\n"
"string message # informational, e. g. for error messages\n"
"\n"
;
  }

  static const char* value(const ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SaveRouteResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marti_nav_msgs::SaveRouteResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARTI_NAV_MSGS_MESSAGE_SAVEROUTERESPONSE_H
