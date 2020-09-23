#include "holberton.h"
/**
 * times_table - Prints the times 9 table.
 */
void times_table(void)
{
	int i, j;
	int res;

	for (i = 0; i <= 9 ; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = (i * j);
			if (res < 10 && j != 9)
			{
				_putchar(res + 48);
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			if (res >= 10 && j != 9)
			{
				_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
				_putchar(44);
				_putchar(32);
			}
			if (res < 10 && j == 9)
			{
				_putchar(res + 48);
				_putchar(10);
			}
			if (res >= 10 && j == 9)
			{
				_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
				_putchar(10);
			}
		}
	}
}
