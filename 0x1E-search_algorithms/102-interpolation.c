#include "search_algos.h"
# define L low
# define T top
# define A array
# define INTERPOL (L + (((double)(T - L) / (A[T] - A[L])) * (value - A[L])))
# define CONDITION ((A[T] != A[L]) && (value >= A[L]) && (value <= A[T]))

/**
 * interpolation_search -  Searches for a value in an array of integers.
 *
 *      Arguments:
 *        @array:       -  Pointer to array of integers.
 *         @size:       -  Size of the array (number of elements).
 *        @value:       -  Integer Value to search for.
 *
 *        Return:       -  The (index) of the value in the array or (-1)
 *                          if array is NULL or no value was found.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, top = size - 1, mid = 0;

	if (array)
	{
		while CONDITION
		{
			mid = INTERPOL;
			printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
			if (array[mid] < value)
				low = mid + 1;
			else if (value < array[mid])
				top = mid - 1;
			else
				return (mid);
		}
		if (value == array[low])
			return (low);
		else
		{
			mid = INTERPOL;
			printf("Value checked array[%lu] is out of range\n", mid);
			return (-1);
		}
	}
	return (-1);
}
