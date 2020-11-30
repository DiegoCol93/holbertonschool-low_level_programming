#include <stdio.h>
#include <stdint.h>
/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Return: 0 On success.
 */
int main(void)
{
	int64_t a = 1, b = 2, c;

	while (a < 100000000000 && b < 100000000000 && c < 100000000000)
	{
		c = a + b;
		printf("%lu", a);
		printf(", ");

		printf("%lu", b);
		if (b >= 20365011074)
			break;
		printf(", ");

		printf("%lu", c);
		a = b + c;
		b = c + a;
		printf(", ");
	}
	putchar(10);
	return (0);
}
