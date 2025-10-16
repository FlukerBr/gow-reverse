#ifndef INJECTOR_H
#define INJECTOR_H

#include "stdint.h"

void RedirectCall(uint32_t call_addr, void* addr);

void WriteDword(uint32_t address, uint32_t value);

void MakeNop(uint32_t address);

void RedirectJump(uint32_t jump_addr, uint32_t addr);

#endif