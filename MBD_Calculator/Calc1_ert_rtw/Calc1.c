/*
 * File: Calc1.c
 *
 * Code generated for Simulink model 'Calc1'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Feb  2 17:12:01 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Calc1.h"
#include "Calc1_private.h"

/* Block signals (default storage) */
B_Calc1_T Calc1_B;

/* External inputs (root inport signals with default storage) */
ExtU_Calc1_T Calc1_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Calc1_T Calc1_Y;

/* Real-time model */
RT_MODEL_Calc1_T Calc1_M_;
RT_MODEL_Calc1_T *const Calc1_M = &Calc1_M_;

/* Model step function */
void Calc1_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<Root>/Add'
   */
  Calc1_Y.Out1 = Calc1_U.In1 + Calc1_U.In2;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<Root>/Subtract'
   */
  Calc1_Y.Out2 = Calc1_U.In1 - Calc1_U.In2;

  /* If: '<Root>/If' incorporates:
   *  Inport: '<Root>/In2'
   *  Inport: '<S1>/In1'
   */
  if (Calc1_U.In2 > 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    Calc1_B.In1_f = Calc1_U.In2;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Outport: '<Root>/Out4' incorporates:
     *  Constant: '<Root>/Constant'
     *  Inport: '<S2>/In1'
     */
    Calc1_Y.Out4 = 1.0;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  }

  /* End of If: '<Root>/If' */

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Product: '<Root>/Divide'
   */
  Calc1_Y.Out3 = Calc1_U.In1 / Calc1_B.In1_f;

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<Root>/Product'
   */
  Calc1_Y.Out5 = Calc1_U.In1 * Calc1_U.In2;
}

/* Model initialize function */
void Calc1_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Calc1_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Calc1_B), 0,
                sizeof(B_Calc1_T));

  /* external inputs */
  (void)memset(&Calc1_U, 0, sizeof(ExtU_Calc1_T));

  /* external outputs */
  (void) memset((void *)&Calc1_Y, 0,
                sizeof(ExtY_Calc1_T));
}

/* Model terminate function */
void Calc1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
