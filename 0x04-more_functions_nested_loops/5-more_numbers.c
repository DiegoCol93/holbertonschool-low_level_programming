#include "holberton.h"
/**
 * more_numbers - Prints 0 to 14 ten times.
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j * 10;
			if (j >= 10)
			{
				k = j;
			}
			_putchar((k / 10) + '0');
			if (j >= 10)
			{
				_putchar((j % 10) + '0');
			}
		}
		_putchar(10);
	}
}
