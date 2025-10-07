#ifndef SVRMASTER_H
#define SVRMASTER_H

#include "structs.h"


uint svrMaster_FreeClient(svrClient *);
uint svrMaster_UnPauseAllClients(void);
uint svrMaster_PauseAllClients(void);
uint svrMaster_LoadClient(IFF_Header const *,svrLoadParm const *);
uint svrMaster_DisconnectClient(svrClient *);
uint svrMaster_ConnectClient(svrClient *);
uint svrMaster_EndClient(svrClient *);
uint svrMaster_StartClient(svrClient *,svrClientParm const *);
uint svrMaster_ProcessClient(svrClient *);
uint svrMaster_Destructor_svrMaster(void);
uint svrMaster_AllocateClient(svrClientParm const *);
uint svrMaster_vtbl;


#endif