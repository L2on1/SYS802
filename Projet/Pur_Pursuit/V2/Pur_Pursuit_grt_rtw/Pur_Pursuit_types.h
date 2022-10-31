/*
 * Pur_Pursuit_types.h
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

#ifndef RTW_HEADER_Pur_Pursuit_types_h_
#define RTW_HEADER_Pur_Pursuit_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_struct_bDuOyAMeNOo4SdsNOAPSKC_
#define DEFINED_TYPEDEF_FOR_struct_bDuOyAMeNOo4SdsNOAPSKC_

typedef struct {
  real_T values[18001];
} struct_bDuOyAMeNOo4SdsNOAPSKC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_3e5bA1VFAGHGz2cgpmTme_
#define DEFINED_TYPEDEF_FOR_struct_3e5bA1VFAGHGz2cgpmTme_

typedef struct {
  real_T time[18001];
  struct_bDuOyAMeNOo4SdsNOAPSKC signals;
} struct_3e5bA1VFAGHGz2cgpmTme;

#endif

/* Parameters (default storage) */
typedef struct P_Pur_Pursuit_T_ P_Pur_Pursuit_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_Pur_Pursuit_T RT_MODEL_Pur_Pursuit_T;

#endif                                 /* RTW_HEADER_Pur_Pursuit_types_h_ */
