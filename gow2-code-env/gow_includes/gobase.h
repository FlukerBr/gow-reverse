#ifndef GOBASE_H
#define GOBASE_H

#include "structs.h"


uint goBase___dl(void *);
uint goBase_SetGameObject(goGameObject *);
uint goBase_GetMatrix(void);
uint goBase_Destructor_goBase(void);
uint goBase_vtbl;


#endif