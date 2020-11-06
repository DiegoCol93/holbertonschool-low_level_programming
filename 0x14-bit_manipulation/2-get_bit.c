#include "holberton.h"
/**
 *   get_bit   - Returns the value of a bit at a given index.
 *
 *  Arguments:
 *   @index:   - Index for the bit to get.
 *     @n:     - Number to get the bit off of.
 *
 *   Return:   - Value at index of binary.
 *
 * |---- Written by Diego Lopez | November - 05 - 2020. ----|
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index <= sizeof(unsigned long int) * 8)
	{
		return (1 & (n >> index));
	}
	return (-1);
}
