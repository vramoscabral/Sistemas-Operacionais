#ifndef ARCHITECTURE_H
#define ARCHITECTURE_H

#include "../hardware/memory/disc.h"
#include "../hardware/peripherals/peripherals.h"
#include "../hardware/memory/cache.h"
#include "../software/pipeline/pipeline.h"
#include "../utils/libs.h"
#include "../hardware/cpu/cpu.h"
#include "../software/control/control_unit.h"
#include "../software/processes/queue_process.h"
#include "../software/processes/pcb.h"
#include "../utils/logs.h"

void init_architecture(cpu* cpu, ram* memory_ram, disc* memory_disc, peripherals* peripherals, process* process_queue);
void load_program_on_ram(ram* memory, char* program);
void check_instructions_on_ram(ram* memory_ram);
void init_pipeline(cpu* cpu, ram* memory_ram, process* process, unsigned short int core_number, cache* cache_table);
void update_regs(cpu* cpu, process_control_block* pcb, unsigned short int core_number);
void free_architecture(cpu* cpu, ram* memory_ram, disc* memory_disc, peripherals* peripherals, process* process_queue);

#endif