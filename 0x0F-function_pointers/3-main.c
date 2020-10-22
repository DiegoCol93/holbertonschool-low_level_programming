#include "3-calc.h"
/**
 * main - Main function to calculate operations with a and b.
 * @argc: Number of arguments for the program.
 * @argv: Pointer to arguments.
 *
 * Return: 0 on succes, 98 if # args incorrect, 99 if operator incorrect,
 *         100 if divide or modulus by 0.
 */
int main(int argc, char **argv)
{
	int res, a, b;

	a = (atoi(argv[1]));
	b = (atoi(argv[3]));

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (b == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	res = get_op_func(argv[2])(a, b);
	printf("%d\n", res);
	return (0);
}
