#ifndef INJECTOR_H
#define INJECTOR_H

void RedirectCall(unsigned int call_addr, void* addr);

void WriteDword(unsigned int address, unsigned int value);

void MakeNop(unsigned int address);

void print_pointer(char *name, void *ptr);

#endif