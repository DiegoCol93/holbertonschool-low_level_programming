#include "holberton.h"
/**
 * array_range - Creates an array of integers from min to max.
 *
 *    @min:    - Min number.
 *    @max:    - Max number
 *
 *   Return:   - ar, pointer to array; NULL if fails.
 */
int *array_range(int min, int max)
{
	int *ar = NULL, size, i;

	if (min > max)
		return (NULL);
	if (min == max)
		size = max + 1;
	else
		size = max - min + 1;
	ar = malloc(sizeof(int) * (size));
	if (ar)
		for (i = 0; i < size; i++)
			ar[i] = i;
	return (ar);
}
