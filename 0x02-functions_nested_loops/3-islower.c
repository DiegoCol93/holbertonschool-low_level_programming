#include "holberton.h"
/**
 * _islower - Checks for upper or lower case.*
 * @c: The input character.
 *
 * Return: 1 if lowercase, 0 otherwise.
 */
int _islower(int c)
{	
	if (islower(c) != 0)
	{
		return (1);
	}
	return (0);
}
