#include "search_algos.h"

# define TERNARY (jmp + 1 < size ? jmp + 1 : size)

int binary_search_range(int *array, size_t low, size_t top, int value);
/**
 * exponential_search -  Searches for a value in an array of integers.
 *
 *     Arguments:
 *       @array:      -  Pointer to array of integers.
 *        @size:      -  Size of the array (number of elements).
 *       @value:      -  Integer Value to search for.
 *
 *       Return:      -  The (index) of the value in the array or (-1)
 *                          if array is NULL or no value was found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t jmp = 1;

	if (array)
	{
		for (jmp = 1; jmp < size && array[jmp] < value; jmp *= 2)
			printf("Value checked array[%lu] = [%d]\n", jmp, array[jmp]);
		return (binary_search_range(array, jmp / 2, TERNARY, value));
	}
	return (-1);
}

/**
 * binary_search_range - Searches for a value in an array of integers.
 *
 *   Arguments:
 *     @array:   - Pointer to array of integers.
 *      @low:    - Index for lowest limint of range.
 *      @top:    - Index for top index for range.
 *     @value:   - Integer Value to search for.
 *
 *     Return:   - The (index) of the value in the array or (-1)
 *                  if array is NULL or no value was found.
 */
int binary_search_range(int *array, size_t low, size_t top, int value)
{
	size_t i, mid = 0;

	top--; /* right = right -1 */
	printf("Value found between indexes [%lu] and [%lu]\n", low, top);
	if (array)
		while (low <= top)
		{
			mid = (low + top) / 2;
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
