#include <stdio.h>
#include "processes.h"

void displayMenu();
void createProcessMenu();
void displayAllProcesses();
void stopProcessMenu();

int main() {
    int choice;

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createProcessMenu();
                break;
            case 2:
                displayAllProcesses();
                break;
            case 3:
                stopProcessMenu();
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

    } while (choice != 4);

    return 0;
}

void displayMenu() {
    printf("\n--- Task Manager Menu ---\n");
    printf("1. Create a new process\n");
    printf("2. Display all processes\n");
    printf("3. Stop a process\n");
    printf("4. Exit\n");
}

void createProcessMenu() {
    char name[MAX_NAME_LENGTH];
    printf("Enter the name of the new process: ");
    scanf("%s", name);

    int processId = createnewprocess(name);

    if (processId != 0) {
        printf("Process created successfully. Process ID: %d\n", processId);
    } else {
        printf("Unable to create a new process. ");

        if (processescount >= MAX_PROCESSES) {
            printf("Maximum number of processes reached. Stop a process to create a new one.\n");
        } else {
            printf("Unknown error occurred.\n");
        }
    }
}

void displayAllProcesses() {
    printf("\n--- List of All Processes ---\n");
    for (int i = 0; i < processescount; ++i) {
        printf("Process ID: %d, Name: %s\n", processes[i].id, processes[i].name);

    }
}

void stopProcessMenu() {
    int processId;
    printf("Enter the ID of the process to stop: ");
    scanf("%d", &processId);

    stopprocess(processId);
    printf("Process with ID %d stopped (if it exists).\n", processId);
}

