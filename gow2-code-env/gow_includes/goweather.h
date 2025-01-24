#ifndef GOWEATHER_H
#define GOWEATHER_H

#include "structs.h"


uint goWeather_Run(goScript *);
uint goWeather_ScriptDisconnect(goScript *);
uint goWeather_ScriptConnect(goScript *);
uint goWeather_Destructor_goWeather(void);
uint goWeather_goWeather(goScript *,goWeatherArgs *);
uint goWeather_PlanktonSetup(void);
uint goWeather_PlanktonCallback(void *,renParticleSystem *,float);
uint goWeather_sm_pScript;
uint goWeather_sm_aWeatherDesc;


#endif