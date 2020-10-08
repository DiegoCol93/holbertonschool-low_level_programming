#include "holberton.h"
/**
 * _natsqrt - Calculates natural sqrt of a number.
 * @a: Input number.
 * @b: Iteration number.
 *
 * Return: Result.
 */
int _natsqrt(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	if (b * b > a)
	{
		return (-1);
	}
	return (_natsqrt(a, b + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number n.
 * @n: Input number.
 *
 * Return: Result.
 */
int _sqrt_recursion(int n)
{
	return (_natsqrt(n, 1));
}

