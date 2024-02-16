CC = gcc
CFLAGS = -g

run: program
	./program.out

program: clean mylib.o main.o
	$(CC) $(CFLAGS) -o program.out mylib.o main.o

mylib.o: mylib.c
	$(CC) $(CFLAGS) -c mylib.c

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f *.o program.out