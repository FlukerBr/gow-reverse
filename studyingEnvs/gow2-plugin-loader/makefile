EE_BIN = ./gowplugin.elf
EE_OBJS = ./main.o \
./injector.o \
./sifdev.c

NEWLIB_NANO = 1
KERNEL_NOPATCH = 1

BASE_ADDRESS = 0xF7B80
EE_LINKFILE = linkfile

EE_CFLAGS += -fno-builtin-memcmp -fno-builtin-memcpy -fno-builtin-memset
EE_CFLAGS += -fno-builtin-printf -fno-builtin-strcat -fno-builtin-strchr
EE_CFLAGS += -fno-builtin-strcmp -fno-builtin-strcpy -fno-builtin-strlen
EE_CFLAGS += -fno-builtin-strncpy -fno-builtin-strrchr -fno-builtin-strncmp
EE_CFLAGS += -fno-builtin-cosf -fno-builtin-sinf -fno-builtin-sprintf 
EE_CFLAGS += -fno-builtin-fputs  -fno-builtin-strtok -fno-builtin-atan2f
EE_CFLAGS += -fno-builtin-sqrtf -fno-builtin-fabsf -fno-builtin-floorf
EE_CFLAGS += -fno-builtin-powf -fno-zero-initialized-in-bss

EE_LDFLAGS = -Wl,--entry=INVOKER -Wl,'--defsym=BASE_ADDRESS=$(BASE_ADDRESS)'

all: $(EE_BIN)

PS2SDK = C:/Users/allan/Desktop/tools/ps2sdk/ps2sdk
include $(PS2SDK)/samples/Makefile.pref
include eemakefile.eeglobal
