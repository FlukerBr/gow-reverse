#ifndef RENFLASHPRIMSERVER_H
#define RENFLASHPRIMSERVER_H

#include "structs.h"


uint renFlashPrimServer_ClearNumConnected(void);
uint renFlashPrimServer_PostRender(void);
uint renFlashPrimServer_RenderLayer(uint,uint);
uint renFlashPrimServer_EmptyLayer(uint,uint);
uint renFlashPrimServer_PreRender(void);


#endif