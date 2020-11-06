#include "holberton.h"
/**
 *   set_bit    - Sets the value of a bit to 1 at a given index.
 *
 *  Arguments:
 *   @index:    - Index to change the bit at.
 *     @n:      - Decimal number.
 *
 *   Return:    - 1 on success, -1 if failed.
 *
 * |----- Written by Diego Lopez | November - 05 - 2020. -----|
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	aux <<= index, *n |= aux;
	return (1);
}
