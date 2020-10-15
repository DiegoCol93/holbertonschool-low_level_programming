#include "holberton.h"
/**
 * malloc_checked  - Allocates b bytes of memory using malloc.
 *
 *      @b:        - Number of bytes.
 *
 *   Return:  mall - Pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *mall = malloc(b);

	if (mall == NULL)
		exit(98);
	return (mall);
}
