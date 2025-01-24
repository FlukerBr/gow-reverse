#ifndef ANMVERTEXPLAYER_H
#define ANMVERTEXPLAYER_H

#include "structs.h"


uint anmVertexPlayer_NeedsProcessing(float);
uint anmVertexPlayer_Destructor_anmVertexPlayer(void);
uint anmVertexPlayer_Animate(float,float);
uint anmVertexPlayer_Recycle(void);
uint anmVertexPlayer_Reset(void);
uint anmVertexPlayer_vtbl;


#endif