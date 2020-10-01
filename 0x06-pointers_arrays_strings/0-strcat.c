#include "holberton.h"
/**
 * _strcat - concatenates two strings.
 * @src: Source string.
 * @dest: Destiny string to append to.
 *
 * Return: dest, concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int Lenght = 0;
	int Lenght2 = 0;

	while (dest[Lenght] != '\0')
	{
		Lenght++;
	}
	while (src[Lenght2] != '\0')
	{
		dest[Lenght + Lenght2] = src[Lenght2];
		Lenght2++;
	}
	return (dest);
}
