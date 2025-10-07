#ifndef RINGBUFFER_H
#define RINGBUFFER_H

#include "structs.h"


uint ringBuffer_AddBytes(int);
uint ringBuffer_GetBytes_(int,void *);
uint ringBuffer_TossBytes(int);
uint ringBuffer_GetBytes(int);
uint ringBuffer_ringBuffer(int);


#endif