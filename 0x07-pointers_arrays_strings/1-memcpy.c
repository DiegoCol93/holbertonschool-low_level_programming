#include "holberton.h"
/**
 * _memcpy - Copies memory area.
 * @dest: Destiny target.
 * @src: Source target.
 * @n: Number of bytes to copy.
 *
 * Return: dest, Target destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0; /* <<- - - - - - - - - - - - Declaring counter i. */

	while (i < n) /* <<- - - - - - - - - - - - Loop for counting up to n. */
	{
		dest[i] = src[i]; /* <<-Copies the contents from src to dest. */
		i++; /* << - - - - - - - - - - - - - - - - - Index next step. */
	}
	return (dest); /* <<- - - - - - Return pointer to copied destination. */
}
