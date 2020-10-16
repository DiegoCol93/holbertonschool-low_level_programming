#include "holberton.h"
/**
 *  _realloc   -  Reallocates a block of memory with a specific size.
 *
 *    @ptr:    -  Target to previously allocated block of memory.
 *  @old_size: -  Old size of type.
 *  @new_size: -  New size of type.
 *
 * Return:     -  nptr, pointer to new block of memory, NULL if fails; ptr if
 *                old_size == new_size.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr = NULL;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	nptr = malloc(new_size);
	if (nptr)
	{
		free (ptr);
		return (nptr);
	}
	return (nptr);
}
