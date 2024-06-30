fibonacci: main.o fibonacci.o
	gcc -o fib main.o fibonacci.o

fibonacci.o: fibonacci.c fibonacci.h
	gcc -c fibonacci.c
	
main.o: main.c fibonacci.h
	gcc -c main.c