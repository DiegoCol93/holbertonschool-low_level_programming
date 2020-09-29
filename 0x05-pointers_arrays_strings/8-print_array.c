#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Print elements of an array.
 * @a: Array of elements.
 * @n: Number of elements to print.
 */
void print_array(int *a, int n)
{
	int Index;

	for (Index = 0; Index < n; Index++)
	{
		printf("%d", a[Index]);
		if (Index == n - 1)
		{
			break;
		}
		printf(", ");
	}
	putchar(10);
}
