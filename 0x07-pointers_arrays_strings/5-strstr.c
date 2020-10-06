#include "holberton.h"
/**
 * _strstr - Locates a substring.
 * @haystack: Target string.
 * @needle: Target substring.
 *
 * Return: ptr. Pointer to the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr = NULL; /* <<- - - - - - - - - - - -Declaring NULL pointer. */
	int i = 0; /* <<- - - - - - - -Declaring counter for haystack lenght. */
	int j = 0; /* <<- - - - - - - - -Declaring counter for needle lenght. */
	int comp = 0; /* <<- - - - - - - - - - - Declaring comparing counter. */

	while (haystack[i] != 0) /* <<-Runs through haystack lenght. */
	{
		j = 0; /* <<- - - - - - - - Resets counter for needle lenght. */
		while (needle[j] != '\0') /* << - - - - -Runs through needle. */
		{
			if (haystack[i] == needle[j]) /* <<- - - -Comparison. */
			{
				comp = i; /* <<- - - - - - Set comp to pos i. */
				while (haystack[comp] == needle[j])
				{/* ^<- - - - - - Loop while string is equal. */
					if (needle[j] == '\0')
					{/* ^<- - If to end comp and set ptr. */
						ptr = &haystack[i];
						return (ptr);
					}
					j++; /* <<- - - - - Needle next step. */
					comp++; /* <<- - - Compare next step. */
				}
			}
			j++; /* <<- - - - - - -  - - -Outer Needle next step. */
		}
		i++; /* <<- - - - - - - - - - - - - - - - Haystack next step. */
	}
	return ('\0'); /* <<- - - - - - - - -Return NULL if nothing is found. */
}
