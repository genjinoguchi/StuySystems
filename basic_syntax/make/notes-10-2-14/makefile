all: test.o dwstring.o
	gcc test.o dwstring.o

dwstring.o: dwstring.c dwstring.h
	gcc -c dwstring.c

test.o: test.c dwstring.h
	gcc -c test.c

clean: 
	rm *~
	rm *.o

run:
	./a.out
