#ifndef COLLISIONCONTEXT_H
#define COLLISIONCONTEXT_H

#include "structs.h"


uint collisionContext_ProcessClient(svrClient *);
uint collisionContext_Destructor_collisionContext(void);
uint collisionContext_UpdateAllSpheres(SphereGrid **,collisionClient **,int *);
uint collisionContext_NotifyClientDisconnect(svrClient *);
uint collisionContext_NotifyClientConnect(svrClient *);
uint collisionContext_FreeClient(svrClient *);
uint collisionContext_AllocateClient(svrClientParm const *);
uint collisionContext_LoadClient(IFF_Header const *,svrLoadParm const *);
uint collisionContext_collisionContext(svrParm const *);
uint collisionContext_vtbl;


#endif