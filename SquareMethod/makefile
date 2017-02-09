CC= g++
CFLAGS= -c -Wall
all: SquareMethod

SquareMethod: SquareMethod.o
	$(CC) -o SquareMethod SquareMethod.o
SquareMethod.o: SquareMethod.c
	$(CC) $(CFLAGS) SquareMethod.c
clean:
	rm -rf *o SquareMethod
