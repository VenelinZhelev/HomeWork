#include <stdio.h>
#include <string.h>
#include "processes.h"

struct Process processes[MAX_PROCESSES]; 
int processescount = 0; 
 struct Process newProcess;
struct Process createProcess(int id, const char* name) {  
    newProcess.id = id;
    newProcess.name[0]=name;

    return newProcess;
}

void printProcess(const struct Process* process) {
    printf("Process ID: %d\n", process->id);
    printf("Process Name: %s\n", process->name);
}

 int nextprocessid() {
     static int nextId = 1; 

    if (nextId > 0 && nextId <= MAX_PROCESSES) {
        return nextId++;
    } else {
        return 0; 
    }
}
int createnewprocess(const char* name) {
    if (processescount < MAX_PROCESSES) {
        int newProcessId = nextprocessid();
        if (newProcessId != 0) {
            processes[processescount++] = createProcess(newProcessId, name);
            return newProcessId;
        } else {
            return 0; 
        }
    } else {
        return 0; 
    }
}
void stopprocess(int processId) {
    if (processId > 0 && processId <= processescount) {
        int index = -1;
        for (int i = 0; i < processescount; ++i) {
            if (processes[i].id == processId) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            for (int i = index; i < processescount - 1; ++i) {
                processes[i] = processes[i + 1];
            }

            --processescount; 
        }
    }
}