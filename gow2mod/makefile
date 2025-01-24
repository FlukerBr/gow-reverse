EE_BIN = ./gow2mod.elf
EE_OBJS = ./src/main.o \
./include_src/ps2mem.o \
./include_src/alloc.o \
./include_src/list.o \
./src/message.o \
./src/cameratracking.o \
./src/slowmotion.o \
./src/time.o \
./src/gamepad.o \
./src/creature.o \
./src/menu.o \

NEWLIB_NANO = 1
KERNEL_NOPATCH = 1

BASE_ADDRESS = 0xD0000
EE_LINKFILE = linkfile

EE_CFLAGS =  -fno-zero-initialized-in-bss
EE_LDFLAGS = -Wl,--entry=invoker -Wl,-Map,./scripts/gow2mod.map -Wl,'--defsym=BASE_ADDRESS=$(BASE_ADDRESS)'

all: $(EE_BIN)

PS2SDK = ../usr/local/ps2dev/ps2sdk
include $(PS2SDK)/samples/Makefile.pref
include eemakefile.eeglobal
