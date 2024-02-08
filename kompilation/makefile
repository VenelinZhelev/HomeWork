maths.o: maths.h maths.c
	gcc -c -o maths.o maths.c

libmaths.a: maths.o
	ar rcs libmaths.a maths.o

maths.exe: maths.c libmaths.a
	cc -o maths.exe maths.c libmaths.a

clean:
	del /Q *.o maths.exe