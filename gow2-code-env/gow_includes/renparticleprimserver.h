#ifndef RENPARTICLEPRIMSERVER_H
#define RENPARTICLEPRIMSERVER_H

#include "structs.h"


uint renParticlePrimServer_PostRender(void);
uint renParticlePrimServer_GetParticleSystemCode(void);
uint renParticlePrimServer_RenderLayer(uint,uint,uint);
uint renParticlePrimServer_EmptyLayer(uint,uint,uint);
uint renParticlePrimServer_renParticlePrimServer(void);
uint renParticlePrimServer_PreRender(void);
uint renParticlePrimServer_gStage;
uint renParticlePrimServer_gCode;


#endif