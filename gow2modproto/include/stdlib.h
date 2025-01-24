#ifndef STDLIB_H_
#define STDLIB_H_

#include <stdint.h>

void* malloc(uint32_t size);
void free(void *ptr);

int atoi(const char *str);
// double atof(const char* str);
// float dptofp(double num);

uint32_t rand();
#endif
