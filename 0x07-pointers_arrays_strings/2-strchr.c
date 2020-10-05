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
	char *ptr; /* <<- - - - - - - - - - - - - - - -Declaring pointer ptr. */
	int i = 0; /* <<- - - - - - - - - - - - - - - - -Declaring counter i. */

	while (s[i] != '\0') /* <<- - - - - -Runs through lenght of string s. */
	{
		if (s[i] == c) /* Comparing if character on index equal to c. */
		{
			ptr = &s[i]; /* Sets ptr to address of 1st char found */
			return (ptr); /* <<- - -Return pointer to found char. */
		}
		i++; /* <<- - - - - - - - - - - - - -Move index to next step. */
	}
	return ('\0');/* <<- - - - - - - - -Return NULL if nothing was found. */
}
