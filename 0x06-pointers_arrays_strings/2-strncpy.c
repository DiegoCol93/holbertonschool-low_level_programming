#include "holberton.h"
/**
 * _strncpy - copies a string.
 * @dest: Destiny String.
 * @src: Source string.
 * @n: Number of bits to copy.
 *
 * Return: dest, String copied.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int Write = 0;

	while (Write < n && src[Write] != '\0')
	{
		dest[Write] = src[Write];
		Write++;
	}
	while (Write < n)
	{
		dest[Write] = '\0';
		Write++;
	}
	return (dest);
}
