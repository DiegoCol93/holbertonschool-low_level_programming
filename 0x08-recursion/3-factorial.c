#include "holberton.h"
/**
 * factorial - Returns the factorial of a given number.
 * @n: Input number.
 *
 * Return: result number, -1 if n < 0;
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
