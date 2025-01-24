#ifndef TIOSYSTEM_H
#define TIOSYSTEM_H

#include "structs.h"


uint tIOSystem_Reset(void);
uint tIOSystem_Destructor_tIOSystem(void);
uint tIOSystem___dl(void *);
uint tIOSystem_Allocate(wadContext *);
uint tIOSystem_sm_tIOSystemMultiPool;
uint tIOSystem_vtbl;


#endif