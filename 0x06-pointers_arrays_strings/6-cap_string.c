#include "holberton.h"
/**
 * cap_string - Capitalizes all the words on a string.
 * @s: Target string.
 *
 * Return: Capitalize string.
 */
char *cap_string(char *s)
{
	char NewWord[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int Write, Compare;

	for (Write = 0; s[Write] != '\0'; Write++)
	{
		if (s[Write] >= 97 && s[Write] <= 122)
		{
			Compare = 0;
			for (Compare = 0; Compare < 13; Compare++)
			{
				if (s[Write - 1] == NewWord[Compare])
				{
				s[Write] = s[Write] - 32;
				break;
				}
			}
		}
	}
	return (s);
}
