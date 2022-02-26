/*
 * File: Calc1.h
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

#ifndef RTW_HEADER_Calc1_h_
#define RTW_HEADER_Calc1_h_
#include <string.h>
#include <stddef.h>
#ifndef Calc1_COMMON_INCLUDES_
# define Calc1_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Calc1_COMMON_INCLUDES_ */

#include "Calc1_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T In1_f;                        /* '<S5>/In1' */
} B_Calc1_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input1;                       /* '<Root>/Input1 ' */
  real_T Input2;                       /* '<Root>/Input2 ' */
} ExtU_Calc1_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
  real_T Out4;                         /* '<Root>/Out4' */
  real_T Out5;                         /* '<Root>/Out5' */
} ExtY_Calc1_T;

/* Real-time Model Data Structure */
struct tag_RTM_Calc1_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_Calc1_T Calc1_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_Calc1_T Calc1_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Calc1_T Calc1_Y;

/* Model entry point functions */
extern void Calc1_initialize(void);
extern void Calc1_step(void);
extern void Calc1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Calc1_T *const Calc1_M;

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
 * '<Root>' : 'Calc1'
 * '<S1>'   : 'Calc1/Add'
 * '<S2>'   : 'Calc1/Division '
 * '<S3>'   : 'Calc1/Product '
 * '<S4>'   : 'Calc1/Sub '
 * '<S5>'   : 'Calc1/Division /If Action Subsystem'
 * '<S6>'   : 'Calc1/Division /If Action Subsystem1'
 */
#endif                                 /* RTW_HEADER_Calc1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
