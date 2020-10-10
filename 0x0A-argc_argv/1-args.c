#include "holberton.h"
/**
 * main - prints the number of arguments back.
 * @argc: Number of arguments.
 * @argv: Strings of arguments.
 *
 * Return: 0 Always, On completion.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
