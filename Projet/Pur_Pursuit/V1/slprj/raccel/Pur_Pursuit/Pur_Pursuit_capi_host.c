#include "Pur_Pursuit_capi_host.h"
static Pur_Pursuit_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        Pur_Pursuit_host_InitializeDataMapInfo(&(root), "Pur_Pursuit");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
