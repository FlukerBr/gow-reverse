#ifndef F_MOVIEINSTANCE_H
#define F_MOVIEINSTANCE_H

#include "structs.h"


uint F_MovieInstance_FindTexturedShape(char const *);
uint F_MovieInstance_FindSprite(char const *,F_Sprite *);
uint F_MovieInstance_Destructor_F_MovieInstance(void);
uint F_MovieInstance_F_MovieInstance(F_Movie *);
uint F_MovieInstance_RunHandlerPerFrames(void);
uint F_MovieInstance_GetHandler(char const *);
uint F_MovieInstance_SetHandler(char const *,F_VarCmdHandler *);


#endif