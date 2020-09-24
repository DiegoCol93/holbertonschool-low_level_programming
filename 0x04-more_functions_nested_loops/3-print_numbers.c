#include "holberton.h"
/**
 * print_numbers - Prints Character 0 through 9.
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
