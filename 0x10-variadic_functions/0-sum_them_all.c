#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its parameter.
 * @n: Number of arguments.
 *
 * Return: Result of the sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int res = 0;
	unsigned int i;

	if (n)
	{
		va_start(nums, n); /* Initializes arg list */
		for (i = 0; i < n; i++)
		{
			res += va_arg(nums, int);
		}
		va_end(nums);
		return (res);
	}
	return (0);
}
