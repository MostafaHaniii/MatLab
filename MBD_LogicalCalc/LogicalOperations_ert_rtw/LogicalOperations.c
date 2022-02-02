/*
 * File: LogicalOperations.c
 *
 * Code generated for Simulink model 'LogicalOperations'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Feb  2 17:13:19 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LogicalOperations.h"
#include "LogicalOperations_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_LogicalOperations_T LogicalOperations_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_LogicalOperations_T LogicalOperations_Y;

/* Real-time model */
RT_MODEL_LogicalOperations_T LogicalOperations_M_;
RT_MODEL_LogicalOperations_T *const LogicalOperations_M = &LogicalOperations_M_;

/* Model step function */
void LogicalOperations_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Logic: '<Root>/Logical Operator'
   */
  LogicalOperations_Y.Out1 = (LogicalOperations_U.In1 && LogicalOperations_U.In2);

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Logic: '<Root>/Logical Operator1'
   */
  LogicalOperations_Y.Out2 = (LogicalOperations_U.In1 || LogicalOperations_U.In2);

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Logic: '<Root>/Logical Operator2'
   */
  LogicalOperations_Y.Out3 = LogicalOperations_U.In1 ^ LogicalOperations_U.In2;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Logic: '<Root>/Logical Operator3'
   */
  LogicalOperations_Y.Out4 = (LogicalOperations_U.In1 == LogicalOperations_U.In2);

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/In1'
   *  Logic: '<Root>/Logical Operator5'
   */
  LogicalOperations_Y.Out5 = !LogicalOperations_U.In1;

  /* Outport: '<Root>/Out6' incorporates:
   *  Inport: '<Root>/In2'
   *  Logic: '<Root>/Logical Operator6'
   */
  LogicalOperations_Y.Out6 = !LogicalOperations_U.In2;
}

/* Model initialize function */
void LogicalOperations_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(LogicalOperations_M, (NULL));

  /* external inputs */
  (void)memset(&LogicalOperations_U, 0, sizeof(ExtU_LogicalOperations_T));

  /* external outputs */
  (void) memset((void *)&LogicalOperations_Y, 0,
                sizeof(ExtY_LogicalOperations_T));
}

/* Model terminate function */
void LogicalOperations_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
