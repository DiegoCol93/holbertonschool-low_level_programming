#include "holberton.h"
/**
 * main - Sums 2 or more numbers.
 * @argc: Number of arguments.
 * @argv: Argument string.
 *
 * Return: 0 on completion, 1 on Error.
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		putchar(48);
		putchar(10);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", (argc > 1) ? sum : atoi(argv[i]));
	return (0);
}
