#ifndef SYSFILEMEM_H
#define SYSFILEMEM_H

#include "structs.h"


uint sysFileMem_Destructor_sysFileMem(void);
uint sysFileMem_Write(char const *,int);
uint sysFileMem_IsReadDone(void);
uint sysFileMem_Read(char *,uint,uint);
uint sysFileMem_vtbl;


#endif