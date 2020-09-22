#include "holberton.h"
/**
 * jack_bauer - Prints minutes on a day.
 *
 */
void jack_bauer(void)
{
	int num0, num1, num2, num3;

	for (num0 = 48; num0 <= 50 && num1 <= 51; num0++)
	{
		for (num1 = 48; num1 <= 57; num1++)
		{
			for (num2 = 48; num2 <= 53; num2++)
			{
				for (num3 = 48; num3 <= 57; num3++)
				{
					_putchar(num0);
					_putchar(num1);
					_putchar(':');
					_putchar(num2);
					_putchar(num3);
					_putchar('\n');
				}
			}
		}
		num1 = 48;
	}
}
