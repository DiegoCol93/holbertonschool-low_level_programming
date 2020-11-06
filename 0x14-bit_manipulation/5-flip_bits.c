#include "holberton.h"
/**
 *  flip_bits   - Returns the number of bits flipped to reach a number.
 *
 *  Arguments:
 *     @n:     - First number.
 *     @m:     - Second number.
 *
 *   Return:   - Number of bits flipped.
 *
 * |-------- Written by Diego Lopez | November - 05 - 2020. --------|
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0, i = 0, res = 0;

	while (i < sizeof(unsigned long int) * 8)
	{
		res = (n ^ m) >> i;
		if (res & 1)
			bits++;
		i++;
	}
	return (bits);
}
