#include "holberton.h"
/**
 * print_binary - Prints the binary representation of a number.
 *
 *  Arguments:
 *      @n:     - Number to print.
 *
 * |---- Written by Diego Lopez | November - 05 - 2020. ----|
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	if (n & 1)
	{
		_putchar('1');
		return;
	}
	else
	{
		_putchar('0');
		return;
	}
}
