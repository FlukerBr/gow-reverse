#ifndef GOCAMERASHAKE_H
#define GOCAMERASHAKE_H

#include "structs.h"


uint goCameraShake_Register(void);
uint goCameraShake_Run(goScript *);
uint goCameraShake_goCameraShake(goScript *,goCameraShake_Args *);


#endif