#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Return: 0 On success.
 */
int main(void)
{
	unsigned long long int a = 1, b = 2, c;

	while (a < 100000000 && b < 100000000 && c < 100000000)
	{
		c = a + b;
		printf("%llu", a);
		printf(", ");

		printf("%llu", b);
		if (b >= 63245986)
			break;
		printf(", ");

		printf("%llu", c);
		a = b + c;
		b = c + a;
		printf(", ");
	}
	putchar(10);
	return (0);
}
