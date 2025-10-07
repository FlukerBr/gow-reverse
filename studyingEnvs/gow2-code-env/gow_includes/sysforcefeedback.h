#ifndef SYSFORCEFEEDBACK_H
#define SYSFORCEFEEDBACK_H

#include "structs.h"


uint sysForceFeedback_Process(void);
uint sysForceFeedback_Wave(uchar,float);
uint sysForceFeedback_Stop(void);
uint sysForceFeedback_SetInput(uint,float);
uint sysForceFeedback_Start(dc_tForceFeedback const *);
uint sysForceFeedback_sysForceFeedback(void);


#endif