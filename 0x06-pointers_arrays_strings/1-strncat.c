#include "holberton.h"
/**
 * _strncat - Concatenates two strings up to index n from source.
 * @dest: Destiny string.
 * @src: Source String.
 * @n: Number of bytes to copy.
 *
 * Return: dest, String concatenated.
 */
char *_strncat(char *dest, char *src, int n)
{
	int Read = 0;
	int Write = 0;

	while (dest[Read] != '\0')
	{
		Read++;
	}
	while (Write < n && src[Write] != '\0')
	{
		dest[Read + Write] = src[Write];
		Write++;
	}
	dest[Read + Write] = '\0';
	return (dest);
}
