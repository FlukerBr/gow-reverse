#ifndef ODBOBJECT_H
#define ODBOBJECT_H

#include "structs.h"


uint odbObject_Reset(void);
uint odbObject_Update(void);
uint odbObject_GetType(void);
uint odbObject_Destructor_odbObject(void);
uint odbObject_vtbl;


#endif