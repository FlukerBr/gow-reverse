#ifndef GOSERVER_H
#define GOSERVER_H

#include "structs.h"


uint goServer_PopClientContext(void);
uint goServer_PushClientContext(svrClient const *);
uint goServer_CreateMasterContext(void);
uint goServer_Destructor_goServer(void);
uint goServer_PreCreateTriggeredContexts(wadContext *);
uint goServer_TriggerVolumeRemoveParm(wadContext *,TriggerVolumeParm *);
uint goServer_TriggerVolumeDisconnectParm(wadContext *,TriggerVolumeParm *);
uint goServer_TriggerVolumeConnectParm(wadContext *,TriggerVolumeParm *);
uint goServer_TriggerVolumeAddParm(wadContext *,TriggerVolumeParm *);
uint goServer_TriggerVolumeSet(void);
uint goServer_TriggerVolumeEnableContext(int,wadContext *);
uint goServer_TriggerVolumeInit(void);
uint goServer_PopParent(goGameObject *);
uint goServer_PushParent(goGameObject *);
uint goServer_GetGameObject(uint);
uint goServer_Activate(char const *);
uint goServer_RegisterGameObjectResource(uint);
uint goServer_ProcessServer(void);
uint goServer_goServer(svrParm const *);
uint goServer__uResourceMap;
uint goServer_vtbl;
uint goServer__uNextResourceID;


#endif