#include "holberton.h"
/**
 * _strlen - Returns the length of a string.
 * @s: Input String.
 *
 * Return: lenght of string as int number.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
