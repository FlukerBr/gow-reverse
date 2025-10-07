#ifndef ALPHATIME_H
#define ALPHATIME_H

#include "structs.h"


uint AlphaTime_Next(void);
uint AlphaTime_Remove(void);
uint AlphaTime_First(void);
uint AlphaTime_Restore(goGameObject *,float,float,float,float);
uint AlphaTime_New(goGameObject *,float,float);
uint AlphaTime_table;
uint AlphaTime_nItems;


#endif