#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "homework3_ros";

// For Block homework3_ros/Subscribe_dist
SimulinkSubscriber<std_msgs::Float64, SL_Bus_homework3_ros_std_msgs_Float64> Sub_homework3_ros_16;

// For Block homework3_ros/Subscribe_rel_vel
SimulinkSubscriber<std_msgs::Float64, SL_Bus_homework3_ros_std_msgs_Float64> Sub_homework3_ros_14;

// For Block homework3_ros/Subscribe_vel_x
SimulinkSubscriber<std_msgs::Float64, SL_Bus_homework3_ros_std_msgs_Float64> Sub_homework3_ros_13;

// For Block homework3_ros/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_homework3_ros_std_msgs_Float64> Pub_homework3_ros_20;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

