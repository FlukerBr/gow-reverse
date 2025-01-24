#ifndef RENMODELSERVERCONTEXT_H
#define RENMODELSERVERCONTEXT_H

#include "structs.h"


uint renModelServerContext_CreateDefaultParm(int);
uint renModelServerContext_NotifyClientDisconnect(svrClient *);
uint renModelServerContext_NotifyClientConnect(svrClient *);
uint renModelServerContext_EndLoadClient(IFF_Header const *,svrMultiClientParm *);
uint renModelServerContext_FreeClient(svrClient *);
uint renModelServerContext_AllocateClient(svrClientParm const *);
uint renModelServerContext_PreAllocateStaticSphereTreeMemory(void);
uint renModelServerContext_BuildStaticSphereTree(void);
uint renModelServerContext_Prep(void);
uint renModelServerContext_PrepModel(renModel *);
uint renModelServerContext_ProcessServer(void);
uint renModelServerContext_CullStaticModels(CullSphere *,VUMat4 const *,int,uint);
uint renModelServerContext_SetupRenderArgs(renModel *,renModelGroup const *);
uint renModelServerContext_ProcessAllPrims(renModel *,int,renPartDetailSet const *,float,int);
uint renModelServerContext_ProcessAllParts(renModel *,renModelGroup const *,VUMat4 const *,uint,float);
uint renModelServerContext_CullPrims(renModel *,int,renPartDetailSet const *,float,VUMat4 const *);
uint renModelServerContext_CullPartInstance(renModel *,renModelGroup const *,VUMat4 const *,int,uint,CullSphere const *);
uint renModelServerContext_ProcessModel(renModel *,int);
uint renModelServerContext_LoadClient(IFF_Header const *,svrLoadParm const *);
uint renModelServerContext_Destructor_renModelServerContext(void);
uint renModelServerContext_renModelServerContext(svrParm const *);
uint renModelServerContext_vtbl;


#endif