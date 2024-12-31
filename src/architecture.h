#ifndef ARCHITECTURE_H
#define ARCHITECTURE_H

#include "disc.h"
#include "peripherals.h"
#include "cache.h"
#include "pipeline.h"
#include "libs.h"
#include "cpu.h"
#include "control_unit.h"
#include "queues.h"

void init_architecture(cpu* cpu, ram* memory_ram, disc* memory_disc, peripherals* peripherals, queue_start* queue_start, queue_end* queue_end, queue_block* queue_block);
void load_program_on_ram(ram* memory, char* program);
void check_instructions_on_ram(ram* memory_ram);
void init_pipeline(cpu* cpu, ram* memory_ram, unsigned short int index_core);

#endif