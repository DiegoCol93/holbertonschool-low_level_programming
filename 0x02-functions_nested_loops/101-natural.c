#include "holberton.h"
#include <stdio.h>
/**
 * natural - Prints sum of factors of 3 and 5 less than 1024.
 */
void natural(void)
{
	int i, num = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			num += i;
	}
	printf("%d\n", num);
}
