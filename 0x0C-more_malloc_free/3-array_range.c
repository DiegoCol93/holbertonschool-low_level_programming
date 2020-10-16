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
	size = max - min + 1;
	ar = malloc(sizeof(int) * (size));
	if (ar)
	{
		for (i = 0; i < size; i++)
		{
			ar[i] = min;
			min++;
		}
	}
	return (ar);
}
