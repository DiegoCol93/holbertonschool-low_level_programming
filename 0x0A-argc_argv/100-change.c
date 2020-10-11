#include "holberton.h"
/**
 * main - Prints the minimum number of coins to make change.
 *
 * @argc: Input number.
 * @argv: Input string.
 *
 * Return: amount of cents.
 */
int main(int argc, char *argv[])
{
	unsigned long int i = 0, num = 0;
	int centsA[5] = {25, 10, 5, 2, 1};
	unsigned long int cents = 0;
	unsigned long int times[5] = {0};

	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
	if (argc == 1)
	{
		printf("Usage: %s cents\n", argv[0]);
		return (0);
	}
	num = atoi(argv[1]);
	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < 5; i++)
	{
		times[i] = num / centsA[i];
		num = num % centsA[i];
	}
	cents = times[0] + times[1] + times[2] + times[3] + times[4];
	printf("%lu\n", cents);
	return (0);
}
