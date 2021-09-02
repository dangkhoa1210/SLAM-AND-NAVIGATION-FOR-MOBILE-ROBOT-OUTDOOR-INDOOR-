#include <boost/shared_ptr.hpp>
#include "ros/ros.h"
#include "nodelet/nodelet.h"

namespace swri_image_util
{
  boost::shared_ptr<nodelet::Nodelet> createImagePubNodelet();
}  // namespace swri_image_util

int main(int argc, char **argv)
{
  ros::init(argc, argv, "image_pub");
  nodelet::M_string remap(ros::names::getRemappings());;
  nodelet::V_string my_argv;
  boost::shared_ptr<nodelet::Nodelet> n = swri_image_util::createImagePubNodelet();
  n->init(ros::this_node::getName(), remap, my_argv);
  ros::spin();
  return 0;
}
