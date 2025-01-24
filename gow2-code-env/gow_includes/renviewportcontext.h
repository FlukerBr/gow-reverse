#ifndef RENVIEWPORTCONTEXT_H
#define RENVIEWPORTCONTEXT_H

#include "structs.h"


uint renViewportContext_SetAltFrustum(renFrustum const *,VUVec4);
uint renViewportContext_SetCanonicalMatrix(VUMat4);
uint renViewportContext_SetViewportScale(VUVec4);
uint renViewportContext_SetViewportOffset(VUVec4);
uint renViewportContext_renViewportContext(renView *);


#endif