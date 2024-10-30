/*
 * homework3_ros.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "homework3_ros".
 *
 * Model version              : 1.30
 * Simulink Coder version : 24.1 (R2024a) 19-Nov-2023
 * C++ source code generated on : Wed Oct 30 09:15:26 2024
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef homework3_ros_h_
#define homework3_ros_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "homework3_ros_types.h"
#include <string.h>
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S4>/Enabled Subsystem' */
struct B_EnabledSubsystem_homework3__T {
  SL_Bus_homework3_ros_std_msgs_Float64 In1;/* '<S7>/In1' */
};

/* Block signals (default storage) */
struct B_homework3_ros_T {
  B_EnabledSubsystem_homework3__T EnabledSubsystem_a;/* '<S6>/Enabled Subsystem' */
  B_EnabledSubsystem_homework3__T EnabledSubsystem_d;/* '<S5>/Enabled Subsystem' */
  B_EnabledSubsystem_homework3__T EnabledSubsystem;/* '<S4>/Enabled Subsystem' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_homework3_ros_T {
  ros_slroscpp_internal_block_P_T obj; /* '<S3>/SinkBlock' */
  ros_slroscpp_internal_block_S_T obj_l;/* '<S6>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_p;/* '<S5>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_pp;/* '<S4>/SourceBlock' */
  boolean_T objisempty;                /* '<S6>/SourceBlock' */
  boolean_T objisempty_d;              /* '<S5>/SourceBlock' */
  boolean_T objisempty_o;              /* '<S4>/SourceBlock' */
  boolean_T objisempty_i;              /* '<S3>/SinkBlock' */
};

/* Parameters for system: '<S4>/Enabled Subsystem' */
struct P_EnabledSubsystem_homework3__T_ {
  SL_Bus_homework3_ros_std_msgs_Float64 Out1_Y0;/* Computed Parameter: Out1_Y0
                                                 * Referenced by: '<S7>/Out1'
                                                 */
};

/* Parameters (default storage) */
struct P_homework3_ros_T_ {
  SL_Bus_homework3_ros_std_msgs_Float64 Constant_Value;/* Computed Parameter: Constant_Value
                                                        * Referenced by: '<S2>/Constant'
                                                        */
  SL_Bus_homework3_ros_std_msgs_Float64 Constant_Value_h;/* Computed Parameter: Constant_Value_h
                                                          * Referenced by: '<S4>/Constant'
                                                          */
  SL_Bus_homework3_ros_std_msgs_Float64 Constant_Value_n;/* Computed Parameter: Constant_Value_n
                                                          * Referenced by: '<S5>/Constant'
                                                          */
  SL_Bus_homework3_ros_std_msgs_Float64 Constant_Value_e;/* Computed Parameter: Constant_Value_e
                                                          * Referenced by: '<S6>/Constant'
                                                          */
  P_EnabledSubsystem_homework3__T EnabledSubsystem_a;/* '<S6>/Enabled Subsystem' */
  P_EnabledSubsystem_homework3__T EnabledSubsystem_d;/* '<S5>/Enabled Subsystem' */
  P_EnabledSubsystem_homework3__T EnabledSubsystem;/* '<S4>/Enabled Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_homework3_ros_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_homework3_ros_T homework3_ros_P;

#ifdef __cplusplus

}

#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_homework3_ros_T homework3_ros_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_homework3_ros_T homework3_ros_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void homework3_ros_initialize(void);
  extern void homework3_ros_step(void);
  extern void homework3_ros_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_homework3_ros_T *const homework3_ros_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'homework3_ros'
 * '<S1>'   : 'homework3_ros/MATLAB Function1'
 * '<S2>'   : 'homework3_ros/Message'
 * '<S3>'   : 'homework3_ros/Publish'
 * '<S4>'   : 'homework3_ros/Subscribe_dist'
 * '<S5>'   : 'homework3_ros/Subscribe_rel_vel'
 * '<S6>'   : 'homework3_ros/Subscribe_vel_x'
 * '<S7>'   : 'homework3_ros/Subscribe_dist/Enabled Subsystem'
 * '<S8>'   : 'homework3_ros/Subscribe_rel_vel/Enabled Subsystem'
 * '<S9>'   : 'homework3_ros/Subscribe_vel_x/Enabled Subsystem'
 */
#endif                                 /* homework3_ros_h_ */
