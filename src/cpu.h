#ifndef CPU_H
#define CPU_H

#define NUM_CORES 1
#define NUM_REGISTERS 32

#include "libs.h"

typedef struct core {
    unsigned short int *registers;
    unsigned short int PC;
} core;

typedef struct cpu {
   core *core;
} cpu;

void init_cpu(cpu* cpu);

#endif