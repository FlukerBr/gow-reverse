#ifndef SC_BREAK_H
#define SC_BREAK_H

#include "structs.h"


uint SC_Break_SPart_SPart(void);
uint SC_Break_SPartArray_SPartArray(void);
uint SC_Break_UpdateSH_Parts(goGameObject *,SC_Break_SPartArray *);
uint SC_Break_Update(goScript *);
uint SC_Break_Destructor(goScript *);
uint SC_Break_SPartArray___dl(void *);
uint SC_Break_SPartArray_Allocate(wadContext *);
uint SC_Break_SPartArray_sm_SPartArrayMultiPool;


#endif