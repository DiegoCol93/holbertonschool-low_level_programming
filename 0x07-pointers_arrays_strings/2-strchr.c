#include "holberton.h"
/**
 * _strchr - Locates a character in a string.
 * @s: Target string.
 * @c: Character to locate.
 *
 * Return: ptr, Pointer to first character ocurrence, NULL if c not found.
 */
char *_strchr(char *s, char c)
{
	for ( ; ; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*s == '\0')
		{
			return ('\0');
		}
	}
}
