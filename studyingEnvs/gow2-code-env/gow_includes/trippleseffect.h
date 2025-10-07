#ifndef TRIPPLESEFFECT_H
#define TRIPPLESEFFECT_H

#include "structs.h"


uint tRipplesEffect_AddRipples(VUVec4,float);
uint tRipplesEffect_Update(void);
uint tRipplesEffect_Destructor_tRipplesEffect(void);
uint tRipplesEffect_tRipplesEffect(goCreatureCollision *);


#endif