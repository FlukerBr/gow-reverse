#ifndef ANMBLENDSET_H
#define ANMBLENDSET_H

#include "structs.h"


uint anmBlendSet_type(void);
uint anmBlendSet_Destructor_anmBlendSet(void);
uint anmBlendSet_Init(anmVertex *);
uint anmBlendSet_Process(void);
uint anmBlendSet_vtbl;


#endif