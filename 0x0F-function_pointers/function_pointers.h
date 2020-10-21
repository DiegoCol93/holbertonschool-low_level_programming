#ifndef __FILE__H_
#define __FILE__H_
#include <stdlib.h>

/* _putchar - writes the character c to stdout. */
int _putchar(char c);

/* Print_name - function that prints a name. */
void print_name(char *name, void (*f)(char *));

/* Executes a function given as a parameter on each element of an array. */
void array_iterator(int *array, size_t size, void (*action)(int));

/* int_index - Searches for an integer inside an array. */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* __FILE__H_ */
