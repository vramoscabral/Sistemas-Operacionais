#ifndef RAM_H
#define RAM_H

#include "../../utils/libs.h"

typedef struct ram {
    char *vector;
} ram;

void init_ram(ram* memory_ram);
void print_ram(ram* memory_ram);
unsigned short int verify_address(char* address, unsigned short int num_positions);
void write_ram(ram* memory_ram, unsigned short int address, char* buffer);
void reset_ram(ram* memory_ram);

#endif 