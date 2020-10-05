#include "holberton.h"
/**
 * _memset - Fills memory with a constant byte.
 * @s: Target pointer.
 * @b: Byte to set.
 * @n: Number of bytes to fill.
 *
 * Return: s, Pointer to filled area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0; /* <<- - - - - - - - - - - - Declaring counter i. */

	while (i < n) /* <<- - - - - - - - - Loop for counting bytes to fill. */
	{
		s[i] = b; /* <<- - - - - - - - - - - - - -Sets bits on Index. */
		i++; /* <<- - - - - - - - - - - - - - - - Step to next index. */
	}
	return (s); /* <<- - - - - - -Return pointer pointing to filled area. */
}
