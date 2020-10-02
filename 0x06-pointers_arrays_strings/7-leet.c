#include "holberton.h"
/**
 * leet - Encodes string into 1337.
 * @s: Target string:
 *
 * Return: Encoded string.
 */
char *leet(char *s)
{
	int Read, Write;
	char Code[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7'};
	char Letter[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	for (Read = 0; s[Read] != '\0'; Read++)
	{
		for (Write = 0; Write <= 10; Write++)
		{
			if (s[Read] == Letter[Write])
			{
				s[Read] = Code[Write];
			}
		}
	}
	return (s);
}
