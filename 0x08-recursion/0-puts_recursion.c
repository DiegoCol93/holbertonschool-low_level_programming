#include "holberton.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: Target string.
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}