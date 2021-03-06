// Generated by gencpp from file marti_nav_msgs/DeleteRoute.msg
// DO NOT EDIT!


#ifndef MARTI_NAV_MSGS_MESSAGE_DELETEROUTE_H
#define MARTI_NAV_MSGS_MESSAGE_DELETEROUTE_H

#include <ros/service_traits.h>


#include <marti_nav_msgs/DeleteRouteRequest.h>
#include <marti_nav_msgs/DeleteRouteResponse.h>


namespace marti_nav_msgs
{

struct DeleteRoute
{

typedef DeleteRouteRequest Request;
typedef DeleteRouteResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DeleteRoute
} // namespace marti_nav_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::marti_nav_msgs::DeleteRoute > {
  static const char* value()
  {
    return "9f9e2ffb5f3c35330346e06164f26526";
  }

  static const char* value(const ::marti_nav_msgs::DeleteRoute&) { return value(); }
};

template<>
struct DataType< ::marti_nav_msgs::DeleteRoute > {
  static const char* value()
  {
    return "marti_nav_msgs/DeleteRoute";
  }

  static const char* value(const ::marti_nav_msgs::DeleteRoute&) { return value(); }
};


// service_traits::MD5Sum< ::marti_nav_msgs::DeleteRouteRequest> should match
// service_traits::MD5Sum< ::marti_nav_msgs::DeleteRoute >
template<>
struct MD5Sum< ::marti_nav_msgs::DeleteRouteRequest>
{
  static const char* value()
  {
    return MD5Sum< ::marti_nav_msgs::DeleteRoute >::value();
  }
  static const char* value(const ::marti_nav_msgs::DeleteRouteRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::marti_nav_msgs::DeleteRouteRequest> should match
// service_traits::DataType< ::marti_nav_msgs::DeleteRoute >
template<>
struct DataType< ::marti_nav_msgs::DeleteRouteRequest>
{
  static const char* value()
  {
    return DataType< ::marti_nav_msgs::DeleteRoute >::value();
  }
  static const char* value(const ::marti_nav_msgs::DeleteRouteRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::marti_nav_msgs::DeleteRouteResponse> should match
// service_traits::MD5Sum< ::marti_nav_msgs::DeleteRoute >
template<>
struct MD5Sum< ::marti_nav_msgs::DeleteRouteResponse>
{
  static const char* value()
  {
    return MD5Sum< ::marti_nav_msgs::DeleteRoute >::value();
  }
  static const char* value(const ::marti_nav_msgs::DeleteRouteResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::marti_nav_msgs::DeleteRouteResponse> should match
// service_traits::DataType< ::marti_nav_msgs::DeleteRoute >
template<>
struct DataType< ::marti_nav_msgs::DeleteRouteResponse>
{
  static const char* value()
  {
    return DataType< ::marti_nav_msgs::DeleteRoute >::value();
  }
  static const char* value(const ::marti_nav_msgs::DeleteRouteResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MARTI_NAV_MSGS_MESSAGE_DELETEROUTE_H
