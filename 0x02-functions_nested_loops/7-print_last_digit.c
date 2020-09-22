#include "holberton.h"
/**
 * print_last_digit - Prints the last digit.
 * @l: Input number.
 *
 * Return: l, Absolute value of last digit.
 */
int print_last_digit(int l)
{
	if (l < 0)
	{
		l = -l;
	}
	l = (l % 10);
	_putchar(l + 48);
	return (l);
}
