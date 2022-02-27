/*
 * File: G_System.c
 *
 * Code generated for Simulink model 'G_System'.
 *
 * Model version                  : 1.25
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Feb 27 09:34:34 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "G_System.h"
#include "G_System_private.h"

/* Block signals (default storage) */
B_G_System_T G_System_B;

/* External inputs (root inport signals with default storage) */
ExtU_G_System_T G_System_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_G_System_T G_System_Y;

/* Real-time model */
RT_MODEL_G_System_T G_System_M_;
RT_MODEL_G_System_T *const G_System_M = &G_System_M_;

/* Model step function */
void G_System_step(void)
{
  /* If: '<Root>/If2' incorporates:
   *  Inport: '<Root>/Inport'
   *  Inport: '<S3>/Inport'
   */
  if ((G_System_U.Inport <= 100U) && (G_System_U.Inport > 0U)) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    G_System_B.Inport = G_System_U.Inport;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem2' */
  }

  /* End of If: '<Root>/If2' */

  /* If: '<Root>/If' incorporates:
   *  Inport: '<S5>/In1'
   */
  if ((G_System_B.Inport < 85U) && ((G_System_B.Inport < 75U) ||
       (G_System_B.Inport >= 85U))) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    G_System_B.In1 = G_System_B.Inport;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem4' */
  }

  /* End of If: '<Root>/If' */

  /* If: '<Root>/If1' incorporates:
   *  Inport: '<S6>/In1'
   *  Inport: '<S7>/In1'
   *  Inport: '<S8>/In1'
   *  Outport: '<Root>/Out1'
   */
  if ((G_System_B.In1 >= 65U) && (G_System_B.In1 < 75U)) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem5' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    strncpy(&G_System_Y.Out1[0], G_System_ConstB.StringConstant3, 255U);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem5' */
    G_System_Y.Out1[255] = '\x00';
  } else if ((G_System_B.In1 >= 50U) && (G_System_B.In1 < 65U)) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem6' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    strncpy(&G_System_Y.Out1[0], G_System_ConstB.StringConstant4, 255U);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem6' */
    G_System_Y.Out1[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem7' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    strncpy(&G_System_Y.Out1[0], G_System_ConstB.StringConstant5, 255U);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem7' */
    G_System_Y.Out1[255] = '\x00';
  }

  /* End of If: '<Root>/If1' */
}

/* Model initialize function */
void G_System_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(G_System_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &G_System_B), 0,
                sizeof(B_G_System_T));

  /* external inputs */
  G_System_U.Inport = 0U;

  /* external outputs */
  (void) memset(&G_System_Y.Out1[0], 0,
                256U*sizeof(char_T));
}

/* Model terminate function */
void G_System_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
