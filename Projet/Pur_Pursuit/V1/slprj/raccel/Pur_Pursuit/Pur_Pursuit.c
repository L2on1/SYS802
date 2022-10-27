#include "Pur_Pursuit.h"
#include "Pur_Pursuit_types.h"
#include "mwmathutil.h"
#include "rtwtypes.h"
#include "Pur_Pursuit_private.h"
#include "rt_logging_mmi.h"
#include "Pur_Pursuit_capi.h"
#include "Pur_Pursuit_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 2 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 1 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "9.7 (R2022a) 13-Nov-2021" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; static void hvufdgpiwa ( hvt4qmismz * obj ) ; static void
kujql3quxr ( hvt4qmismz * obj ) ; static void hvufdgpiwa ( hvt4qmismz * obj )
{ int32_T b_kstr ; int32_T nmatched ; char_T vehicleInputs_data [ 30 ] ;
char_T b [ 25 ] ; char_T vehicleInputs_data_p [ 25 ] ; char_T tmp ; boolean_T
b_bool ; static const char_T tmp_p [ 25 ] = { 'V' , 'e' , 'h' , 'i' , 'c' ,
'l' , 'e' , 'S' , 'p' , 'e' , 'e' , 'd' , 'S' , 't' , 'e' , 'e' , 'r' , 'i' ,
'n' , 'g' , 'A' , 'n' , 'g' , 'l' , 'e' } ; static const char_T tmp_e [ 128 ]
= { '\x00' , '\x01' , '\x02' , '\x03' , '\x04' , '\x05' , '\x06' , '\x07' ,
'\x08' , '	' , '\x0a' , '\x0b' , '\x0c' , '\x0d' , '\x0e' , '\x0f' , '\x10' ,
'\x11' , '\x12' , '\x13' , '\x14' , '\x15' , '\x16' , '\x17' , '\x18' ,
'\x19' , '\x1a' , '\x1b' , '\x1c' , '\x1d' , '\x1e' , '\x1f' , ' ' , '!' ,
'\"' , '#' , '$' , '%' , '&' , '\'' , '(' , ')' , '*' , '+' , ',' , '-' , '.'
, '/' , '0' , '1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9' , ':' , ';'
, '<' , '=' , '>' , '?' , '@' , 'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g' , 'h'
, 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u'
, 'v' , 'w' , 'x' , 'y' , 'z' , '[' , '\\' , ']' , '^' , '_' , '`' , 'a' ,
'b' , 'c' , 'd' , 'e' , 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' ,
'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z' , '{' ,
'|' , '}' , '~' , '\x7f' } ; static const char_T tmp_i [ 25 ] = { 'V' , 'e' ,
'h' , 'i' , 'c' , 'l' , 'e' , 'S' , 'p' , 'e' , 'e' , 'd' , 'H' , 'e' , 'a' ,
'd' , 'i' , 'n' , 'g' , 'R' , 'a' , 't' , 'e' , '-' , '-' } ; int32_T exitg1
; nmatched = 0 ; for ( b_kstr = 0 ; b_kstr < 25 ; b_kstr ++ ) { tmp = tmp_p [
b_kstr ] ; vehicleInputs_data [ b_kstr ] = tmp ; b [ b_kstr ] = tmp ; }
b_bool = false ; b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 25 ) { if (
tmp_e [ ( int32_T ) vehicleInputs_data [ b_kstr - 1 ] ] != tmp_e [ ( int32_T
) b [ b_kstr - 1 ] ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool
= true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; if ( b_bool ) { nmatched =
1 ; for ( b_kstr = 0 ; b_kstr < 25 ; b_kstr ++ ) { b [ b_kstr ] = tmp_p [
b_kstr ] ; } } else { for ( b_kstr = 0 ; b_kstr < 25 ; b_kstr ++ ) { b [
b_kstr ] = ' ' ; } } if ( nmatched == 0 ) { for ( b_kstr = 0 ; b_kstr < 25 ;
b_kstr ++ ) { vehicleInputs_data_p [ b_kstr ] = ' ' ; } } else { for ( b_kstr
= 0 ; b_kstr < 25 ; b_kstr ++ ) { vehicleInputs_data_p [ b_kstr ] = b [
b_kstr ] ; } } for ( b_kstr = 0 ; b_kstr < 25 ; b_kstr ++ ) { b [ b_kstr ] =
tmp_p [ b_kstr ] ; } b_bool = false ; b_kstr = 1 ; do { exitg1 = 0 ; if (
b_kstr - 1 < 25 ) { if ( vehicleInputs_data_p [ b_kstr - 1 ] != b [ b_kstr -
1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 =
1 ; } } while ( exitg1 == 0 ) ; for ( b_kstr = 0 ; b_kstr < 25 ; b_kstr ++ )
{ if ( b_bool ) { obj -> KinModel . VehicleInputsInternal [ b_kstr ] = tmp_p
[ b_kstr ] ; } else { obj -> KinModel . VehicleInputsInternal [ b_kstr ] =
tmp_i [ b_kstr ] ; } } obj -> KinModel . WheelBase = obj -> WheelBase ; obj
-> KinModel . VehicleSpeedRange [ 0 ] = obj -> VehicleSpeedRange [ 0 ] ; obj
-> KinModel . VehicleSpeedRange [ 1 ] = obj -> VehicleSpeedRange [ 1 ] ; obj
-> KinModel . MaxSteeringAngle = obj -> MaxSteeringAngle ; } static void
kujql3quxr ( hvt4qmismz * obj ) { int32_T b_kstr ; int32_T ret ; char_T b [
25 ] ; char_T vehicleInputs [ 25 ] ; char_T vehicleInputs_p ; boolean_T
b_bool ; static const char_T tmp [ 25 ] = { 'V' , 'e' , 'h' , 'i' , 'c' , 'l'
, 'e' , 'S' , 'p' , 'e' , 'e' , 'd' , 'S' , 't' , 'e' , 'e' , 'r' , 'i' , 'n'
, 'g' , 'A' , 'n' , 'g' , 'l' , 'e' } ; static const char_T tmp_p [ 128 ] = {
'\x00' , '\x01' , '\x02' , '\x03' , '\x04' , '\x05' , '\x06' , '\x07' ,
'\x08' , '	' , '\x0a' , '\x0b' , '\x0c' , '\x0d' , '\x0e' , '\x0f' , '\x10' ,
'\x11' , '\x12' , '\x13' , '\x14' , '\x15' , '\x16' , '\x17' , '\x18' ,
'\x19' , '\x1a' , '\x1b' , '\x1c' , '\x1d' , '\x1e' , '\x1f' , ' ' , '!' ,
'\"' , '#' , '$' , '%' , '&' , '\'' , '(' , ')' , '*' , '+' , ',' , '-' , '.'
, '/' , '0' , '1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9' , ':' , ';'
, '<' , '=' , '>' , '?' , '@' , 'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g' , 'h'
, 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u'
, 'v' , 'w' , 'x' , 'y' , 'z' , '[' , '\\' , ']' , '^' , '_' , '`' , 'a' ,
'b' , 'c' , 'd' , 'e' , 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' ,
'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z' , '{' ,
'|' , '}' , '~' , '\x7f' } ; static const char_T tmp_e [ 25 ] = { 'V' , 'e' ,
'h' , 'i' , 'c' , 'l' , 'e' , 'S' , 'p' , 'e' , 'e' , 'd' , 'H' , 'e' , 'a' ,
'd' , 'i' , 'n' , 'g' , 'R' , 'a' , 't' , 'e' , '-' , '-' } ; int32_T exitg1
; obj -> isInitialized = 1 ; obj -> KinModel . WheelBase = 1.0 ; obj ->
KinModel . VehicleSpeedRange [ 0 ] = ( rtMinusInf ) ; obj -> KinModel .
VehicleSpeedRange [ 1 ] = ( rtInf ) ; obj -> KinModel . MaxSteeringAngle =
0.78539816339744828 ; ret = 0 ; for ( b_kstr = 0 ; b_kstr < 25 ; b_kstr ++ )
{ vehicleInputs_p = tmp [ b_kstr ] ; vehicleInputs [ b_kstr ] =
vehicleInputs_p ; b [ b_kstr ] = vehicleInputs_p ; } b_bool = false ; b_kstr
= 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 25 ) { if ( tmp_p [ ( int32_T )
vehicleInputs [ b_kstr - 1 ] ] != tmp_p [ ( int32_T ) b [ b_kstr - 1 ] ] ) {
exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } }
while ( exitg1 == 0 ) ; if ( b_bool ) { ret = 1 ; for ( b_kstr = 0 ; b_kstr <
25 ; b_kstr ++ ) { vehicleInputs [ b_kstr ] = tmp [ b_kstr ] ; } } else { for
( b_kstr = 0 ; b_kstr < 25 ; b_kstr ++ ) { vehicleInputs [ b_kstr ] = ' ' ; }
} b_bool = ( ret == 0 ) ; for ( b_kstr = 0 ; b_kstr < 25 ; b_kstr ++ ) {
vehicleInputs_p = vehicleInputs [ b_kstr ] ; if ( b_bool ) { vehicleInputs_p
= ' ' ; } b [ b_kstr ] = tmp [ b_kstr ] ; vehicleInputs [ b_kstr ] =
vehicleInputs_p ; } ret = memcmp ( & vehicleInputs [ 0 ] , & b [ 0 ] , 25 ) ;
for ( b_kstr = 0 ; b_kstr < 25 ; b_kstr ++ ) { if ( ret == 0 ) { obj ->
KinModel . VehicleInputsInternal [ b_kstr ] = tmp [ b_kstr ] ; } else { obj
-> KinModel . VehicleInputsInternal [ b_kstr ] = tmp_e [ b_kstr ] ; } }
hvufdgpiwa ( obj ) ; obj -> TunablePropsChanged = false ; } void
MdlInitialize ( void ) { rtDW . a1zmwvov3f [ 0 ] = rtP .
UnitDelay_InitialCondition ; rtX . conkboh3eg [ 0 ] = rtP .
BicycleKinematicModel_InitialState [ 0 ] ; rtDW . a1zmwvov3f [ 1 ] = rtP .
UnitDelay_InitialCondition ; rtX . conkboh3eg [ 1 ] = rtP .
BicycleKinematicModel_InitialState [ 1 ] ; rtDW . a1zmwvov3f [ 2 ] = rtP .
UnitDelay_InitialCondition ; rtX . conkboh3eg [ 2 ] = rtP .
BicycleKinematicModel_InitialState [ 2 ] ; rtX . cocflzjzvi = rtP .
Integrator1_IC ; hvufdgpiwa ( & rtDW . mo5w51i13m ) ; } void MdlStart ( void
) { { bool externalInputIsInDatasetFormat = false ; void * pISigstreamManager
= rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"Pur_Pursuit/Bicycle Kinematic Model" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 3 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . cn0cvwb2ax . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "bfec99a5-7fdf-4254-b662-b7229f2620be" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . cn0cvwb2ax . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . cn0cvwb2ax . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . cn0cvwb2ax . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . cn0cvwb2ax .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . cn0cvwb2ax . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
cn0cvwb2ax . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
cn0cvwb2ax . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "yg" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "yg" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"Pur_Pursuit/From Workspace1" ) ; sdiLabelU blockSID = sdiGetLabelFromChars (
"" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "yg" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . dxtbgibew0 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "8e8a4317-089a-40ec-b49a-9135d1c959fe" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . dxtbgibew0 . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . dxtbgibew0 . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . dxtbgibew0 . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . dxtbgibew0 .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . dxtbgibew0 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
dxtbgibew0 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
dxtbgibew0 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "xg" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "xg" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"Pur_Pursuit/From Workspace" ) ; sdiLabelU blockSID = sdiGetLabelFromChars (
"" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "xg" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . fx1yyaz2pk . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "23499e5d-5a41-4ba9-ba93-40f8c5bce194" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . fx1yyaz2pk . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . fx1yyaz2pk . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . fx1yyaz2pk . AQHandles , "0.001" ,
0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . fx1yyaz2pk .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . fx1yyaz2pk . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
fx1yyaz2pk . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
fx1yyaz2pk . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "x" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "x" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"x" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "Pur_Pursuit/XY Graph" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "x" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ahfmijeqvd . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"fe43c70b-0271-454b-9c82-c550b59c4ca3" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . ahfmijeqvd . AQHandles , hDT , & srcInfo ) ; if ( rtDW . ahfmijeqvd .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . ahfmijeqvd . AQHandles ,
"0.001" , 0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
ahfmijeqvd . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . ahfmijeqvd .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ahfmijeqvd . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ahfmijeqvd . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . ahfmijeqvd . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "y" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "y" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"y" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "Pur_Pursuit/XY Graph" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "y" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 1 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. bqsprob3xz . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"345b2954-ccb0-41cd-9a45-276a063a0075" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . bqsprob3xz . AQHandles , hDT , & srcInfo ) ; if ( rtDW . bqsprob3xz .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . bqsprob3xz . AQHandles ,
"0.001" , 0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
bqsprob3xz . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . bqsprob3xz .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . bqsprob3xz . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . bqsprob3xz . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . bqsprob3xz . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "x" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "x" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"x" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "Pur_Pursuit/XY Graph1"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "x" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. fvzjprysz3 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"b52db1eb-0cdd-4bcc-b06a-c411cb8302df" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . fvzjprysz3 . AQHandles , hDT , & srcInfo ) ; if ( rtDW . fvzjprysz3 .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . fvzjprysz3 . AQHandles ,
"0.001" , 0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
fvzjprysz3 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . fvzjprysz3 .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . fvzjprysz3 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . fvzjprysz3 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . fvzjprysz3 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "y" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "y" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"y" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "Pur_Pursuit/XY Graph1"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "y" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 1 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. mla0qiaiyr . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"7304b6be-1033-42c8-8702-d436f771e35a" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . mla0qiaiyr . AQHandles , hDT , & srcInfo ) ; if ( rtDW . mla0qiaiyr .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . mla0qiaiyr . AQHandles ,
"0.001" , 0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
mla0qiaiyr . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . mla0qiaiyr .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . mla0qiaiyr . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . mla0qiaiyr . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . mla0qiaiyr . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "xg" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "xg" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"xg" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "Pur_Pursuit/XY Graph2"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "xg" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. i5b5f5gswt . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"c68576c1-5905-47f0-b29a-67defb4af4ba" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . i5b5f5gswt . AQHandles , hDT , & srcInfo ) ; if ( rtDW . i5b5f5gswt .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . i5b5f5gswt . AQHandles ,
"0.001" , 0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
i5b5f5gswt . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . i5b5f5gswt .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . i5b5f5gswt . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . i5b5f5gswt . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . i5b5f5gswt . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "yg" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "yg" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"yg" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "Pur_Pursuit/XY Graph2"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "yg" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 1 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. evmpntopbw . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"ef190c73-2d7e-4ff8-a780-572aca6a3322" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . evmpntopbw . AQHandles , hDT , & srcInfo ) ; if ( rtDW . evmpntopbw .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . evmpntopbw . AQHandles ,
"0.001" , 0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
evmpntopbw . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . evmpntopbw .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . evmpntopbw . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . evmpntopbw . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . evmpntopbw . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "Pur_Pursuit/Integrator1" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. dhg1dsnm2b . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"fe754b31-a956-4c34-bfca-764d78d77a3b" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . dhg1dsnm2b . AQHandles , hDT , & srcInfo ) ; if ( rtDW . dhg1dsnm2b .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . dhg1dsnm2b . AQHandles ,
"0.001" , 0.001 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
dhg1dsnm2b . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . dhg1dsnm2b .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . dhg1dsnm2b . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . dhg1dsnm2b . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { FWksInfo * fromwksInfo ; if ( (
fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL )
) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Yg_sim" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 1 ; fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo
-> data = ( void * ) rtP . FromWorkspace1_Data0 ; fromwksInfo -> nDataPoints
= 180001 ; fromwksInfo -> time = ( double * ) rtP . FromWorkspace1_Time0 ;
rtDW . d5sksq0fq2 . TimePtr = fromwksInfo -> time ; rtDW . d5sksq0fq2 .
DataPtr = fromwksInfo -> data ; rtDW . d5sksq0fq2 . RSimInfoPtr = fromwksInfo
; } rtDW . jexlkyqrpd . PrevIndex = 0 ; } { FWksInfo * fromwksInfo ; if ( (
fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL )
) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Xg_sim" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 1 ; fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo
-> data = ( void * ) rtP . FromWorkspace_Data0 ; fromwksInfo -> nDataPoints =
180001 ; fromwksInfo -> time = ( double * ) rtP . FromWorkspace_Time0 ; rtDW
. egyf5jgm11 . TimePtr = fromwksInfo -> time ; rtDW . egyf5jgm11 . DataPtr =
fromwksInfo -> data ; rtDW . egyf5jgm11 . RSimInfoPtr = fromwksInfo ; } rtDW
. ppku20gijp . PrevIndex = 0 ; } rtDW . mo5w51i13m . isInitialized = 0 ; rtDW
. mo5w51i13m . tunablePropertyChanged [ 0 ] = false ; rtDW . mo5w51i13m .
tunablePropertyChanged [ 1 ] = false ; rtDW . mo5w51i13m .
tunablePropertyChanged [ 2 ] = false ; rtDW . p0fcrc55ex = true ; if ( rtDW .
mo5w51i13m . isInitialized == 1 ) { rtDW . mo5w51i13m . TunablePropsChanged =
true ; rtDW . mo5w51i13m . tunablePropertyChanged [ 0 ] = true ; } rtDW .
mo5w51i13m . WheelBase = rtP . BicycleKinematicModel_WheelBase ; if ( rtDW .
mo5w51i13m . isInitialized == 1 ) { rtDW . mo5w51i13m . TunablePropsChanged =
true ; rtDW . mo5w51i13m . tunablePropertyChanged [ 1 ] = true ; } rtDW .
mo5w51i13m . VehicleSpeedRange [ 0 ] = rtP .
BicycleKinematicModel_VehicleSpeedRange [ 0 ] ; rtDW . mo5w51i13m .
VehicleSpeedRange [ 1 ] = rtP . BicycleKinematicModel_VehicleSpeedRange [ 1 ]
; if ( rtDW . mo5w51i13m . isInitialized == 1 ) { rtDW . mo5w51i13m .
TunablePropsChanged = true ; rtDW . mo5w51i13m . tunablePropertyChanged [ 2 ]
= true ; } rtDW . mo5w51i13m . MaxSteeringAngle = rtP .
BicycleKinematicModel_MaxSteeringAngle ; kujql3quxr ( & rtDW . mo5w51i13m ) ;
MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) { real_T tmp [ 6 ] ;
real_T absxk ; real_T ll1ednzpqe ; real_T scale ; real_T t ; int32_T ret ;
char_T b [ 25 ] ; boolean_T p ; boolean_T p_p ; static const char_T tmp_p [
25 ] = { 'V' , 'e' , 'h' , 'i' , 'c' , 'l' , 'e' , 'S' , 'p' , 'e' , 'e' ,
'd' , 'S' , 't' , 'e' , 'e' , 'r' , 'i' , 'n' , 'g' , 'A' , 'n' , 'g' , 'l' ,
'e' } ; static const char_T tmp_e [ 25 ] = { 'V' , 'e' , 'h' , 'i' , 'c' ,
'l' , 'e' , 'S' , 'p' , 'e' , 'e' , 'd' , 'H' , 'e' , 'a' , 'd' , 'i' , 'n' ,
'g' , 'R' , 'a' , 't' , 'e' , '-' , '-' } ; boolean_T exitg1 ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . kusgqhxytc [ 0 ] = rtDW . a1zmwvov3f
[ 0 ] ; rtB . kusgqhxytc [ 1 ] = rtDW . a1zmwvov3f [ 1 ] ; rtB . kusgqhxytc [
2 ] = rtDW . a1zmwvov3f [ 2 ] ; } rtB . plbv1cocpa [ 0 ] = rtX . conkboh3eg [
0 ] ; rtB . plbv1cocpa [ 1 ] = rtX . conkboh3eg [ 1 ] ; rtB . plbv1cocpa [ 2
] = rtX . conkboh3eg [ 2 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if (
rtDW . cn0cvwb2ax . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
rtDW . cn0cvwb2ax . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB
. plbv1cocpa [ 0 ] + 0 ) ; } } } { real_T * pDataValues = ( real_T * ) rtDW .
d5sksq0fq2 . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . d5sksq0fq2
. TimePtr ; int_T currTimeIndex = rtDW . jexlkyqrpd . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . d5sksq0fq2 . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . jexlkyqrpd . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { rtB . kspqb0c2ki =
pDataValues [ currTimeIndex ] ; } else { rtB . kspqb0c2ki = pDataValues [
currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; rtB . kspqb0c2ki = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if
( rtDW . dxtbgibew0 . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal
( rtDW . dxtbgibew0 . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) &
rtB . kspqb0c2ki + 0 ) ; } } } { real_T * pDataValues = ( real_T * ) rtDW .
egyf5jgm11 . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . egyf5jgm11
. TimePtr ; int_T currTimeIndex = rtDW . ppku20gijp . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . egyf5jgm11 . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . ppku20gijp . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { rtB . khzscda3ph =
pDataValues [ currTimeIndex ] ; } else { rtB . khzscda3ph = pDataValues [
currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; rtB . khzscda3ph = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if
( rtDW . fx1yyaz2pk . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal
( rtDW . fx1yyaz2pk . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) &
rtB . khzscda3ph + 0 ) ; } } { if ( rtDW . ahfmijeqvd . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . ahfmijeqvd . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . kusgqhxytc [ 0 ] + 0 ) ; } } {
if ( rtDW . bqsprob3xz . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . bqsprob3xz . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . kusgqhxytc [ 1 ] + 0 ) ; } } { if ( rtDW . fvzjprysz3 .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . fvzjprysz3 .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . plbv1cocpa [ 0 ] +
0 ) ; } } { if ( rtDW . mla0qiaiyr . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . mla0qiaiyr . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . plbv1cocpa [ 1 ] + 0 ) ; } } { if ( rtDW . i5b5f5gswt .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . i5b5f5gswt .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . khzscda3ph + 0 ) ;
} } { if ( rtDW . evmpntopbw . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . evmpntopbw . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . kspqb0c2ki + 0 ) ; } } } scale = 3.3121686421112381E-170 ;
absxk = muDoubleScalarAbs ( rtB . khzscda3ph - ( ( rtB . kusgqhxytc [ 0 ] -
0.5 * rtP . L ) + rtP . d ) * muDoubleScalarCos ( rtB . kusgqhxytc [ 2 ] ) )
; if ( absxk > 3.3121686421112381E-170 ) { ll1ednzpqe = 1.0 ; scale = absxk ;
} else { t = absxk / 3.3121686421112381E-170 ; ll1ednzpqe = t * t ; } absxk =
muDoubleScalarAbs ( rtB . kspqb0c2ki - ( ( rtB . kusgqhxytc [ 1 ] - 0.5 * rtP
. L ) + rtP . d ) * muDoubleScalarSin ( rtB . kusgqhxytc [ 2 ] ) ) ; if (
absxk > scale ) { t = scale / absxk ; ll1ednzpqe = ll1ednzpqe * t * t + 1.0 ;
scale = absxk ; } else { t = absxk / scale ; ll1ednzpqe += t * t ; }
ll1ednzpqe = scale * muDoubleScalarSqrt ( ll1ednzpqe ) ; ll1ednzpqe *= rtP .
Gain_Gain ; if ( rtDW . mo5w51i13m . WheelBase != rtP .
BicycleKinematicModel_WheelBase ) { if ( rtDW . mo5w51i13m . isInitialized ==
1 ) { rtDW . mo5w51i13m . TunablePropsChanged = true ; rtDW . mo5w51i13m .
tunablePropertyChanged [ 0 ] = true ; } rtDW . mo5w51i13m . WheelBase = rtP .
BicycleKinematicModel_WheelBase ; } p = false ; p_p = true ; ret = 0 ; exitg1
= false ; while ( ( ! exitg1 ) && ( ret < 2 ) ) { if ( ! ( rtDW . mo5w51i13m
. VehicleSpeedRange [ ret ] == rtP . BicycleKinematicModel_VehicleSpeedRange
[ ret ] ) ) { p_p = false ; exitg1 = true ; } else { ret ++ ; } } if ( p_p )
{ p = true ; } if ( ! p ) { if ( rtDW . mo5w51i13m . isInitialized == 1 ) {
rtDW . mo5w51i13m . TunablePropsChanged = true ; rtDW . mo5w51i13m .
tunablePropertyChanged [ 1 ] = true ; } rtDW . mo5w51i13m . VehicleSpeedRange
[ 0 ] = rtP . BicycleKinematicModel_VehicleSpeedRange [ 0 ] ; rtDW .
mo5w51i13m . VehicleSpeedRange [ 1 ] = rtP .
BicycleKinematicModel_VehicleSpeedRange [ 1 ] ; } if ( rtDW . mo5w51i13m .
MaxSteeringAngle != rtP . BicycleKinematicModel_MaxSteeringAngle ) { if (
rtDW . mo5w51i13m . isInitialized == 1 ) { rtDW . mo5w51i13m .
TunablePropsChanged = true ; rtDW . mo5w51i13m . tunablePropertyChanged [ 2 ]
= true ; } rtDW . mo5w51i13m . MaxSteeringAngle = rtP .
BicycleKinematicModel_MaxSteeringAngle ; } if ( rtDW . mo5w51i13m .
TunablePropsChanged ) { rtDW . mo5w51i13m . TunablePropsChanged = false ; if
( rtDW . mo5w51i13m . tunablePropertyChanged [ 1 ] ) { rtDW . mo5w51i13m .
KinModel . VehicleSpeedRange [ 0 ] = rtDW . mo5w51i13m . VehicleSpeedRange [
0 ] ; rtDW . mo5w51i13m . KinModel . VehicleSpeedRange [ 1 ] = rtDW .
mo5w51i13m . VehicleSpeedRange [ 1 ] ; } if ( rtDW . mo5w51i13m .
tunablePropertyChanged [ 0 ] ) { rtDW . mo5w51i13m . KinModel . WheelBase =
rtDW . mo5w51i13m . WheelBase ; } if ( rtDW . mo5w51i13m .
tunablePropertyChanged [ 2 ] ) { rtDW . mo5w51i13m . KinModel .
MaxSteeringAngle = rtDW . mo5w51i13m . MaxSteeringAngle ; } rtDW . mo5w51i13m
. tunablePropertyChanged [ 0 ] = false ; rtDW . mo5w51i13m .
tunablePropertyChanged [ 1 ] = false ; rtDW . mo5w51i13m .
tunablePropertyChanged [ 2 ] = false ; } scale = muDoubleScalarMin (
muDoubleScalarMax ( rtP . v , rtDW . mo5w51i13m . KinModel .
VehicleSpeedRange [ 0 ] ) , rtDW . mo5w51i13m . KinModel . VehicleSpeedRange
[ 1 ] ) ; absxk = 0.0 ; for ( ret = 0 ; ret < 25 ; ret ++ ) { b [ ret ] =
tmp_p [ ret ] ; } ret = memcmp ( & rtDW . mo5w51i13m . KinModel .
VehicleInputsInternal [ 0 ] , & b [ 0 ] , 25 ) ; if ( ret == 0 ) { t = 0.0 ;
} else { for ( ret = 0 ; ret < 25 ; ret ++ ) { b [ ret ] = tmp_e [ ret ] ; }
ret = memcmp ( & rtDW . mo5w51i13m . KinModel . VehicleInputsInternal [ 0 ] ,
& b [ 0 ] , 25 ) ; if ( ret == 0 ) { t = 1.0 ; } else { t = - 1.0 ; } }
switch ( ( int32_T ) t ) { case 0 : absxk = ll1ednzpqe ; if (
muDoubleScalarAbs ( ll1ednzpqe ) > rtDW . mo5w51i13m . KinModel .
MaxSteeringAngle ) { absxk = muDoubleScalarSign ( ll1ednzpqe ) * rtDW .
mo5w51i13m . KinModel . MaxSteeringAngle ; } absxk = scale / rtDW .
mo5w51i13m . KinModel . WheelBase * muDoubleScalarTan ( absxk ) ; break ;
case 1 : absxk = muDoubleScalarAtan2 ( ll1ednzpqe * rtDW . mo5w51i13m .
KinModel . WheelBase , rtP . v ) ; if ( muDoubleScalarAbs ( absxk ) > rtDW .
mo5w51i13m . KinModel . MaxSteeringAngle ) { absxk = muDoubleScalarSign (
absxk ) * rtDW . mo5w51i13m . KinModel . MaxSteeringAngle ; } scale = rtP . v
; absxk = rtP . v / rtDW . mo5w51i13m . KinModel . WheelBase *
muDoubleScalarTan ( absxk ) ; break ; } tmp [ 0 ] = muDoubleScalarCos ( rtB .
plbv1cocpa [ 2 ] ) ; tmp [ 3 ] = 0.0 ; tmp [ 1 ] = muDoubleScalarSin ( rtB .
plbv1cocpa [ 2 ] ) ; tmp [ 4 ] = 0.0 ; tmp [ 2 ] = 0.0 ; tmp [ 5 ] = 1.0 ;
for ( ret = 0 ; ret < 3 ; ret ++ ) { rtB . jzgfedf1ea [ ret ] = tmp [ ret + 3
] * absxk + tmp [ ret ] * scale ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
rtB . kj3tksixi1 = rtP . v * muDoubleScalarCos ( rtB . kusgqhxytc [ 2 ] ) ;
rtB . abmrnhnnfz = rtP . v * muDoubleScalarSin ( rtB . kusgqhxytc [ 2 ] ) ; }
rtB . jgbddpaxfy = rtP . v / rtP . L * ll1ednzpqe ; rtB . c4go1p3qce = rtX .
cocflzjzvi ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( rtDW . dhg1dsnm2b
. AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . dhg1dsnm2b
. AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . c4go1p3qce + 0 )
; } } } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID2 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . a1zmwvov3f [ 0 ] = rtB . kj3tksixi1
; rtDW . a1zmwvov3f [ 1 ] = rtB . abmrnhnnfz ; rtDW . a1zmwvov3f [ 2 ] = rtB
. jgbddpaxfy ; } UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID2 ( int_T tid
) { UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { XDot *
_rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; _rtXdot -> conkboh3eg [
0 ] = rtB . jzgfedf1ea [ 0 ] ; _rtXdot -> conkboh3eg [ 1 ] = rtB . jzgfedf1ea
[ 1 ] ; _rtXdot -> conkboh3eg [ 2 ] = rtB . jzgfedf1ea [ 2 ] ; _rtXdot ->
cocflzjzvi = 0.0 ; } void MdlProjection ( void ) { } void MdlTerminate ( void
) { rt_FREE ( rtDW . d5sksq0fq2 . RSimInfoPtr ) ; rt_FREE ( rtDW . egyf5jgm11
. RSimInfoPtr ) ; { if ( rtDW . cn0cvwb2ax . AQHandles ) {
sdiTerminateStreaming ( & rtDW . cn0cvwb2ax . AQHandles ) ; } } { if ( rtDW .
dxtbgibew0 . AQHandles ) { sdiTerminateStreaming ( & rtDW . dxtbgibew0 .
AQHandles ) ; } } { if ( rtDW . fx1yyaz2pk . AQHandles ) {
sdiTerminateStreaming ( & rtDW . fx1yyaz2pk . AQHandles ) ; } } { if ( rtDW .
ahfmijeqvd . AQHandles ) { sdiTerminateStreaming ( & rtDW . ahfmijeqvd .
AQHandles ) ; } } { if ( rtDW . bqsprob3xz . AQHandles ) {
sdiTerminateStreaming ( & rtDW . bqsprob3xz . AQHandles ) ; } } { if ( rtDW .
fvzjprysz3 . AQHandles ) { sdiTerminateStreaming ( & rtDW . fvzjprysz3 .
AQHandles ) ; } } { if ( rtDW . mla0qiaiyr . AQHandles ) {
sdiTerminateStreaming ( & rtDW . mla0qiaiyr . AQHandles ) ; } } { if ( rtDW .
i5b5f5gswt . AQHandles ) { sdiTerminateStreaming ( & rtDW . i5b5f5gswt .
AQHandles ) ; } } { if ( rtDW . evmpntopbw . AQHandles ) {
sdiTerminateStreaming ( & rtDW . evmpntopbw . AQHandles ) ; } } { if ( rtDW .
dhg1dsnm2b . AQHandles ) { sdiTerminateStreaming ( & rtDW . dhg1dsnm2b .
AQHandles ) ; } } } static void mr_Pur_Pursuit_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_Pur_Pursuit_cacheDataAsMxArray ( mxArray * destArray , mwIndex
i , int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Pur_Pursuit_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_Pur_Pursuit_restoreDataFromMxArray ( void * destData , const mxArray
* srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_Pur_Pursuit_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_Pur_Pursuit_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int
j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Pur_Pursuit_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Pur_Pursuit_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_Pur_Pursuit_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , const void * srcData , size_t numBytes ) ; static
void mr_Pur_Pursuit_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
{ uint8_T * varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber (
destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes
] , ( const uint8_T * ) srcData , numBytes ) ; } static void
mr_Pur_Pursuit_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_Pur_Pursuit_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Pur_Pursuit_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_Pur_Pursuit_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_Pur_Pursuit_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Pur_Pursuit_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_Pur_Pursuit_GetDWork ( ) { static const char *
ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW
= mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Pur_Pursuit_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB )
, sizeof ( rtB ) ) ; { static const char * rtdwDataFieldNames [ 5 ] = {
"rtDW.mo5w51i13m" , "rtDW.a1zmwvov3f" , "rtDW.jexlkyqrpd" , "rtDW.ppku20gijp"
, "rtDW.p0fcrc55ex" , } ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 ,
5 , rtdwDataFieldNames ) ; mr_Pur_Pursuit_cacheDataAsMxArray ( rtdwData , 0 ,
0 , ( const void * ) & ( rtDW . mo5w51i13m ) , sizeof ( rtDW . mo5w51i13m ) )
; mr_Pur_Pursuit_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & (
rtDW . a1zmwvov3f ) , sizeof ( rtDW . a1zmwvov3f ) ) ;
mr_Pur_Pursuit_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & (
rtDW . jexlkyqrpd ) , sizeof ( rtDW . jexlkyqrpd ) ) ;
mr_Pur_Pursuit_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & (
rtDW . ppku20gijp ) , sizeof ( rtDW . ppku20gijp ) ) ;
mr_Pur_Pursuit_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & (
rtDW . p0fcrc55ex ) , sizeof ( rtDW . p0fcrc55ex ) ) ; mxSetFieldByNumber (
ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void mr_Pur_Pursuit_SetDWork (
const mxArray * ssDW ) { ( void ) ssDW ;
mr_Pur_Pursuit_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0 , 0 ,
sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0
, 1 ) ; mr_Pur_Pursuit_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mo5w51i13m ) , rtdwData , 0 , 0 , sizeof ( rtDW . mo5w51i13m ) ) ;
mr_Pur_Pursuit_restoreDataFromMxArray ( ( void * ) & ( rtDW . a1zmwvov3f ) ,
rtdwData , 0 , 1 , sizeof ( rtDW . a1zmwvov3f ) ) ;
mr_Pur_Pursuit_restoreDataFromMxArray ( ( void * ) & ( rtDW . jexlkyqrpd ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . jexlkyqrpd ) ) ;
mr_Pur_Pursuit_restoreDataFromMxArray ( ( void * ) & ( rtDW . ppku20gijp ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . ppku20gijp ) ) ;
mr_Pur_Pursuit_restoreDataFromMxArray ( ( void * ) & ( rtDW . p0fcrc55ex ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . p0fcrc55ex ) ) ; } } mxArray *
mr_Pur_Pursuit_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 3 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 3 ] = { "Scope" , "Scope" , "MATLABSystem" , } ; static
const char * blockPath [ 3 ] = { "Pur_Pursuit/Scope" , "Pur_Pursuit/Scope1" ,
"Pur_Pursuit/Bicycle Kinematic Model/MATLAB System" , } ; static const int
reason [ 3 ] = { 0 , 0 , 6 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 3 ; ++ (
subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript ( data , 2 ,
subs ) ; mxSetCell ( data , offset , mxCreateString ( blockType [ subs [ 0 ]
] ) ) ; subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateDoubleScalar ( ( double ) reason [ subs [
0 ] ] ) ) ; } } return data ; } void MdlInitializeSizes ( void ) {
ssSetNumContStates ( rtS , 4 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 32 ) ;
ssSetNumBlockIO ( rtS , 9 ) ; ssSetNumBlockParams ( rtS , 720017 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.001 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 2194112766U ) ; ssSetChecksumVal ( rtS , 1 ,
2281534096U ) ; ssSetChecksumVal ( rtS , 2 , 3844149734U ) ; ssSetChecksumVal
( rtS , 3 , 1956017030U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; ( void ) memset ( ( char * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0
, sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 25 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
Pur_Pursuit_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS ,
true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "Pur_Pursuit" ) ;
ssSetPath ( rtS , "Pur_Pursuit" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal (
rtS , 180.0 ) ; ssSetStepSize ( rtS , 0.001 ) ; ssSetFixedStepSize ( rtS ,
0.001 ) ; { static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo .
loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ;
} { { static int_T rt_LoggedStateWidths [ ] = { 3 , 1 , 3 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 3 , 1 , 3 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ;
static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) ,
( NULL ) , ( NULL ) } ; static const char_T * rt_LoggedStateLabels [ ] = {
"CSTATE" , "CSTATE" , "DSTATE" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
"Pur_Pursuit/Bicycle Kinematic Model/Integrator" , "Pur_Pursuit/Integrator1"
, "Pur_Pursuit/Unit Delay" } ; static const char_T * rt_LoggedStateNames [ ]
= { "" , "" , "DSTATE" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] = {
0 , 0 , 0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { {
0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 1 ,
1 } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 3 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 3 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . conkboh3eg [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . cocflzjzvi ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) rtDW . a1zmwvov3f ; } rtliSetLogT
( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX ( ssGetRTWLogInfo ( rtS )
, "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) , "xFinal" ) ;
rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 4 ] ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS , "ode3" ) ;
ssSetVariableStepSolver ( rtS , 0 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetSolverStateProjection ( rtS ,
0 ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetTNextTid ( rtS , INT_MIN ) ; ssSetTNext ( rtS ,
rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ; ssSetNumNonsampledZCs ( rtS ,
0 ) ; ssSetContStateDisabled ( rtS , contStatesDisabled ) ; }
ssSetChecksumVal ( rtS , 0 , 2194112766U ) ; ssSetChecksumVal ( rtS , 1 ,
2281534096U ) ; ssSetChecksumVal ( rtS , 2 , 3844149734U ) ; ssSetChecksumVal
( rtS , 3 , 1956017030U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 3 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_Pur_Pursuit_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP (
rtS , mr_Pur_Pursuit_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_Pur_Pursuit_SetDWork ) ; rtP . BicycleKinematicModel_VehicleSpeedRange [ 0
] = rtMinusInf ; rtP . BicycleKinematicModel_VehicleSpeedRange [ 1 ] = rtInf
; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS )
) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
