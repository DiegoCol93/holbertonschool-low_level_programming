#include "holberton.h"
/**
 * puts2 - Prints a string oddly.
 * @str: Input string.
 */
void puts2(char *str)
{
	int Lenght;

	for (Lenght = 0; str[Lenght] != '\0'; Lenght++)
	if ((Lenght % 2) == 0)
	_putchar(str[Lenght]);
	_putchar(10);
}
