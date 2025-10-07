#ifndef GOGAMEOBJECT_H
#define GOGAMEOBJECT_H

#include "structs.h"


uint goGameObject_SetTimeZone(short);
uint goGameObject_ClrFlagR(uint);
uint goGameObject_SetFlagR(uint);
uint goGameObject_GetAnimRootLWMatrix(void);
uint goGameObject_CalcJointLWMatrix(int,VUMat4 *);
uint goGameObject_CallCallback(goEvent const *);
uint goGameObject_GetCallback(void **);
uint goGameObject_SetCallback(void (*)(goGameObject *,goEvent const *,void *),void *);
uint goGameObject_DetachGameObject(goGameObject *,bool);
uint goGameObject_AttachGameObject(goGameObject *,int);
uint goGameObject_AllocChildList(void);
uint goGameObject_ConnectResource(int);
uint goGameObject_DisconnectResource(int);
uint goGameObject_RemoveClient(goClient *);
uint goGameObject_AddClient(goClient *);
uint goGameObject_DestroyAllClients(void);
uint goGameObject_DestroyResource(uint);
uint goGameObject_DisconnectAnimClients(void);
uint goGameObject_ConnectAnimClients(void);
uint goGameObject_ConnectAllClients(void);
uint goGameObject_DisconnectAllClients(void);
uint goGameObject_ResetPosRotScale(void);
uint goGameObject_Reset(int);
uint goGameObject_Destructor_goGameObject(void);
uint goGameObject_goGameObject(goParmBase const *,goServerContext *);


#endif