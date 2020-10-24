#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: Separator between numbers printed.
 * @n: Number of arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(nums, int));
		if (i < (n-1) && separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
