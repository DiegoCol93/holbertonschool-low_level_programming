#include "holberton.h"
#include <stdio.h>
/**
 * main - Prints sum of factors of 3 and 5 less than 1024.
 *
 * Return: 0 on succes.
 */
int main(void)
{
	unsigned int i, num = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			num += i;
	}
	printf("%d\n", num);
	return (0);
}
