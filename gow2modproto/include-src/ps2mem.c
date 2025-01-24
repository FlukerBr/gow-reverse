#include "ps2mem.h"

#define jal(fun) 0x0C000000 + (fun/4)

void redirectCall(unsigned int addr, void* func)
{
	// *(int*)addr = ((0x0C000000 | (((unsigned int)func & 0x0fffffff) >> 2)));
    *(unsigned int*)addr = jal((unsigned int)func);
}

// void redirectJump(unsigned int addr, void* func)
// {
// 	*(int*)addr = (0x08000000 | (((unsigned int)(func) & 0x0FFFFFFC) >> 2));
// }
// 
// void makeNOP(unsigned int address) {
//     *(unsigned int*)address = (unsigned int)0;
// }