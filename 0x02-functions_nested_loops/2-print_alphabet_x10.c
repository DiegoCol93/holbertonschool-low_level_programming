#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabet from a to z ten times.
 *
 */
void print_alphabet_x10(void)
{
	int ch = 97;
	int i;

	for (i = 0 ; i < 10; i++)
	{
		while (ch <= 122)
		{
			_putchar(ch);
			ch++;
		}
		_putchar(10);
		ch = 97;
	}
}
