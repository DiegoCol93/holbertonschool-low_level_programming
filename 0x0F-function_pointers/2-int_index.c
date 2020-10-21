#include "function_pointers.h"
/**
 * int_index - Searches for an integer inside an array.
 * @array:   - Target array.
 * @size:    - Size of the array.
 * @cmp:     - Comparing function to use.
 *
 * Return: index, position of the number in the array.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = -1, res = 0;

	if (array && size > 0 && cmp)
	{
		while (index++ < size)
		{
			res = (*cmp)(array[index]);
			if (res)
				return (index);
		}
		index = -1;
	}
	return (index);
}
