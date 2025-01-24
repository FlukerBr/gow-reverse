#ifndef GOAIRCURRENTOBJECT_H
#define GOAIRCURRENTOBJECT_H

#include "structs.h"


uint goAirCurrentObject_Run(goScript *);
uint goAirCurrentObject_ApplyAirCurrent(goGameObject *,goCreature *);
uint goAirCurrentObject_goAirCurrentObject(goScript *,goAirCurrentObjectData *);


#endif