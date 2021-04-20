#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of integers.
 *
 *   Arguments:
 *     @array:   - Pointer to array of integers.
 *      @size:   - Size of the array (number of elements).
 *     @value:   - Integer Value to search for.
 *
 *     Return:   - The (index) of the value in the array or (-1)
 *                  if array is NULL or no value was found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array) /* Is not NULL */
		for (index = 0; index < size; array++, index++)
		{
			printf("Value checked array[%lu] = [%d]\n", index, *array);
			if (value == *array)
				return (index);
		}
	return (-1);
}
