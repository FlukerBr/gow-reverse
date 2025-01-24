#ifndef ANMVERTEX_H
#define ANMVERTEX_H

#include "structs.h"


uint anmVertex_CanPlayAdditiveSets(void);
uint anmVertex_Blend2DAnim(float,float);
uint anmVertex_type(void);
uint anmVertex_AllocatePlayList(uint);
uint anmVertex_Destructor_anmVertex(void);
uint anmVertex_WeightPlayers(void);
uint anmVertex_Process(void);
uint anmVertex_Blend(void);
uint anmVertex_Reset(void);
uint anmVertex_init(renModel *);
uint anmVertex_vtbl;


#endif