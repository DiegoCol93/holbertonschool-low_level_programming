#include "holberton.h"
#include <stdlib.h>
/**
 * simple_print_buffer - Creates an array of chars, and initializes it with
 *                       a specific char.
 *
 * @size:                Size of the array.
 * @c:                   Character to use.
 *
 * Return:               s, pointer to the created array; NULL if size 0.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (size == 0 || s == '\0')
	{
		return ('\0');
	}
	else
	{
		while (i < size)
		{
			s[i] = c;
			i++;
		}
		return (s);
	}
	return ('\0');
}
