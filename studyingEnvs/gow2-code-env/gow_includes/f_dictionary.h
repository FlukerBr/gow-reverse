#ifndef F_DICTIONARY_H
#define F_DICTIONARY_H

#include "structs.h"


uint F_Dictionary_Set(char const *,int,void const *);
uint F_Dictionary_Get(char const *,int *,void **);
uint F_Dictionary_Destructor_F_Dictionary(void);
uint F_Dictionary_F_Dictionary(void);


#endif