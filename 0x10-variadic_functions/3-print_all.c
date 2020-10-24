#include "variadic_functions.h"
/**
 * printcha - Printf a character.
 * @arg: Argument to print.
 */
void printcha(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * printint - Prints an integer number.
 * @arg: Argument to print.
 */
void printint(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
 * printflo - Prints a float type number.
 * @arg: Argument to print.
 */
void printflo(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
 * printstr - Prints a string.
 * @arg: Argument to print.
 */
void printstr(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
/**
 * print_all - Prints anything.(char, int, float, string).
 * @format: Formatting string.
 */
void print_all(const char * const format, ...)
{
	va_list a_list;
	print_t func[] = {
		{'c', printcha},
		{'i', printint},
		{'f', printflo},
		{'s', printstr},
 		{'\0', '\0'}
	};
	unsigned int i = 0;
	unsigned int j = 0;
	char *s = "";

	va_start(a_list, format);
	while (format[i] != '\0' && format)
	{
		while (func[j].letter != '\0')
		{
			if (format[i] == func[j].letter)
			{
				printf("%s", s);
				func[j].f(a_list);
				s = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(a_list);
}
