#ifndef RENMASTERGFXCLUTCONTEXT_H
#define RENMASTERGFXCLUTCONTEXT_H

#include "structs.h"


uint renMasterGfxClutContext_FreeClient(svrClient *);
uint renMasterGfxClutContext_AllocateClient(svrClientParm const *);
uint renMasterGfxClutContext_Destructor_renMasterGfxClutContext(void);
uint renMasterGfxClutContext_ProcessServer(void);
uint renMasterGfxClutContext_NotifyClientDisconnect(svrClient *);
uint renMasterGfxClutContext_RemoveALLClientsFromVRAM(int,int);
uint renMasterGfxClutContext_vtbl;


#endif