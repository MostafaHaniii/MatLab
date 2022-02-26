/*
 * File: Calc1.c
 *
 * Code generated for Simulink model 'Calc1'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Feb 26 10:21:41 2022
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
   *  Inport: '<Root>/Input1 '
   *  Inport: '<Root>/Input2 '
   *  Sum: '<S1>/Add'
   */
  Calc1_Y.Out1 = Calc1_U.Input1 + Calc1_U.Input2;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/Input1 '
   *  Inport: '<Root>/Input2 '
   *  Sum: '<S4>/Subtract'
   */
  Calc1_Y.Out2 = Calc1_U.Input1 - Calc1_U.Input2;

  /* If: '<S2>/If' incorporates:
   *  Inport: '<Root>/Input2 '
   *  Inport: '<S5>/In1'
   */
  if (Calc1_U.Input2 > 0.0) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    Calc1_B.In1_f = Calc1_U.Input2;

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* Outport: '<Root>/Out4' incorporates:
     *  Inport: '<S6>/In1'
     */
    Calc1_Y.Out4 = Calc1_U.Input2;

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem1' */
  }

  /* End of If: '<S2>/If' */

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/Input1 '
   *  Product: '<S2>/Divide'
   */
  Calc1_Y.Out3 = Calc1_U.Input1 / Calc1_B.In1_f;

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/Input1 '
   *  Inport: '<Root>/Input2 '
   *  Product: '<S3>/Product'
   */
  Calc1_Y.Out5 = Calc1_U.Input1 * Calc1_U.Input2;
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
