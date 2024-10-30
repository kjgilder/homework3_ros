/*
 * homework3_ros.cpp
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

#include "homework3_ros.h"
#include "rtwtypes.h"
#include "homework3_ros_types.h"
#include "homework3_ros_private.h"
#include <string.h>

/* Block signals (default storage) */
B_homework3_ros_T homework3_ros_B;

/* Block states (default storage) */
DW_homework3_ros_T homework3_ros_DW;

/* Real-time model */
RT_MODEL_homework3_ros_T homework3_ros_M_ = RT_MODEL_homework3_ros_T();
RT_MODEL_homework3_ros_T *const homework3_ros_M = &homework3_ros_M_;

/*
 * System initialize for enable system:
 *    '<S4>/Enabled Subsystem'
 *    '<S5>/Enabled Subsystem'
 *    '<S6>/Enabled Subsystem'
 */
void homework3_EnabledSubsystem_Init(B_EnabledSubsystem_homework3__T *localB,
  P_EnabledSubsystem_homework3__T *localP)
{
  /* SystemInitialize for SignalConversion generated from: '<S7>/In1' incorporates:
   *  Outport: '<S7>/Out1'
   */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Output and update for enable system:
 *    '<S4>/Enabled Subsystem'
 *    '<S5>/Enabled Subsystem'
 *    '<S6>/Enabled Subsystem'
 */
void homework3_ros_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_homework3_ros_std_msgs_Float64 *rtu_In1,
  B_EnabledSubsystem_homework3__T *localB)
{
  /* Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S7>/Enable'
   */
  if (rtu_Enable) {
    /* SignalConversion generated from: '<S7>/In1' */
    localB->In1 = *rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S4>/Enabled Subsystem' */
}

/* Model step function */
void homework3_ros_step(void)
{
  SL_Bus_homework3_ros_std_msgs_Float64 rtb_BusAssignment;
  SL_Bus_homework3_ros_std_msgs_Float64 tmp;
  real_T vel_ego;
  boolean_T b_varargout_1;

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe_vel_x' */
  /* MATLABSystem: '<S6>/SourceBlock' */
  b_varargout_1 = Sub_homework3_ros_13.getLatestMessage(&tmp);

  /* Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S6>/SourceBlock' */
  homework3_ros_EnabledSubsystem(b_varargout_1, &tmp,
    &homework3_ros_B.EnabledSubsystem_a);

  /* End of Outputs for SubSystem: '<S6>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe_vel_x' */

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe_dist' */
  /* MATLABSystem: '<S4>/SourceBlock' */
  b_varargout_1 = Sub_homework3_ros_16.getLatestMessage(&tmp);

  /* Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S4>/SourceBlock' */
  homework3_ros_EnabledSubsystem(b_varargout_1, &tmp,
    &homework3_ros_B.EnabledSubsystem);

  /* End of Outputs for SubSystem: '<S4>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe_dist' */

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe_rel_vel' */
  /* MATLABSystem: '<S5>/SourceBlock' */
  b_varargout_1 = Sub_homework3_ros_14.getLatestMessage(&tmp);

  /* Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S5>/SourceBlock' */
  homework3_ros_EnabledSubsystem(b_varargout_1, &tmp,
    &homework3_ros_B.EnabledSubsystem_d);

  /* End of Outputs for SubSystem: '<S5>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe_rel_vel' */

  /* MATLAB Function: '<Root>/MATLAB Function1' */
  vel_ego = homework3_ros_B.EnabledSubsystem_a.In1.Data;
  if (homework3_ros_B.EnabledSubsystem.In1.Data < 0.0) {
    /* BusAssignment: '<Root>/Bus Assignment' */
    rtb_BusAssignment.Data = 0.0;
  } else {
    if ((homework3_ros_B.EnabledSubsystem_a.In1.Data > -0.01) &&
        (homework3_ros_B.EnabledSubsystem_a.In1.Data < 0.01)) {
      vel_ego = 0.01;
    }

    /* BusAssignment: '<Root>/Bus Assignment' */
    rtb_BusAssignment.Data = (homework3_ros_B.EnabledSubsystem.In1.Data /
      vel_ego - 2.0) * 0.25 + homework3_ros_B.EnabledSubsystem_d.In1.Data;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function1' */

  /* Outputs for Atomic SubSystem: '<Root>/Publish' */
  /* MATLABSystem: '<S3>/SinkBlock' */
  Pub_homework3_ros_20.publish(&rtb_BusAssignment);

  /* End of Outputs for SubSystem: '<Root>/Publish' */
}

/* Model initialize function */
void homework3_ros_initialize(void)
{
  /* Registration code */

  /* block I/O */
  (void) memset((static_cast<void *>(&homework3_ros_B)), 0,
                sizeof(B_homework3_ros_T));

  /* states (dwork) */
  (void) memset(static_cast<void *>(&homework3_ros_DW), 0,
                sizeof(DW_homework3_ros_T));

  {
    char_T b_zeroDelimTopic[17];
    char_T b_zeroDelimTopic_0[11];
    char_T b_zeroDelimTopic_1[9];
    static const char_T b_zeroDelimTopic_2[17] = "/car/state/vel_x";
    static const char_T b_zeroDelimTopic_3[11] = "/lead_dist";
    static const char_T b_zeroDelimTopic_4[9] = "/rel_vel";
    static const char_T b_zeroDelimTopic_5[11] = "/cmd_accel";

    /* Start for Atomic SubSystem: '<Root>/Subscribe_vel_x' */
    /* Start for MATLABSystem: '<S6>/SourceBlock' */
    homework3_ros_DW.obj_l.matlabCodegenIsDeleted = false;
    homework3_ros_DW.objisempty = true;
    homework3_ros_DW.obj_l.isInitialized = 1;
    for (int32_T i = 0; i < 17; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_2[i];
    }

    Sub_homework3_ros_13.createSubscriber(&b_zeroDelimTopic[0], 1);
    homework3_ros_DW.obj_l.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S6>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe_vel_x' */

    /* Start for Atomic SubSystem: '<Root>/Subscribe_dist' */
    /* Start for MATLABSystem: '<S4>/SourceBlock' */
    homework3_ros_DW.obj_pp.matlabCodegenIsDeleted = false;
    homework3_ros_DW.objisempty_o = true;
    homework3_ros_DW.obj_pp.isInitialized = 1;
    for (int32_T i = 0; i < 11; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_3[i];
    }

    Sub_homework3_ros_16.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    homework3_ros_DW.obj_pp.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S4>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe_dist' */

    /* Start for Atomic SubSystem: '<Root>/Subscribe_rel_vel' */
    /* Start for MATLABSystem: '<S5>/SourceBlock' */
    homework3_ros_DW.obj_p.matlabCodegenIsDeleted = false;
    homework3_ros_DW.objisempty_d = true;
    homework3_ros_DW.obj_p.isInitialized = 1;
    for (int32_T i = 0; i < 9; i++) {
      b_zeroDelimTopic_1[i] = b_zeroDelimTopic_4[i];
    }

    Sub_homework3_ros_14.createSubscriber(&b_zeroDelimTopic_1[0], 1);
    homework3_ros_DW.obj_p.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe_rel_vel' */

    /* Start for Atomic SubSystem: '<Root>/Publish' */
    /* Start for MATLABSystem: '<S3>/SinkBlock' */
    homework3_ros_DW.obj.matlabCodegenIsDeleted = false;
    homework3_ros_DW.objisempty_i = true;
    homework3_ros_DW.obj.isInitialized = 1;
    for (int32_T i = 0; i < 11; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_5[i];
    }

    Pub_homework3_ros_20.createPublisher(&b_zeroDelimTopic_0[0], 1);
    homework3_ros_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S3>/SinkBlock' */
    /* End of Start for SubSystem: '<Root>/Publish' */
  }

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe_vel_x' */
  /* SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem' */
  homework3_EnabledSubsystem_Init(&homework3_ros_B.EnabledSubsystem_a,
    &homework3_ros_P.EnabledSubsystem_a);

  /* End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe_vel_x' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe_dist' */
  /* SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem' */
  homework3_EnabledSubsystem_Init(&homework3_ros_B.EnabledSubsystem,
    &homework3_ros_P.EnabledSubsystem);

  /* End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe_dist' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe_rel_vel' */
  /* SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem' */
  homework3_EnabledSubsystem_Init(&homework3_ros_B.EnabledSubsystem_d,
    &homework3_ros_P.EnabledSubsystem_d);

  /* End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe_rel_vel' */
}

/* Model terminate function */
void homework3_ros_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Subscribe_vel_x' */
  /* Terminate for MATLABSystem: '<S6>/SourceBlock' */
  if (!homework3_ros_DW.obj_l.matlabCodegenIsDeleted) {
    homework3_ros_DW.obj_l.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S6>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe_vel_x' */

  /* Terminate for Atomic SubSystem: '<Root>/Subscribe_dist' */
  /* Terminate for MATLABSystem: '<S4>/SourceBlock' */
  if (!homework3_ros_DW.obj_pp.matlabCodegenIsDeleted) {
    homework3_ros_DW.obj_pp.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S4>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe_dist' */

  /* Terminate for Atomic SubSystem: '<Root>/Subscribe_rel_vel' */
  /* Terminate for MATLABSystem: '<S5>/SourceBlock' */
  if (!homework3_ros_DW.obj_p.matlabCodegenIsDeleted) {
    homework3_ros_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S5>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe_rel_vel' */

  /* Terminate for Atomic SubSystem: '<Root>/Publish' */
  /* Terminate for MATLABSystem: '<S3>/SinkBlock' */
  if (!homework3_ros_DW.obj.matlabCodegenIsDeleted) {
    homework3_ros_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S3>/SinkBlock' */
  /* End of Terminate for SubSystem: '<Root>/Publish' */
}
