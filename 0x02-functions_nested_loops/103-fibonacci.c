#include <stdio.h>
#include <stdint.h>
/**
 * main - Prints the sum of the Odd numbers less tha 4 million
 *        in the fibonacci sequence.
 *
 * Return: 0 On success.
 */
int main(void)
{
	int64_t a = 1, b = 2, c = 0;
	int64_t res = 0;

	while (a < 4000000 && b < 4000000 && c < 4000000)
	{
		c = a + b;
		res = res + b;
		a = b + c;
		b = c + a;
	}
	printf("%lu", res);
	putchar(10);
	return (0);
}
