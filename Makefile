all:
	gcc -o eightQueens.out main.c

clean:
	rm -f eightQueens.out

new:
	rm -f eightQueens.out
	gcc -o eightQueens.out main.c