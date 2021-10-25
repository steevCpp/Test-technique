CC = gcc
CFLAGS = -Wall -g


wordcount : main.o wordcount.o
	$(CC) -o wordcount main.o wordcount.o 

main.o : main.c
	$(CC) -c  main.c

worcount.o : wordcount.c worcount.h
	$(CC) -c wordcount.c

clean: 
	rm -f *.o wordcount
