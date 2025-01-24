EE_BIN = ./gow2engine.elf
EE_OBJS = ./main.o

NEWLIB_NANO = 1
KERNEL_NOPATCH = 1

BASE_ADDRESS = 0xD0000
EE_LINKFILE = linkfile

EE_CFLAGS =  -fno-zero-initialized-in-bss
EE_LDFLAGS = -Wl,--entry=INVOKER -Wl,-Map,./scripts/gow2mod.map -Wl,'--defsym=BASE_ADDRESS=$(BASE_ADDRESS)'

all: $(EE_BIN)

PS2SDK = C:/Users/allan/Desktop/tools/ps2sdk/ps2sdk
include $(PS2SDK)/samples/Makefile.pref
include eemakefile.eeglobal
