#ifndef STDDYNASTRINGDB_H
#define STDDYNASTRINGDB_H

#include "structs.h"


uint stdDynaStringDB_stdDynaStringDB(void);
uint stdDynaStringDB_Destructor_stdDynaStringDB(void);
uint stdDynaStringDB_Remove_(uint);
uint stdDynaStringDB_Remove(char const *);
uint stdDynaStringDB_Add_(uint,uint);
uint stdDynaStringDB_Add(char const *,uint);
uint stdDynaStringDB_Write(char const *,uint);
uint stdDynaStringDB_ReadWithError_(uint);
uint stdDynaStringDB_ReadWithError(char const *);
uint stdDynaStringDB_Read(char const *);
uint stdDynaStringDB_IsAvailable(char const *);
uint stdDynaStringDB_GetDynaStringNode__(uint);
uint stdDynaStringDB_GetDynaStringNode_(char const *);
uint stdDynaStringDB_GetDynaStringNode(char const *,int);


#endif