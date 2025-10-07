#ifndef F_VARCMDHANDLER_H
#define F_VARCMDHANDLER_H

#include "structs.h"


uint F_VarCmdHandler_PerFrame(void);
uint F_VarCmdHandler_CommandResult(int);
uint F_VarCmdHandler_Command(char const *,char const *,int);
uint F_VarCmdHandler_SetVariable(char const *,int,void const *);
uint F_VarCmdHandler_GetVariable(char const *,int *,void **);
uint F_VarCmdHandler_F_VarCmdHandler(void);
uint F_VarCmdHandler_vtbl;


#endif