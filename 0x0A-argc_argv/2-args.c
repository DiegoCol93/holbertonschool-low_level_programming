#include "holberton.h"
/**
 * main - prints all arguments back.
 * @argc: Number of arguments.
 * @argv: Strings of arguments.
 *
 * Return: Always 0, on completion.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
