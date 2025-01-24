#ifndef DC_H
#define DC_H

#include "structs.h"


uint dc_tBranch_tBranch(void);
uint dc_File_Free(void);
uint dc_File_Destructor_File(void);
uint dc_File_File(char const *);
uint dc_Context_Create(char const *);
uint dc_Context_Get(char const *);
uint dc_Context_DeleteAllFiles(void);
uint dc_Context_Destructor_Context(void);
uint dc_Context_Context(void);
uint dc_Loader_IFFProcessSymbolTable(IFF_Header *,char const *);
uint dc_Loader_IFFProcessStringTable(IFF_Header *,char const *);
uint dc_Loader_IFFProcessImportTable(IFF_Header *,char const *);
uint dc_Loader_IFFProcessExportTable(IFF_Header *,char const *);
uint dc_Loader_IFFProcessData(IFF_Header *,char const *);
uint dc_Loader_IFFProcessVersion(IFF_Header *,char const *);
uint dc_IsSymAvailable(char const *,wadContext const *);
uint dc_LookupSym_(uint,wadContext const *);
uint dc_LookupSym(char const *,wadContext const *,int);
uint dc_GetSymHash(char const *);


#endif