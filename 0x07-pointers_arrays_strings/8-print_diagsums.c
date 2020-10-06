#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: Target matrix.
 * @size: integer size of matrix.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1, sum2;

	for (i = 0; i < (size * size); i += (size + 1))
	{
		sum1 += a[i];
	}
	for (i = (size - 1); i <= ((size - 1) * size); i += (size - 1))
	{
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
