#ifndef SVRROUTER_H
#define SVRROUTER_H

#include "structs.h"


uint svrRouter_CreateDefaultParm(void);
uint svrRouter_EndLoadClient(IFF_Header const *,svrMultiClientParm *);
uint svrRouter_LoadClient(IFF_Header const *,svrLoadParm const *);
uint svrRouter_DestroyClient(svrClient *);
uint svrRouter_DisconnectClient(svrClient *);
uint svrRouter_ProcessClient(svrClient *);
uint svrRouter_ConnectClient(svrClient *);
uint svrRouter_CreateClient(svrClientParm const *);
uint svrRouter_EndServer(void);
uint svrRouter_StartServer(void);
uint svrRouter_ProcessServer(void);
uint svrRouter_ServerFromClient(svrClient const *);
uint svrRouter_Destructor_svrRouter(void);
uint svrRouter_vtbl;


#endif