#include "holberton.h"
/**
 * _puts - Prints string.
 * @str: String input.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
