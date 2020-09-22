#include "holberton.h"
/**
 * print_last_digit - Prints the last digit.
 * @l: Input number.
 *
 * Return: l, Absolute value of last digit.
 */
int print_last_digit(int l)
{
	l = (_abs(l) % 10);
	_putchar(_abs(l) + 48);
	return (l);
}
