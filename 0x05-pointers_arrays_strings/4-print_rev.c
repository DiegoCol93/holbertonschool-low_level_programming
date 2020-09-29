#include "holberton.h"
/**
 * print_rev - Prints a string reversed.
 * @s: Input string.
 */
void print_rev(char *s)
{
	int Lenght = 0;
	char *Start, *End;

	Start = s;
	while (*Start != '\0')
	{
		Lenght++;
		Start++;
	}
	End = s + Lenght - 1;
	while (End > s)
	{
		_putchar(*End);
		End--;
	}
	_putchar(10);
}
