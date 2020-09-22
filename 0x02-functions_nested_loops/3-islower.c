#include "holberton.h"
/**
 * _islower - Checks for upper or lower case.*
 * @c: The input character.
 *
 * Return: 1 if lowercase, 0 otherwise.
 */

int _islower(int c)
{
	int i;

	i = islower(c);
	if (i != 0)
	{
		return (1);
	}
	return (0);
}
