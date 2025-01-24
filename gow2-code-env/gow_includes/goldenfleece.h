#ifndef GOLDENFLEECE_H
#define GOLDENFLEECE_H

#include "structs.h"


uint GoldenFleece_SCR_GoldenActivate(goScript *);
uint GoldenFleece_Enable(int);
uint GoldenFleece_AttachParts(void);
uint GoldenFleece_FreeResources(void);
uint GoldenFleece_InitResources(void);
uint GoldenFleece_sm_aJointIdx;
uint GoldenFleece_sm_aParts;


#endif