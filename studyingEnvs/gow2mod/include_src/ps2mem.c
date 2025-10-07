#include "ps2mem.h"

#define jal(fun) 0x0C000000 + (fun/4)

void redirectCall(unsigned int addr, void* func)
{
    *(unsigned int*)addr = jal((unsigned int)func);
}

void WriteDword(uint32_t address, uint32_t value) {
    *(uint32_t*)address = value;
}

void MakeNop(uint32_t address) {
    WriteDword(address, 0);
}