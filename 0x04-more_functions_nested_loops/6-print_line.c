#include "holberton.h"
/**
 * print_line - Prints a line of n lenght.
 * @n: Input number for length.
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar(95);
		}
	}
	_putchar(10);
}
