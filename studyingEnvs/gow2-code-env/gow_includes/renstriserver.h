#ifndef RENSTRISERVER_H
#define RENSTRISERVER_H

#include "structs.h"


uint renSTriServer_DoStencilPass(uint,uint,uint,uint);
uint renSTriServer_PostRender(void);
uint renSTriServer_RenderLayer(uint,uint,uint,int);
uint renSTriServer_PreRender(void);
uint renSTriServer_EmptyLayer(uint,uint);
uint renSTriServer_vtbl;


#endif