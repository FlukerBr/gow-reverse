#ifndef GOPOOL_H
#define GOPOOL_H

#include "structs.h"


uint goPool_Pool_Destructor_Pool(void);
uint goPool_PreCreate_(uint,int);
uint goPool_PreCreate(char const *,int);
uint goPool_Recycle(goGameObject *);
uint goPool_Create__(uint);
uint goPool_Create_(char const *);
uint goPool_Create(goParmBase const *);
uint goPool_NumAvailable(char const *);
uint goPool_GetPool(char const *);
uint goPool_doRecycle(goGameObject *);
uint goPool_doPreCreate(goParmBase const *,int);
uint goPool_doCreate(goParmBase const *,int);
uint goPool_Deinit(void);
uint goPool_Init(void);
uint goPool_sm_iDefaultCap;


#endif