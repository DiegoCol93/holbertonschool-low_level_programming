#include "holberton.h"
/**
 * rev_string - Reverts a string.
 * @s: Input string.
 */
void rev_string(char *s)
{
	int Lenght, End;
	int Write = 0;

	for (Lenght = 0; s[Lenght] != '\0'; Lenght++)
	{
	}
	char BckwCopy[Lenght];

	End = Lenght - 1;
	while (End >= 0)
	{
		BckwCopy[Write] = s[End];
		End--;
		Write++;
	}
	for (Lenght = 0; s[Lenght] != '\0'; Lenght++)
	{
		s[Lenght] = BckwCopy[Lenght];
	}
}
