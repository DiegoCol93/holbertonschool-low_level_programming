#include "holberton.h"
/**
 * main - Multiplies two number together
 * @argc: Number of arguments.
 * @argv: Input numbers.
 *
 * Return: 0 on completion, 1 on error.
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", ((atoi(argv[1])) * (atoi(argv[2]))));
		return (0);
	}
	printf("\033[91mError\n\033[0m");
	return (1);

}
