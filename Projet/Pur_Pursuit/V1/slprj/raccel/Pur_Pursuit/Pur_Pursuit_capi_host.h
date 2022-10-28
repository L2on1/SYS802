#ifndef RTW_HEADER_Pur_Pursuit_cap_host_h__
#define RTW_HEADER_Pur_Pursuit_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
Pur_Pursuit_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void Pur_Pursuit_host_InitializeDataMapInfo ( Pur_Pursuit_host_DataMapInfo_T
* dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
