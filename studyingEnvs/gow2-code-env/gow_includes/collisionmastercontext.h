#ifndef COLLISIONMASTERCONTEXT_H
#define COLLISIONMASTERCONTEXT_H

#include "structs.h"


uint collisionMasterContext_FindCollisions(void);
uint collisionMasterContext_RegisterCallback(collisionInput const *);
uint collisionMasterContext_EndTestVolume(void);
uint collisionMasterContext_BeginTestVolume(VUVec4,float);
uint collisionMasterContext_GetAttributeID(char const *);
uint collisionMasterContext_CheckATRVersion(int);
uint collisionMasterContext_FindCollisionObjects(VUVec4,float);
uint collisionMasterContext_FindCollisionSpheres(VUVec4,float);
uint collisionMasterContext_PointTest(VUVec4);
uint collisionMasterContext_SweptSphereTest(VUVec4,VUVec4);
uint collisionMasterContext_LineTest(VUVec4,VUVec4);
uint collisionMasterContext_SphereGridTest(VUVec4,collisionInput const *);
uint collisionMasterContext_ProcessServer(void);
uint collisionMasterContext_BuildGridAndArrays(void);
uint collisionMasterContext_FreeGrid(void);
uint collisionMasterContext_AllocGrid(int *,int);
uint collisionMasterContext_RemoveSheet(collisionClient *);
uint collisionMasterContext_AddSheet(collisionClient *);
uint collisionMasterContext_NotifyClientDisconnect(svrClient *);
uint collisionMasterContext_NotifyClientConnect(svrClient *);
uint collisionMasterContext_FreeClient(svrClient *);
uint collisionMasterContext_AllocateClient(svrClientParm const *);
uint collisionMasterContext_Destructor_collisionMasterContext(void);
uint collisionMasterContext_collisionMasterContext(svrClientParm const *);
uint collisionMasterContext_vtbl;


#endif