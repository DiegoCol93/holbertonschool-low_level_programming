#include "holberton.h"
/**
 * reverse_array - Reverts an array;
 * @a: Target Array.
 * @n: Size of Array.
 */
void reverse_array(int *a, int n)
{
	int Mem, i;
	int *Eye;

	Eye = &a[n - 1];
	for (i = 0; i < (n / 2); i++)
	{
		Mem = a[i];
		a[i] = *Eye;
		*Eye = Mem;
		Eye--;
	}
}
