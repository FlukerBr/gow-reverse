#ifndef WYPCLIENT_H
#define WYPCLIENT_H

#include "structs.h"


uint wypClient_GetLinkRef(int);
uint wypClient_GetWaypoint(int);
uint wypClient_FindClient(char const *,int,wadContext **);
uint wypClient_GetWaypointPosition(int);
uint wypClient_Destructor_wypClient(void);
uint wypClient_wypClient(wypClientParm const *);


#endif