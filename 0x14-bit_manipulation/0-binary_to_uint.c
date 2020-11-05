#include "holberton.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 *   Arguments:
 *      @b:       - Pointer to the recieved sting o chars.
 *
 *    Return:     - Number as an unsigned decimal integer.
 *
 * |--------Written by Diego Lopez - November/05/2020.--------|
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0;
	unsigned int bDigit = 1;

	if (b && b[len])
	{
		for (; b[len] != '\0'; len++)
		{
			if (b[len] != '1' && b[len] != '0')
				return (0);
		}
		len--;
		for (; len >= 0; len--)
		{
			num += (b[len] - '0') * bDigit;
			bDigit = bDigit * 2;
		}
	}
	return (num);
}
