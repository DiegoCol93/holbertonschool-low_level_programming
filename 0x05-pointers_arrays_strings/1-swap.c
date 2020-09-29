#include "holberton.h"
/**
 * swap_int - Swaps the values of a and b.
 * @a: Value a.
 * @b: value b.
 */
void swap_int(int *a, int *b)
{
	int num1, num2;

	num1 = *a;
	num2 = *b;
	*a = num2;
	*b = num1;
}
