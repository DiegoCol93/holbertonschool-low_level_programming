#include "holberton.h"
#include <stdio.h>
/**
 * main - Prints Fizz for factors of 3, prints Buzz for factors of 5
 *             and prints FizzBuzz for factors of 3 and 5, up to 100.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		if (i % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		printf("%d ", i);
	}
	putchar(10);
	return (0);
}
