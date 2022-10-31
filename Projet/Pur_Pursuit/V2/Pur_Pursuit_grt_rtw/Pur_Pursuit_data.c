/*
 * Pur_Pursuit_data.c
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

#include "Pur_Pursuit.h"

/* Block parameters (default storage) */
P_Pur_Pursuit_T Pur_Pursuit_P = {
  /* Variable: L
   * Referenced by:
   *   '<Root>/Constant'
   *   '<Root>/Gain'
   *   '<Root>/Gain1'
   */
  2.0,

  /* Variable: d
   * Referenced by:
   *   '<Root>/Constant'
   *   '<Root>/Gain1'
   */
  2.0,

  /* Variable: v
   * Referenced by: '<Root>/Gain2'
   */
  5.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<Root>/Discrete-Time Integrator'
   */
  0.01,

  /* Expression: 0
   * Referenced by: '<Root>/Discrete-Time Integrator'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator1_gainval
   * Referenced by: '<Root>/Discrete-Time Integrator1'
   */
  0.01,

  /* Expression: 0
   * Referenced by: '<Root>/Discrete-Time Integrator1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator2_gainval
   * Referenced by: '<Root>/Discrete-Time Integrator2'
   */
  0.01,

  /* Expression: 0
   * Referenced by: '<Root>/Discrete-Time Integrator2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Unit Delay'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Unit Delay1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Unit Delay2'
   */
  0.0
};
