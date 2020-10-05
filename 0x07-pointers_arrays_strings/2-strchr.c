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
	while (s) /* <<- - - - - - - - - - - Runs through lenght of string s. */
	{
		if (*s == c) /* <-Comparing if character on index equal to c. */
		{
			return (s); /* <<- - - -Return pointer to found char. */
		}
		else if (*s == '\0')
		{
			return ('\0');/* <<-Return NULL if nothing was found. */
		}
		s++;
	}

}
