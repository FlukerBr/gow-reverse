#ifndef ODBCONTEXT_H
#define ODBCONTEXT_H

#include "structs.h"


uint odbContext_Update(void);
uint odbContext_Add(odbObject *);
uint odbContext_RemoveAll(int);
uint odbContext_Destructor_odbContext(void);
uint odbContext_odbContext(wadContext *);


#endif