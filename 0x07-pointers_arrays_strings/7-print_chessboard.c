#include "holberton.h"
/**
 * print_chessboard - Prints the chessboard.
 * @a: 2D board array.
 */
void print_chessboard(char (*a)[8])
{
	int i = 0; /* <<- - - - - - - - -Declaring counter i for Y dimension. */
	int j = 0; /* <<- - - - - - - - -Declaring counter j for X dimension. */

	while (i < 8) /* <<- - - - - - -- - - - - - - - Loop for Y dimension. */
	{
		j = 0; /* <<- - - - - - - - - - - - -Reset j on every i loop. */
		while (j < 8) /* <<- - - - - - - - - - -Loop for X dimension. */
		{
			_putchar(a[i][j]); /* -Prints character on index i,j. */
			j++; /* <<- - - - - - - - - - - -Jumps one step on j. */
		}
		_putchar(10); /* <<- - - - - - - - - - - - - Prints new line. */
		i++; /* <<- - - - - - - - - - - - - - - -Jumps one step on i. */
	}
}
