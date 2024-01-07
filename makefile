all:sudoku.o
	gcc -Wall sudoku.o main.c -o main

tp1.o:sudoku.h
	gcc -c sudoku.c

clean:
	rm -rf *.o main