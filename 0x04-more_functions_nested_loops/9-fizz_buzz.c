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
			printf("FizzBuzz");
			putchar(32);
			continue;
		}
		if (i % 3 == 0)
		{
			printf("Fizz");
			putchar(32);
			continue;
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
			if(i == 100)
			{
				putchar(10);
				return (0);
			}
			putchar(32);
			continue;
		}
		printf("%d", i);
		putchar(32);
	}
	putchar(10);
	return (0);
}
