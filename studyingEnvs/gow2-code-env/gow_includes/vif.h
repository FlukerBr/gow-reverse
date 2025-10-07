#ifndef VIF_H
#define VIF_H

#include "structs.h"


uint vif_DIRECTEnd(void);
uint vif_DIRECTBegin(void);
uint vif_UNPACKEnd(void);
uint vif_UNPACKBegin(uint,uint,uint);
uint vif__uDimension;
uint vif__pPackStartLoc;
uint vif__uBitLength;


#endif