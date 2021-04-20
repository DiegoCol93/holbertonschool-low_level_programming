#include "search_algos.h"
/**
 * binary_search - Searches for a value in an array of integers.
 *
 *   Arguments:
 *     @array:   - Pointer to array of integers.
 *      @size:   - Size of the array (number of elements).
 *     @value:   - Integer Value to search for.
 *
 *     Return:   - The (index) of the value in the array or (-1)
 *                  if array is NULL or no value was found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, low = 0, top = size - 1, mid = 0;

	if (array)
		while (low <= top)
		{
			mid = (low + top) / 2;

			/* Prints the current array */
			printf("Searching in array: ");
			for (i = low; i <= top; i++)
				i != top ? printf("%d, ", array[i]) : printf("%d", array[i]);
			printf("\n");

			if (array[mid] < value)
				low = mid + 1;
			else if (array[mid] > value)
				top = mid - 1;
			else
				return (mid);
		}
	return (-1);
}
