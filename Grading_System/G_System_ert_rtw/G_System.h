/*
 * File: G_System.h
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

#ifndef RTW_HEADER_G_System_h_
#define RTW_HEADER_G_System_h_
#include <string.h>
#include <stddef.h>
#ifndef G_System_COMMON_INCLUDES_
# define G_System_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* G_System_COMMON_INCLUDES_ */

#include "G_System_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  uint32_T Inport;                     /* '<S3>/Inport' */
  uint32_T In1;                        /* '<S5>/In1' */
} B_G_System_T;

/* Invariant block signals (default storage) */
typedef struct {
  const char_T StringConstant[256];    /* '<Root>/String Constant' */
  const char_T StringConstant2[256];   /* '<Root>/String Constant2' */
  const char_T StringConstant1[256];   /* '<Root>/String Constant1' */
  const char_T StringConstant5[256];   /* '<Root>/String Constant5' */
  const char_T StringConstant4[256];   /* '<Root>/String Constant4' */
  const char_T StringConstant3[256];   /* '<Root>/String Constant3' */
} ConstB_G_System_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint32_T Inport;                     /* '<Root>/Inport' */
} ExtU_G_System_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Out1[256];                    /* '<Root>/Out1' */
} ExtY_G_System_T;

/* Real-time Model Data Structure */
struct tag_RTM_G_System_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_G_System_T G_System_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_G_System_T G_System_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_G_System_T G_System_Y;
extern const ConstB_G_System_T G_System_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void G_System_initialize(void);
extern void G_System_step(void);
extern void G_System_terminate(void);

/* Real-time Model object */
extern RT_MODEL_G_System_T *const G_System_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<S3>/Display' : Unused code path elimination
 * Block '<S10>/Data Type Propagation' : Unused code path elimination
 * Block '<S11>/FixPt Constant' : Unused code path elimination
 * Block '<S11>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S11>/FixPt Sum1' : Unused code path elimination
 * Block '<S10>/Output' : Unused code path elimination
 * Block '<S12>/Constant' : Unused code path elimination
 * Block '<S12>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S12>/FixPt Switch' : Unused code path elimination
 * Block '<S9>/Out' : Unused code path elimination
 * Block '<S9>/Output' : Unused code path elimination
 * Block '<S9>/Vector' : Unused code path elimination
 * Block '<Root>/Unit Delay' : Unused code path elimination
 */

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
 * '<Root>' : 'G_System'
 * '<S1>'   : 'G_System/If Action Subsystem'
 * '<S2>'   : 'G_System/If Action Subsystem1'
 * '<S3>'   : 'G_System/If Action Subsystem2'
 * '<S4>'   : 'G_System/If Action Subsystem3'
 * '<S5>'   : 'G_System/If Action Subsystem4'
 * '<S6>'   : 'G_System/If Action Subsystem5'
 * '<S7>'   : 'G_System/If Action Subsystem6'
 * '<S8>'   : 'G_System/If Action Subsystem7'
 * '<S9>'   : 'G_System/Repeating Sequence Stair '
 * '<S10>'  : 'G_System/Repeating Sequence Stair /LimitedCounter'
 * '<S11>'  : 'G_System/Repeating Sequence Stair /LimitedCounter/Increment Real World'
 * '<S12>'  : 'G_System/Repeating Sequence Stair /LimitedCounter/Wrap To Zero'
 */
#endif                                 /* RTW_HEADER_G_System_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
