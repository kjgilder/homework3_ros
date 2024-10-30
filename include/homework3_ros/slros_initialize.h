#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "homework3_ros_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block homework3_ros/Subscribe_dist
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_homework3_ros_std_msgs_Float64> Sub_homework3_ros_16;

// For Block homework3_ros/Subscribe_rel_vel
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_homework3_ros_std_msgs_Float64> Sub_homework3_ros_14;

// For Block homework3_ros/Subscribe_vel_x
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_homework3_ros_std_msgs_Float64> Sub_homework3_ros_13;

// For Block homework3_ros/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_homework3_ros_std_msgs_Float64> Pub_homework3_ros_20;

void slros_node_init(int argc, char** argv);

#endif
