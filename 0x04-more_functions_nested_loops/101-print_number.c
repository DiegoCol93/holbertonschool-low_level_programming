#include "holberton.h"
/**
 * print_number - Prints numbers in format -0000.
 * @n: Input Number.
 */
void print_number(int n)
{
	int abs = n;

	if (n < 0)
	{
		abs = (n * (-1));
		_putchar(45);
	}
	if (n == 0)
	{
		_putchar(48);
	}
	else if (abs > 0 && abs < 10)
	{
		_putchar(abs + 48);
	}
	else if (abs >= 10 && abs < 100)
	{
		_putchar ((abs / 10) + 48);
		_putchar ((abs % 10) + 48);
	}
	else if (abs >= 100 && abs < 1000)
	{
		_putchar ((abs / 100) + 48);
		_putchar (((abs / 10) % 10) + 48);
		_putchar ((abs % 10) + 48);
	}
	else if (abs >= 1000 && abs < 10000)
	{
		_putchar ((abs / 1000) + 48);
		_putchar (((abs / 100) % 10) + 48);
		_putchar (((abs / 10) % 10) + 48);
		_putchar ((abs % 10) + 48);
	}
}
