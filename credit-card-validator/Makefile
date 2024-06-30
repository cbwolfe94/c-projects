credit: main.o validator.o
	gcc -o credit main.o validator.o

validator.o: validator.c validator.h
	gcc -c validator.c

main.o: main.c validator.h
	gcc -c main.c