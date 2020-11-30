#include <stdio.h>
#include <stdint.h>
/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Return: 0 On success.
 */
int main(void)
{
	uintmax_t a = 1, b = 2, c = 0;
/*	unsigned int i = 1;*/
	while (a < 9223372036854775807 && b < 9223372036854775807 &&
	       c < 9223372036854775807)
	{
		c = a + b;
/*		printf("%d |", i);*/
/*		i++;*/
		printf("%lu", a);
		printf(", ");
/*		putchar(10);*/

/*		printf("%d |", i);*/
/*		i++;*/
		printf("%lu", b);
		printf(", ");
/*		putchar(10);*/

/*		printf("%d |", i);*/
/*		i++;*/
		printf("%lu", c);
		a = b + c;
		b = c + a;
		printf(", ");
/*		putchar(10);*/
	}
	putchar(10);
	return (0);
}
