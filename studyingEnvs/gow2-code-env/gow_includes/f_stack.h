#ifndef F_STACK_H
#define F_STACK_H

#include "structs.h"


uint F_Stack_PushString(char const *,int);
uint F_Stack_PushFloat(float);
uint F_Stack_PushBoolean(int);
uint F_Stack_Push(int,void const *);


#endif