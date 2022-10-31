/*
 * Pur_Pursuit.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Pur_Pursuit".
 *
 * Model version              : 1.17
 * Simulink Coder version : 9.7 (R2022a) 13-Nov-2021
 * C source code generated on : Mon Oct 31 13:04:58 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Pur_Pursuit_h_
#define RTW_HEADER_Pur_Pursuit_h_
#ifndef Pur_Pursuit_COMMON_INCLUDES_
#define Pur_Pursuit_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* Pur_Pursuit_COMMON_INCLUDES_ */

#include "Pur_Pursuit_types.h"
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T UnitDelay;                    /* '<Root>/Unit Delay' */
  real_T UnitDelay1;                   /* '<Root>/Unit Delay1' */
  real_T UnitDelay2;                   /* '<Root>/Unit Delay2' */
  real_T Gain2;                        /* '<Root>/Gain2' */
} B_Pur_Pursuit_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<Root>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<Root>/Discrete-Time Integrator1' */
  real_T DiscreteTimeIntegrator2_DSTATE;/* '<Root>/Discrete-Time Integrator2' */
  real_T UnitDelay_DSTATE;             /* '<Root>/Unit Delay' */
  real_T UnitDelay1_DSTATE;            /* '<Root>/Unit Delay1' */
  real_T UnitDelay2_DSTATE;            /* '<Root>/Unit Delay2' */
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace_PWORK;               /* '<Root>/From Workspace' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace1_PWORK;              /* '<Root>/From Workspace1' */

  struct {
    int_T PrevIndex;
  } FromWorkspace_IWORK;               /* '<Root>/From Workspace' */

  struct {
    int_T PrevIndex;
  } FromWorkspace1_IWORK;              /* '<Root>/From Workspace1' */
} DW_Pur_Pursuit_T;

/* Parameters (default storage) */
struct P_Pur_Pursuit_T_ {
  real_T L;                            /* Variable: L
                                        * Referenced by:
                                        *   '<Root>/Constant'
                                        *   '<Root>/Gain'
                                        *   '<Root>/Gain1'
                                        */
  real_T d;                            /* Variable: d
                                        * Referenced by:
                                        *   '<Root>/Constant'
                                        *   '<Root>/Gain1'
                                        */
  real_T v;                            /* Variable: v
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<Root>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<Root>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator1_gainval;
                          /* Computed Parameter: DiscreteTimeIntegrator1_gainval
                           * Referenced by: '<Root>/Discrete-Time Integrator1'
                           */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: 0
                                        * Referenced by: '<Root>/Discrete-Time Integrator1'
                                        */
  real_T DiscreteTimeIntegrator2_gainval;
                          /* Computed Parameter: DiscreteTimeIntegrator2_gainval
                           * Referenced by: '<Root>/Discrete-Time Integrator2'
                           */
  real_T DiscreteTimeIntegrator2_IC;   /* Expression: 0
                                        * Referenced by: '<Root>/Discrete-Time Integrator2'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay1'
                                        */
  real_T UnitDelay2_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay2'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Pur_Pursuit_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_Pur_Pursuit_T Pur_Pursuit_P;

/* Block signals (default storage) */
extern B_Pur_Pursuit_T Pur_Pursuit_B;

/* Block states (default storage) */
extern DW_Pur_Pursuit_T Pur_Pursuit_DW;

/* Model entry point functions */
extern void Pur_Pursuit_initialize(void);
extern void Pur_Pursuit_step(void);
extern void Pur_Pursuit_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Pur_Pursuit_T *const Pur_Pursuit_M;

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
 * '<Root>' : 'Pur_Pursuit'
 */
#endif                                 /* RTW_HEADER_Pur_Pursuit_h_ */
