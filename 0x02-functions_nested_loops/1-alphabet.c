#include "holberton.h"
/**
 * print_alphabet - Prints alphabet from a to z.
 *
 * Return: 0 Always, on completion.
 */
void print_alphabet(void)
{
	int ch = 97;
	while(ch <= 122)
	{
		_putchar(ch);
		ch++;
	}
	_putchar(10);
}
