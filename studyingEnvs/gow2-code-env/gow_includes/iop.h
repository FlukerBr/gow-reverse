#ifndef IOP_H
#define IOP_H

#include "structs.h"


uint iop_InitialisePlugin(uint);
uint iop_gDynamicStatusBlock;
uint iop_gStaticStatusBlock;
uint iop_gBootArgs;
uint iop_gDynamicStatusBlockPtr;
uint iop_gStaticStatusBlockPtr;
uint iop_gReadStateNames;
uint iop_gLanguageChannel;


#endif