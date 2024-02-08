all: result.out

taskmanager.o: taskmanager.c processes.h
        gcc -c taskmanager.c -o taskmanager.o

processes.o: processes.c processes.h
        gcc -c processes.c -o processes.o

result.out: processes.o taskmanager.o
        gcc processes.o taskmanager.o -o result.out

clean:

        rm -f *.out *.o