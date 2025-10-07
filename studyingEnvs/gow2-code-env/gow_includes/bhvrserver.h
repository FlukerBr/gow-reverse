#ifndef BHVRSERVER_H
#define BHVRSERVER_H

#include "structs.h"


uint bhvrServer_CreateMasterContext(void);
uint bhvrServer_Destructor_bhvrServer(void);
uint bhvrServer_bhvrServer(svrParm const *);
uint bhvrServer_SendEvent(goEvent const *);
uint bhvrServer_vtbl;
uint bhvrServer_sm_pCurEvent;
uint bhvrServer_sm_pCurBhvr;


#endif