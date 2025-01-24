#ifndef GOICARUSWINGS_H
#define GOICARUSWINGS_H

#include "structs.h"


uint goIcarusWings_GetStageTrigger(int);
uint goIcarusWings_Reset(void);
uint goIcarusWings_CanDisconnect(void);
uint goIcarusWings_WingsDie(void);
uint goIcarusWings_Callback(anmPlayer *);
uint goIcarusWings_SetupWings(bool);
uint goIcarusWings_SetRate(float,float);
uint goIcarusWings_SetStage(ushort);
uint goIcarusWings_WingsGOScript(goScript *);
uint goIcarusWings_SetEmitterRates(void);
uint goIcarusWings_sm_IcarusWings;
uint goIcarusWings_vtbl;


#endif