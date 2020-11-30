#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Return: 0 On success.
 */
int main(void)
{
	int a = 1, b = 1, c;

	while (a < 100 && b < 100 && c < 100)
	{
		c = a + b;
		printf("%d, ", a);
		printf("%d", b);
		if (a > 100 || b > 100 || c > 100)
			break;
		printf(", ");
		printf("%d", c);
		a = b + c;
		b = c + a;
		printf(", ");
	}
	putchar(10);
	return (0);
}
