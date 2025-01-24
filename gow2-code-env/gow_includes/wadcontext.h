#ifndef WADCONTEXT_H
#define WADCONTEXT_H

#include "structs.h"


uint wadContext_AddExternalFileSet(svrClientParm *);
uint wadContext_NewPool(uint,uint,uint,uint,uint);
uint wadContext_RemoveAllParents(void);
uint wadContext_AddParent(wadContext *);
uint wadContext_ResetPools(void);
uint wadContext_Regen(void);
uint wadContext_Reset(void);
uint wadContext_Destructor_wadContext(void);
uint wadContext_wadContext(svrParm const *);
uint wadContext_FindObject_(uint);
uint wadContext_FindObject(char const *);
uint wadContext_FindData(char const *,int *);
uint wadContext_GetWadFromData(char const *);
uint wadContext_RemoveString(char const *);
uint wadContext_vtbl;
uint wadContext_sm_pSharedPoolContextInitializer;


#endif