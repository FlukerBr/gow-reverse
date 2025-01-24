EE_BIN = ./injectelf/gow2mod.elf
EE_OBJS = main.o \
include-src\ps2mem.o \
include-src\gow.o \
#include-src\stdio.o \
#include-src\stdlib.o

NEWLIB_NANO = 1
KERNEL_NOPATCH = 1

BASE_ADDRESS = 0x263E38
EE_LINKFILE = linkfile

EE_CFLAGS =  -fno-zero-initialized-in-bss
EE_LDFLAGS = -Wl,--entry=INVOKER -Wl,-Map,../scripts/gow2mod.map -Wl,'--defsym=BASE_ADDRESS=${BASE_ADDRESS}'

all: $(EE_BIN)

PS2SDK = ../external/ps2sdk/ps2sdk
include $(PS2SDK)/samples/Makefile.pref
include eemakefile.eeglobal
