#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - Reverts a string.
 * @s: Input string.
 */
void rev_string(char *s)
{
	int Lenght, Swap;
	char Char, *Eye;

	Eye = s;
	for (Lenght = 0; *Eye != '\0'; Lenght++)
	{
		Eye++;
	}
	Eye = Eye - 1;
	for (Swap = 0; Swap < (Lenght / 2); Swap++)
	{
		Char = s[Swap];
		s[Swap] = *Eye;
		*Eye = Char;
		Eye--;
	}
}
