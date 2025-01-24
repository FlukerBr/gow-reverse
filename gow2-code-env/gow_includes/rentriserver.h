#ifndef RENTRISERVER_H
#define RENTRISERVER_H

#include "structs.h"


uint renTriServer_RefreshLayer(uint,uint);
uint renTriServer_IsStencilPassEmpty(uint,uint);
uint renTriServer_RenderStencilLayer(uint,uint,uint);
uint renTriServer_DoStencilPass(uint,uint,uint,uint);
uint renTriServer_PostRender(void);
uint renTriServer_RenderLayer(uint,uint,uint,int);
uint renTriServer_LayerInit(uint,uint *,int,uint *,uint *);
uint renTriServer_EmptyLayer(uint,uint);
uint renTriServer_PreRender(void);
uint renTriServer_vtbl;


#endif