#ifndef PEGASUSPATH_H
#define PEGASUSPATH_H

#include "structs.h"


uint PegasusPath_Reset(void);
uint PegasusPath_Update(goCreature *,float);
uint PegasusPath_InterpolateCamPos(float);
uint PegasusPath_AdvanceWaypoints(goCreature *);
uint PegasusPath_SwitchPaths(goCreature *);
uint PegasusPath_SetupNextData(int);
uint PegasusPath_CopyNextToLast(void);
uint PegasusPath_InitLastData(goCreature *);
uint PegasusPath_QueueWaypointClient(int);
uint PegasusPath_SetWaypointClient(goCreature *,wypClient *);


#endif