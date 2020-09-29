#include "holberton.h"
/**
 * puts2 - Prints a string oddly.
 * @str: Input string.
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar(10);
}
