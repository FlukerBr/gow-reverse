#ifndef RENMASTERLIGHTCONTEXT_H
#define RENMASTERLIGHTCONTEXT_H

#include "structs.h"


uint renMasterLightContext_LoadClient(IFF_Header const *,svrLoadParm const *);
uint renMasterLightContext_FreeClient(svrClient *);
uint renMasterLightContext_AllocateClient(svrClientParm const *);
uint renMasterLightContext_ProcessServer(void);
uint renMasterLightContext_MakeLightContext(VUVec4 *,VUVec4,int,int);
uint renMasterLightContext_UpdateLightGrid(void);
uint renMasterLightContext_NotifyClientDisconnect(svrClient *);
uint renMasterLightContext_NotifyClientConnect(svrClient *);
uint renMasterLightContext_Destructor_renMasterLightContext(void);
uint renMasterLightContext_renMasterLightContext(svrClientParm const *);
uint renMasterLightContext_vtbl;


#endif