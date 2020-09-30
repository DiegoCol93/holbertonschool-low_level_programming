#include "holberton.h"
/**
 * *_strcpy - Copies a string.
 */
char *_strcpy(char *dest, char *src)
{
	int Lenght, Write;

	for (Lenght = 0; src[Lenght] != 0; Lenght++)
	{
	}
	for(Write = 0; Write <= Lenght; Write++)
	{
		dest[Write] = src[Write];
	}
	return(dest);
}
