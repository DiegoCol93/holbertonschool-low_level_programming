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
	char Code[] = {"430714307"};
	char Letter[] = {"aeotlAEOTL"};

	for (Read = 0; s[Read] != '\0'; Read++)
	{
		for (Write = 0; Write < 10; Write++)
		{
			if (s[Read] == Letter[Write])
				s[Read] = Code[Write];
		}
	}
	return (s);
}
