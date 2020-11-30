#include <stdio.h>
/**
 * main - Prints the first 10 Odd Fibonacci numbers.
 *
 * Return: 0 On success.
 */
int main(void)
{
	unsigned int a = 1, b = 2, c;

	while (a < 1000000 && b < 1000000 && c < 1000000)
	{
		c = a + b;

		if (a % 2 == 0)
		{
			printf("a : %lu", a);
			printf(", ");
		}
		if (b % 2 == 0)
		{
			printf("b : %lu", b);
			if (b >= 832040)
				break;
			printf(", ");
		}
		if (c % 2 == 0)
		{
			printf("c : %lu", c);
			printf(", ");
		}
		a = b + c;
		b = c + a;
	}
	putchar(10);
	return (0);
}
