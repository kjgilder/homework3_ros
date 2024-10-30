#ifndef HOMEWORK3_ROS__VISIBILITY_CONTROL_H_
#define HOMEWORK3_ROS__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define HOMEWORK3_ROS_EXPORT __attribute__ ((dllexport))
    #define HOMEWORK3_ROS_IMPORT __attribute__ ((dllimport))
  #else
    #define HOMEWORK3_ROS_EXPORT __declspec(dllexport)
    #define HOMEWORK3_ROS_IMPORT __declspec(dllimport)
  #endif
  #ifdef HOMEWORK3_ROS_BUILDING_LIBRARY
    #define HOMEWORK3_ROS_PUBLIC HOMEWORK3_ROS_EXPORT
  #else
    #define HOMEWORK3_ROS_PUBLIC HOMEWORK3_ROS_IMPORT
  #endif
  #define HOMEWORK3_ROS_PUBLIC_TYPE HOMEWORK3_ROS_PUBLIC
  #define HOMEWORK3_ROS_LOCAL
#else
  #define HOMEWORK3_ROS_EXPORT __attribute__ ((visibility("default")))
  #define HOMEWORK3_ROS_IMPORT
  #if __GNUC__ >= 4
    #define HOMEWORK3_ROS_PUBLIC __attribute__ ((visibility("default")))
    #define HOMEWORK3_ROS_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define HOMEWORK3_ROS_PUBLIC
    #define HOMEWORK3_ROS_LOCAL
  #endif
  #define HOMEWORK3_ROS_PUBLIC_TYPE
#endif
#endif  // HOMEWORK3_ROS__VISIBILITY_CONTROL_H_
// Generated 30-Oct-2024 09:15:35
// Copyright 2019-2020 The MathWorks, Inc.
