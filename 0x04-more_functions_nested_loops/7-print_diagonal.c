#include "holberton.h"
/**
 * print_diagonal - Prints diagonal on n lenght using "\".
 * @n: Input number of diagonals.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
	_putchar(10);
	}
}
