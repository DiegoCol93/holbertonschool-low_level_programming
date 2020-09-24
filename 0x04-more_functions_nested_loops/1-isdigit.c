#include "holberton.h"
/**
 * _isdigit - Checks if character is 0 through 9.
 * @c: Character to check
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c < 48 || c > 57)
	{
		return (0);
	}
	return (1);
}
