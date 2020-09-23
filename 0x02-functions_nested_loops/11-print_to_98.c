#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers from num98 to 98.
 * @n98: Input number for the program.
 */
void print_to_98(int n98)
{
	if (n98 == 98)
	{
		printf("%d\n", n98);
	}
	if (n98 < 98)
	{
		while (n98 < 98)
		{
			printf("%d, ", n98);
			n98++;
		}
		printf("%d\n", n98);
	}
	if (n98 > 98)
	{
		while (n98 > 98)
		{
			printf("%d, ", n98);
			n98--;
		}
		printf("%d\n", n98);
	}
}
