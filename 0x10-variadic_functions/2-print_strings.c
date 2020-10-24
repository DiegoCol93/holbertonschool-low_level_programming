#include "variadic_functions.h"
/**
 * print_string - Prints a string followed by a new line.
 * @separator: Separtor string.
 * @n: Number of arguments.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *s;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (i == (n - 1))
		{
			printf("\n");
			break;
		}
		if (separator)
			printf("%s", separator);
	}
	va_end(str);
}
