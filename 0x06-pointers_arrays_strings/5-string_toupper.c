#include "holberton.h"
/**
 * string_toupper - Changes a string to uppercase.
 * @s: Target string.
 *
 * Return: String.
 */
char *string_toupper(char *s)
{
	int Write;

	for (Write = 0; s[Write] != '\0'; Write++)
	{
		if (s[Write] >= 97 && s[Write] <= 122)
		{
			s[Write] = s[Write] - 32;
		}
	}
	return (s);
}
