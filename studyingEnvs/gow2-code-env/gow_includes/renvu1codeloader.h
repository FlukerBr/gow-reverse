#ifndef RENVU1CODELOADER_H
#define RENVU1CODELOADER_H

#include "structs.h"


uint renVU1CodeLoader_getVUCode(uint *,uint *,uint *);
uint renVU1CodeLoader_buildCodeSegmentMap(uint *);
uint renVU1CodeLoader_reload(void);
uint renVU1CodeLoader_loadRenderer(uint,int);
uint renVU1CodeLoader_renVU1CodeLoader(void);


#endif