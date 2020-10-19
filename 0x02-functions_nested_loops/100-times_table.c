#include "holberton.h"
/**
 * _putspace - Prints a space character depending on size of i * j.
 *
 *             These lines were moved out of the function print_times_table
 *             for compliance with betty style (function less than 40 lines).
 *
 *     @i:   - Index for lines.
 *     @j:   - Index for columns.
 */
void _putspace(int i, int j)
{
	_putchar(32);
	if ((i * j) < 10)
	{
		_putchar(32);
		_putchar(32);
	}
	if ((i * j) >= 10 && (i * j) < 100)
		_putchar(32);
}
/**
 * print_times_table - Prints the times table of number n, up to 15.
 *
 *        @n:        - Number to multiply.
 */
void print_times_table(int n)
{
	int i = -1, j = -1;

	if (!(n < 0 || n > 15))
	{
		while (i++ < n)
		{
			j = -1;
			while (j++ < n)
			{
				if (j != 0)
				{
					_putspace(i, j);
				}
				if ((i * j) < 10)
				{
					_putchar((i * j) + 48);
				}
				if ((i * j) >= 10 && (i * j) < 100)
				{
					_putchar(((i * j) / 10) + 48);
					_putchar(((i * j) % 10) + 48);
				}
				if ((i * j) >= 100)
				{
					_putchar(((i * j) / 100) + 48);
					_putchar((((i * j) % 100) / 10) + 48);
					_putchar(((i * j) % 10) + 48);
				}
				if (j != n)
					_putchar(44);
			}
		_putchar(10);
		}
	}
}
