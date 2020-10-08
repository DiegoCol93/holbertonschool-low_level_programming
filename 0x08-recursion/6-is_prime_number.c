#include "holberton.h"
/**
 * optimus_prime - Calculates iteratively for prime number.
 * @n: Input number
 * @f: Prime factor iterator.
 *
 * Return: 1 if input is prime, 0 otherwise.
 */
int optimus_prime(int n, int f)
{
	if (f < n)
	{
		if (n % f == 0)
		{
			return (0);
		}
	}
	if (n == f)
	{
		return (1);
	}
	return (optimus_prime(n, f + 1));
}

/**
 * is_prime_number - Tells if a number is prime or not.
 * @n: Input number.
 *
 * Return: 1 if input is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n % 2 == 0 || n <= 1)
	{
		return (0);
	}
	return (optimus_prime(n, 2));
}
