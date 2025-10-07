#ifndef RENMASTERMATERIALCONTEXT_H
#define RENMASTERMATERIALCONTEXT_H

#include "structs.h"


uint renMasterMaterialContext_FreeClient(svrClient *);
uint renMasterMaterialContext_AllocateClient(svrClientParm const *);
uint renMasterMaterialContext_Destructor_renMasterMaterialContext(void);
uint renMasterMaterialContext_ProcessServer(void);
uint renMasterMaterialContext_BuildMaterialKeyList(void);
uint renMasterMaterialContext_BuildMaterialKeyMap(void);
uint renMasterMaterialContext_GetNumberOfSortKeys(void);
uint renMasterMaterialContext_vtbl;


#endif