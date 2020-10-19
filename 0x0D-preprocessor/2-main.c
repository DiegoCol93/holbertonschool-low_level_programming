#include "stdio.h"
/**
 * main - Prints the name of the .c file used for compilation.
 *
 * Return: 0 on completion.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
