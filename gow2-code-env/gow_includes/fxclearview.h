#ifndef FXCLEARVIEW_H
#define FXCLEARVIEW_H

#include "structs.h"


uint fxClearView_Run(renView *);
uint fxClearView_Destructor_fxClearView(void);
uint fxClearView_fxClearView(uint,uint,uint,uint,ulong,int);
uint fxClearView_vtbl;


#endif