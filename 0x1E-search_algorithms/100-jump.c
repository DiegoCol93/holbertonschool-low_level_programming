#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Searches for a value in an array of integers.
 *
 *   Arguments:
 *     @array:   - Pointer to array of integers.
 *      @size:   - Size of the array (number of elements).
 *     @value:   - Integer Value to search for.
 *
 *     Return:   - The (index) of the value in the array or (-1)
 *                  if array is NULL or no value was found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low = 0, jmp = 0;

	if (array)
	{
		/* While jmp step is less than size. */
		while (jmp < size)
		{
			if (array[jmp] >= value)
				break;
			printf("Value checked array[%lu] = [%d]\n", jmp, array[jmp]);
			low = jmp;
			jmp = jmp + sqrt(size);
		}
		printf("Value found between indexes [%lu] and [%lu]\n", low, jmp);
		/* Regular linear search from lowest index on the block up to jmp. */
		while (low <= jmp && low < size)
		{
			printf("Value checked array[%lu] = [%d]\n", low, array[low]);
			if (array[low] == value)
				return (low);
			low++;
		}
		printf("%lu", low);
	}
	return (-1);
}
