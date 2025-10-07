#ifndef RENGFXCLUTCONTEXT_H
#define RENGFXCLUTCONTEXT_H

#include "structs.h"


uint renGfxClutContext_FreeClient(svrClient *);
uint renGfxClutContext_AllocateClient_(svrClientParm const *);
uint renGfxClutContext_AllocateClient(IFF_Header const *,svrLoadParm const *);
uint renGfxClutContext_EndLoadClient(IFF_Header const *,svrMultiClientParm *);
uint renGfxClutContext_Destructor_renGfxClutContext(void);
uint renGfxClutContext_LoadClient(IFF_Header const *,svrLoadParm const *);
uint renGfxClutContext_PreProcessALLClientsForVRAM(ushort,int);
uint renGfxClutContext_RemoveALLClientsFromVRAM(int,int);
uint renGfxClutContext_vtbl;


#endif