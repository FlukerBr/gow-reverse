#ifndef RENFLASHSERVER_H
#define RENFLASHSERVER_H

#include "structs.h"


uint renFlashServer_Destructor_renFlashServer(void);
uint renFlashServer_IFFActivate(IFF_Header *,char const *);
uint renFlashServer_EndFlash(renFlashClient *);
uint renFlashServer_BeginFlash(char const *);
uint renFlashServer_CreateMasterContext(void);
uint renFlashServer_renFlashServer(svrParm const *);
uint renFlashServer_SetMsgParameters(float,VUVec4 *,float *);
uint renFlashServer_vtbl;
uint renFlashServer_view;
uint renFlashServer_masterContext;


#endif