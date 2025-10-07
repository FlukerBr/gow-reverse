#ifndef ELECTRIC_H
#define ELECTRIC_H

#include "structs.h"


uint Electric_SCR_ElectricCore(goScript *);
uint Electric_FreeResources(void);
uint Electric_SetUnloadPending(int);
uint Electric_GetElectricContext(void);
uint Electric_SCR_ElectricCoreStandalone(goScript *);
uint Electric_SCR_ElectricCoreStandaloneDestructor(goScript *);
uint Electric_sm_aCores;
uint Electric_sm_pCoreScript;
uint Electric_sm_iNumCores;
uint Electric_sm_iRefCnt;
uint Electric_sm_bUnloadPending;


#endif