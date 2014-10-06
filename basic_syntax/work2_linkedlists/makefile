all: main.o
	gcc -o linkedlisttest main.o
	./linkedlisttest

main.o: main.c header_linked.h
	gcc -c main.c
clean:
	rm *.o
