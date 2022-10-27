#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Pur_Pursuit_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 20
#endif
#ifndef SS_INT64
#define SS_INT64 21
#endif
#else
#include "builtin_typeid_types.h"
#include "Pur_Pursuit.h"
#include "Pur_Pursuit_capi.h"
#include "Pur_Pursuit_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Pur_Pursuit/From Workspace" ) , TARGET_STRING ( "xg" ) , 0 , 0 , 0 , 0 , 0 }
, { 1 , 0 , TARGET_STRING ( "Pur_Pursuit/From Workspace1" ) , TARGET_STRING (
"yg" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"Pur_Pursuit/Integrator1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
3 , 0 , TARGET_STRING ( "Pur_Pursuit/Unit Delay" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 1 } , { 4 , 0 , TARGET_STRING (
"Pur_Pursuit/Bicycle Kinematic Model/Data Type Conversion1" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 0 } , { 5 , 1 , TARGET_STRING (
"Pur_Pursuit/Bicycle Kinematic Model/MATLAB System" ) , TARGET_STRING ( "" )
, 0 , 0 , 2 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"Pur_Pursuit/Subsystem/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } ,
{ 7 , 0 , TARGET_STRING ( "Pur_Pursuit/Subsystem/Gain1" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 8 , 0 , TARGET_STRING (
"Pur_Pursuit/Subsystem/Gain2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 }
, { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 9 , TARGET_STRING (
"Pur_Pursuit/Bicycle Kinematic Model" ) , TARGET_STRING ( "WheelBase" ) , 0 ,
0 , 0 } , { 10 , TARGET_STRING ( "Pur_Pursuit/Bicycle Kinematic Model" ) ,
TARGET_STRING ( "VehicleSpeedRange" ) , 0 , 3 , 0 } , { 11 , TARGET_STRING (
"Pur_Pursuit/Bicycle Kinematic Model" ) , TARGET_STRING ( "MaxSteeringAngle"
) , 0 , 0 , 0 } , { 12 , TARGET_STRING (
"Pur_Pursuit/Bicycle Kinematic Model" ) , TARGET_STRING ( "InitialState" ) ,
0 , 1 , 0 } , { 13 , TARGET_STRING ( "Pur_Pursuit/From Workspace" ) ,
TARGET_STRING ( "Time0" ) , 0 , 4 , 0 } , { 14 , TARGET_STRING (
"Pur_Pursuit/From Workspace" ) , TARGET_STRING ( "Data0" ) , 0 , 4 , 0 } , {
15 , TARGET_STRING ( "Pur_Pursuit/From Workspace1" ) , TARGET_STRING (
"Time0" ) , 0 , 4 , 0 } , { 16 , TARGET_STRING (
"Pur_Pursuit/From Workspace1" ) , TARGET_STRING ( "Data0" ) , 0 , 4 , 0 } , {
17 , TARGET_STRING ( "Pur_Pursuit/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0
, 0 } , { 18 , TARGET_STRING ( "Pur_Pursuit/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 19 , TARGET_STRING (
"Pur_Pursuit/Unit Delay" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0
} , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { - 1 } ; static const rtwCAPI_Signals
rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 20 , TARGET_STRING ( "L" ) , 0 , 0 , 0 } , { 21 ,
TARGET_STRING ( "d" ) , 0 , 0 , 0 } , { 22 , TARGET_STRING ( "v" ) , 0 , 0 ,
0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . khzscda3ph , & rtB . kspqb0c2ki ,
& rtB . c4go1p3qce , & rtB . kusgqhxytc [ 0 ] , & rtB . plbv1cocpa [ 0 ] , &
rtB . jzgfedf1ea [ 0 ] , & rtB . kj3tksixi1 , & rtB . abmrnhnnfz , & rtB .
jgbddpaxfy , & rtP . BicycleKinematicModel_WheelBase , & rtP .
BicycleKinematicModel_VehicleSpeedRange [ 0 ] , & rtP .
BicycleKinematicModel_MaxSteeringAngle , & rtP .
BicycleKinematicModel_InitialState [ 0 ] , & rtP . FromWorkspace_Time0 [ 0 ]
, & rtP . FromWorkspace_Data0 [ 0 ] , & rtP . FromWorkspace1_Time0 [ 0 ] , &
rtP . FromWorkspace1_Data0 [ 0 ] , & rtP . Gain_Gain , & rtP . Integrator1_IC
, & rtP . UnitDelay_InitialCondition , & rtP . L , & rtP . d , & rtP . v , }
; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 2 , 2 , 0 } , { rtwCAPI_VECTOR , 4 , 2 , 0 } , {
rtwCAPI_VECTOR , 6 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 , 3 , 1 , 1 , 2 , 180001 , 1 } ; static const real_T rtcapiStoredFloats
[ ] = { 0.0 , 0.001 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { (
NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ;
static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * )
& rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ]
, ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 1 , ( uint8_T ) 0
} } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals ,
9 , rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 11 ,
rtModelParameters , 3 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 2194112766U , 2281534096U , 3844149734U , 1956017030U } , ( NULL ) , 0 ,
( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * Pur_Pursuit_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Pur_Pursuit_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Pur_Pursuit_host_InitializeDataMapInfo ( Pur_Pursuit_host_DataMapInfo_T
* dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
