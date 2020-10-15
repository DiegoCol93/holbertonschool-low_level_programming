#include "holberton.h"
/**
 * _calloc   - Allocates and initializes a block of memory.
 *
 *  @nmemb:  - Number of members for new array.
 *   @size:  - Size of member.
 *
 *  Return:  - Pointer to new initialized array,
 *             NULL if fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array)
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			array[i] = 0;
		}
	}
	return (array);
}
