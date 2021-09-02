// Generated by gencpp from file marti_nav_msgs/PlanRoute.msg
// DO NOT EDIT!


#ifndef MARTI_NAV_MSGS_MESSAGE_PLANROUTE_H
#define MARTI_NAV_MSGS_MESSAGE_PLANROUTE_H

#include <ros/service_traits.h>


#include <marti_nav_msgs/PlanRouteRequest.h>
#include <marti_nav_msgs/PlanRouteResponse.h>


namespace marti_nav_msgs
{

struct PlanRoute
{

typedef PlanRouteRequest Request;
typedef PlanRouteResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PlanRoute
} // namespace marti_nav_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::marti_nav_msgs::PlanRoute > {
  static const char* value()
  {
    return "fc2df8428924c01b72b355fa8fd38799";
  }

  static const char* value(const ::marti_nav_msgs::PlanRoute&) { return value(); }
};

template<>
struct DataType< ::marti_nav_msgs::PlanRoute > {
  static const char* value()
  {
    return "marti_nav_msgs/PlanRoute";
  }

  static const char* value(const ::marti_nav_msgs::PlanRoute&) { return value(); }
};


// service_traits::MD5Sum< ::marti_nav_msgs::PlanRouteRequest> should match
// service_traits::MD5Sum< ::marti_nav_msgs::PlanRoute >
template<>
struct MD5Sum< ::marti_nav_msgs::PlanRouteRequest>
{
  static const char* value()
  {
    return MD5Sum< ::marti_nav_msgs::PlanRoute >::value();
  }
  static const char* value(const ::marti_nav_msgs::PlanRouteRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::marti_nav_msgs::PlanRouteRequest> should match
// service_traits::DataType< ::marti_nav_msgs::PlanRoute >
template<>
struct DataType< ::marti_nav_msgs::PlanRouteRequest>
{
  static const char* value()
  {
    return DataType< ::marti_nav_msgs::PlanRoute >::value();
  }
  static const char* value(const ::marti_nav_msgs::PlanRouteRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::marti_nav_msgs::PlanRouteResponse> should match
// service_traits::MD5Sum< ::marti_nav_msgs::PlanRoute >
template<>
struct MD5Sum< ::marti_nav_msgs::PlanRouteResponse>
{
  static const char* value()
  {
    return MD5Sum< ::marti_nav_msgs::PlanRoute >::value();
  }
  static const char* value(const ::marti_nav_msgs::PlanRouteResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::marti_nav_msgs::PlanRouteResponse> should match
// service_traits::DataType< ::marti_nav_msgs::PlanRoute >
template<>
struct DataType< ::marti_nav_msgs::PlanRouteResponse>
{
  static const char* value()
  {
    return DataType< ::marti_nav_msgs::PlanRoute >::value();
  }
  static const char* value(const ::marti_nav_msgs::PlanRouteResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MARTI_NAV_MSGS_MESSAGE_PLANROUTE_H
