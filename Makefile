CC = gcc
CFLAGS = -Wall -g

all: main

main: main.o calc.o utils.o
	$(CC) $(CFLAGS) -o main main.o calc.o utils.o

main.o: main.c calc.h
calc.o: calc.c calc.h
utils.o: utils.c utils.h

clean:
	rm -f *.o main

test: main
	./main
