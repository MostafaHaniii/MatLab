/*
 * File: LogicalOperations.h
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

#ifndef RTW_HEADER_LogicalOperations_h_
#define RTW_HEADER_LogicalOperations_h_
#include <string.h>
#include <stddef.h>
#ifndef LogicalOperations_COMMON_INCLUDES_
# define LogicalOperations_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* LogicalOperations_COMMON_INCLUDES_ */

#include "LogicalOperations_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T In1;                       /* '<Root>/In1' */
  boolean_T In2;                       /* '<Root>/In2' */
} ExtU_LogicalOperations_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T Out1;                      /* '<Root>/Out1' */
  boolean_T Out2;                      /* '<Root>/Out2' */
  boolean_T Out3;                      /* '<Root>/Out3' */
  boolean_T Out4;                      /* '<Root>/Out4' */
  boolean_T Out5;                      /* '<Root>/Out5' */
  boolean_T Out6;                      /* '<Root>/Out6' */
} ExtY_LogicalOperations_T;

/* Real-time Model Data Structure */
struct tag_RTM_LogicalOperations_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_LogicalOperations_T LogicalOperations_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_LogicalOperations_T LogicalOperations_Y;

/* Model entry point functions */
extern void LogicalOperations_initialize(void);
extern void LogicalOperations_step(void);
extern void LogicalOperations_terminate(void);

/* Real-time Model object */
extern RT_MODEL_LogicalOperations_T *const LogicalOperations_M;

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
 * '<Root>' : 'LogicalOperations'
 */
#endif                                 /* RTW_HEADER_LogicalOperations_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
