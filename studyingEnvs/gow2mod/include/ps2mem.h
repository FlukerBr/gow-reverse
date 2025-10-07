#pragma once

#include "stdint.h"

#define LOWORD(l)           ((uint16_t)((*(uint32_t*)(&l)) & 0xffff))
#define HIWORD(l)           ((uint16_t)(((*(uint32_t*)(&l)) >> 16) & 0xffff))

void redirectCall(unsigned int addr, void* func);
void WriteDword(uint32_t address, uint32_t value);

void MakeNop(uint32_t address);