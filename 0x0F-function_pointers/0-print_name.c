#include "function_pointers.h"
/**
 * print_name - Function that prints a name.
 * @name: String of the name to print.
 * @f: Fucntion pointer to called function to print.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
		(*f)(name);
}
