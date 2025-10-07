#ifndef EVTSERVER_H
#define EVTSERVER_H

#include "structs.h"


uint evtServer_UnPauseAllClients(void);
uint evtServer_PauseAllClients(void);
uint evtServer_EventDistributionData_EventDistributionData(void);
uint evtServer_DestroyEventsForGameObject(goGameObject *);
uint evtServer_DistributeEvents(void);
uint evtServer_SendEvent(goGameObject *,goEvent const *);
uint evtServer_UnregisterTimer(goGameObject *,int);
uint evtServer_RegisterForTimer(goGameObject *,uint);
uint evtServer_ProcessServer(void);
uint evtServer_Destructor_evtServer(void);
uint evtServer_evtServer(svrParm const *);
uint evtServer_vtbl;


#endif