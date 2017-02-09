all: order_sequences.c order_sequences.o
	g++ -o order_sequences order_sequences.o
order_sequences.o: order_sequences.c
	g++ -c -o order_sequences.o order_sequences.c
clean:
	rm *.o order_sequences
