#include "holberton.h"
/**
 * _isalpha - Checks if c is an alphabetic character or not
 * @c: The input character.
 *
 * Return: 1 if upper or lower case, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
