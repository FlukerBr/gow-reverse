#ifndef GOSCRIPTPARM_H
#define GOSCRIPTPARM_H

#include "structs.h"


uint goScriptParm_goScriptParm___(IFF_Header const *,goScriptLoadParm const *);
uint goScriptParm_goScriptParm__(goScriptFuncs const *);
uint goScriptParm_goScriptParm_(goScriptLoadParm const *,void (*)(goScript *));
uint goScriptParm_goScriptParm(void);


#endif