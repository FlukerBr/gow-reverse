#include "stdio.h"
#include "stdint.h"

int printf(const char *format, ...)
{
    return ((int(*)(const char *, ...))0x002A1DA8)(format);
}
