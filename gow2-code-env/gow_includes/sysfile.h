#ifndef SYSFILE_H
#define SYSFILE_H

#include "structs.h"


uint sysFile_RemOpenFile(int);
uint sysFile_Read(char *,uint,uint);
uint sysFile_ReadIssuedCB(uint,ulong);
uint sysFile_IsReadDone(void);
uint sysFile_Close(void);
uint sysFile_ResourceName(void);
uint sysFile_OpenResource(char const *,uint);
uint sysFile_ResourceOpenCB(uint,ulong);
uint sysFile_Destructor_sysFile(void);
uint sysFile_sysFile(void);
uint sysFile_Initialise(void);
uint sysFile_vtbl;
uint sysFile_gOpenFiles;


#endif