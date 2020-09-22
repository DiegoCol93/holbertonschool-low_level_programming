#include "holberton.h"
/**
 * _abs - Computes the absolute value of a number
 * @n: Input number.
 *
 * Return: Absolute value.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (n * -1);
	}
	return (n);
}
