#ifndef DMASTATICCONTEXT_H
#define DMASTATICCONTEXT_H

#include "structs.h"


uint dmaStaticContext_Swap(void);
uint dmaStaticContext_SetFlags(uint);
uint dmaStaticContext_Destructor_dmaStaticContext(void);
uint dmaStaticContext_vtbl;


#endif