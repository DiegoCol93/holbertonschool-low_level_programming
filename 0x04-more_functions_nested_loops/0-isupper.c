# include "holberton.h"
/**
 * _isupper - Checks if character is upper or lowercase
 * @c: Character to check.
 *
 * Return: 1 if c is Upper case, 0 otherwise.
 */
int _isupper(int c)
{
	if (c < 65 || c > 90)
	{
		return (0);
	}
	return (1);
}
