#ifndef ANMMATRIXARRAY_H
#define ANMMATRIXARRAY_H

#include "structs.h"


uint anmMatrixArray_CanPlayAdditiveSets(void);
uint anmMatrixArray_EnableBlending(int);
uint anmMatrixArray_AllocatePlayList(uint);
uint anmMatrixArray_type(void);
uint anmMatrixArray_Init(goSkeleton *);
uint anmMatrixArray_Reset(void);
uint anmMatrixArray_ResetNonAnimatedChannels(void);
uint anmMatrixArray_Blend(void);
uint anmMatrixArray_BlendOperationBuffers(VUVec4 *,VUVec4 *,VUVec4 *);
uint anmMatrixArray_Process(void);
uint anmMatrixArray_RemoveAllPlayLists(int,int);
uint anmMatrixArray_Destructor_anmMatrixArray(void);
uint anmMatrixArray_vtbl;


#endif