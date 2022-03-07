/*
 * File: Lamp.c
 *
 * Code generated for Simulink model 'Lamp'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Mar  7 10:38:28 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Lamp.h"
#include "Lamp_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define Lamp_IN_Green                  ((uint8_T)1U)
#define Lamp_IN_NO_ACTIVE_CHILD        ((uint8_T)0U)
#define Lamp_IN_Red                    ((uint8_T)2U)
#define Lamp_IN_Yellow                 ((uint8_T)3U)

/* Block states (default storage) */
DW_Lamp_T Lamp_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Lamp_T Lamp_Y;

/* Real-time model */
RT_MODEL_Lamp_T Lamp_M_;
RT_MODEL_Lamp_T *const Lamp_M = &Lamp_M_;

/* Model step function */
void Lamp_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (Lamp_DW.temporalCounter_i1 < 15U) {
    Lamp_DW.temporalCounter_i1++;
  }

  if (Lamp_DW.is_active_c3_Lamp == 0U) {
    Lamp_DW.is_active_c3_Lamp = 1U;
    Lamp_DW.is_c3_Lamp = Lamp_IN_Green;
    Lamp_DW.temporalCounter_i1 = 0U;
  } else {
    switch (Lamp_DW.is_c3_Lamp) {
     case Lamp_IN_Green:
      if (Lamp_DW.temporalCounter_i1 >= 9U) {
        /* Outport: '<Root>/Out3' */
        Lamp_Y.Out3 = 1U;

        /* Outport: '<Root>/Out2' */
        Lamp_Y.Out2 = 0U;

        /* Outport: '<Root>/Out1' */
        Lamp_Y.Out1 = 0U;
        Lamp_DW.is_c3_Lamp = Lamp_IN_Red;
        Lamp_DW.temporalCounter_i1 = 0U;
      } else {
        /* Outport: '<Root>/Out3' */
        Lamp_Y.Out3 = 1U;

        /* Outport: '<Root>/Out2' */
        Lamp_Y.Out2 = 0U;

        /* Outport: '<Root>/Out1' */
        Lamp_Y.Out1 = 0U;
      }
      break;

     case Lamp_IN_Red:
      if (Lamp_DW.temporalCounter_i1 >= 9U) {
        /* Outport: '<Root>/Out3' */
        Lamp_Y.Out3 = 0U;

        /* Outport: '<Root>/Out2' */
        Lamp_Y.Out2 = 0U;

        /* Outport: '<Root>/Out1' */
        Lamp_Y.Out1 = 1U;
        Lamp_DW.is_c3_Lamp = Lamp_IN_Yellow;
        Lamp_DW.temporalCounter_i1 = 0U;
      } else {
        /* Outport: '<Root>/Out1' */
        Lamp_Y.Out1 = 1U;

        /* Outport: '<Root>/Out3' */
        Lamp_Y.Out3 = 0U;

        /* Outport: '<Root>/Out2' */
        Lamp_Y.Out2 = 0U;
      }
      break;

     default:
      if (Lamp_DW.temporalCounter_i1 >= 4U) {
        /* Outport: '<Root>/Out3' */
        Lamp_Y.Out3 = 0U;

        /* Outport: '<Root>/Out2' */
        Lamp_Y.Out2 = 1U;

        /* Outport: '<Root>/Out1' */
        Lamp_Y.Out1 = 0U;
        Lamp_DW.is_c3_Lamp = Lamp_IN_Green;
        Lamp_DW.temporalCounter_i1 = 0U;
      } else {
        /* Outport: '<Root>/Out3' */
        Lamp_Y.Out3 = 0U;

        /* Outport: '<Root>/Out1' */
        Lamp_Y.Out1 = 0U;

        /* Outport: '<Root>/Out2' */
        Lamp_Y.Out2 = 1U;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void Lamp_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Lamp_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Lamp_DW, 0,
                sizeof(DW_Lamp_T));

  /* external outputs */
  (void) memset((void *)&Lamp_Y, 0,
                sizeof(ExtY_Lamp_T));

  /* SystemInitialize for Chart: '<Root>/Chart' */
  Lamp_DW.temporalCounter_i1 = 0U;
  Lamp_DW.is_active_c3_Lamp = 0U;
  Lamp_DW.is_c3_Lamp = Lamp_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Outport: '<Root>/Out1' incorporates:
   *  Chart: '<Root>/Chart'
   */
  Lamp_Y.Out1 = 0U;

  /* SystemInitialize for Outport: '<Root>/Out2' incorporates:
   *  Chart: '<Root>/Chart'
   */
  Lamp_Y.Out2 = 0U;

  /* SystemInitialize for Outport: '<Root>/Out3' incorporates:
   *  Chart: '<Root>/Chart'
   */
  Lamp_Y.Out3 = 0U;
}

/* Model terminate function */
void Lamp_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
