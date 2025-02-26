#include "software/threads/threads.h"

int main() {
    srand(time(NULL));

    cpu* cpu = malloc(sizeof(cpu));
    ram* memory_ram = malloc(sizeof(ram));
    process* process_queue = malloc(NUM_PROGRAMS * sizeof(process));
    type_scheduler scheduler_type = FIFO;

    char filename[25];

    init_architecture(cpu, memory_ram, process_queue);

    for (unsigned short int index_program = 0; index_program < NUM_PROGRAMS; index_program++) {
        sprintf(filename, "dataset/program%d.txt", index_program);
        char* program = read_program(filename);
        load_program_on_ram(memory_ram, program);
        free(program);
    }

    check_instructions_on_ram(memory_ram);

    populate_process_queue(process_queue, memory_ram, scheduler_type);

    init_logs();

    write_logs_system_file(enum_schedular_to_string(scheduler_type));

    init_threads(cpu, memory_ram, process_queue);

    reset_ram(memory_ram);

    free_architecture(cpu, memory_ram, process_queue);

    printf("Please, check the output files in the 'output' folder.\n");

    return 0;
}