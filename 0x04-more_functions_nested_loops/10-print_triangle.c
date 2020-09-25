#include "holberton.h"
/**
 * print_triangle - Prints right angled triangle of size n.
 * @size: Input size number.
 */
void print_triangle(int size)
{
	int i, space, hash, edge;

	if (size > 0)
	{
		edge = (size - 1);
		for (i = 0; i < size; i++)
		{
			for (space = 0 ; space <= edge; space++)
			{
				_putchar(32);
			}
			for (hash = 0; hash < (size - edge); hash++)
			{
				_putchar(35);
			}
			edge--;
			_putchar(10);
		}
	}
}
