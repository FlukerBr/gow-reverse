static void (*FlushCache)(void) = ((void (*)(void))0x2CFBA0);
static unsigned int *address = (unsigned int*)0xCFFF0;
#define printf ((void (*)(const char *, ...))0x002C7740)

void patcher(unsigned int addr)
{
    ((void(*)(void))addr)();
}

void invoker()
{
    FlushCache();
    
    while (1)
    {
        printf("%d\n", *address);
        if (*address)
        {
            patcher(*address);
            break;
        }
    }

}