#ifndef F_EDITTEXTINSTANCE_H
#define F_EDITTEXTINSTANCE_H

#include "structs.h"


uint F_EditTextInstance_Clear(void);
uint F_EditTextInstance_Add_(F_Sprite *,int,short,short);
uint F_EditTextInstance_Add(F_Shape *,int,short,short);
uint F_EditTextInstance_SetCounts(int,int,int);
uint F_EditTextInstance_Destructor_F_EditTextInstance(void);
uint F_EditTextInstance_preservedSI;
uint F_EditTextInstance_vtbl;
uint F_EditTextInstance_nPreserved;


#endif