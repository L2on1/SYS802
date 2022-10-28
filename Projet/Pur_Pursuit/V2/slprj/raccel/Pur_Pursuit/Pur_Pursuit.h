#ifndef RTW_HEADER_Pur_Pursuit_h_
#define RTW_HEADER_Pur_Pursuit_h_
#ifndef Pur_Pursuit_COMMON_INCLUDES_
#define Pur_Pursuit_COMMON_INCLUDES_
#include <stdlib.h>
#include <string.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "Pur_Pursuit_types.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#define MODEL_NAME Pur_Pursuit
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (9) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (4)   
#elif NCSTATES != 4
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T kusgqhxytc [ 3 ] ; real_T plbv1cocpa [ 3 ] ; real_T
kspqb0c2ki ; real_T khzscda3ph ; real_T kj3tksixi1 ; real_T abmrnhnnfz ;
real_T jgbddpaxfy ; real_T c4go1p3qce ; real_T jzgfedf1ea [ 3 ] ; } B ;
typedef struct { hvt4qmismz mo5w51i13m ; real_T a1zmwvov3f [ 3 ] ; struct {
void * LoggedData [ 3 ] ; } fe5uc1bie0 ; struct { void * LoggedData [ 4 ] ; }
dvyjjmaj4a ; struct { void * AQHandles ; } cn0cvwb2ax ; struct { void *
TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } d5sksq0fq2 ; struct { void
* AQHandles ; } dxtbgibew0 ; struct { void * TimePtr ; void * DataPtr ; void
* RSimInfoPtr ; } egyf5jgm11 ; struct { void * AQHandles ; } fx1yyaz2pk ;
struct { void * AQHandles ; } ahfmijeqvd ; struct { void * AQHandles ; }
bqsprob3xz ; struct { void * AQHandles ; } fvzjprysz3 ; struct { void *
AQHandles ; } mla0qiaiyr ; struct { void * AQHandles ; } i5b5f5gswt ; struct
{ void * AQHandles ; } evmpntopbw ; struct { void * AQHandles ; } dhg1dsnm2b
; struct { int_T PrevIndex ; } jexlkyqrpd ; struct { int_T PrevIndex ; }
ppku20gijp ; boolean_T p0fcrc55ex ; } DW ; typedef struct { real_T conkboh3eg
[ 3 ] ; real_T cocflzjzvi ; } X ; typedef struct { real_T conkboh3eg [ 3 ] ;
real_T cocflzjzvi ; } XDot ; typedef struct { boolean_T conkboh3eg [ 3 ] ;
boolean_T cocflzjzvi ; } XDis ; typedef struct { rtwCAPI_ModelMappingInfo mmi
; } DataMapInfo ; struct P_ { real_T L ; real_T d ; real_T v ; real_T
BicycleKinematicModel_InitialState [ 3 ] ; real_T
BicycleKinematicModel_MaxSteeringAngle ; real_T
BicycleKinematicModel_VehicleSpeedRange [ 2 ] ; real_T
BicycleKinematicModel_WheelBase ; real_T UnitDelay_InitialCondition ; real_T
FromWorkspace1_Time0 [ 180001 ] ; real_T FromWorkspace1_Data0 [ 180001 ] ;
real_T FromWorkspace_Time0 [ 180001 ] ; real_T FromWorkspace_Data0 [ 180001 ]
; real_T Gain_Gain ; real_T Integrator1_IC ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern mxArray * mr_Pur_Pursuit_GetDWork ( ) ; extern void
mr_Pur_Pursuit_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_Pur_Pursuit_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Pur_Pursuit_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
