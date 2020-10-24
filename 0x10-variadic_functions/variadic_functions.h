#ifndef __FILE___H_
#define __FILE___H_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct print_s - Struct for printing everything.
 * @letter: Letter for format to print.
 * @f: Funcion pointer.
 */
typedef struct print_s
{
	char letter;
	void (*f)();
} print_t;

/* _putchar - writes the character c to stdout. */
int _putchar(char c);

/* 0. sum_them_all - Returns the sum of all its parameters.*/
int sum_them_all(const unsigned int n, ...);

/* 1. print_numbers - Prints numbers, followed by a new line. */
void print_numbers(const char *separator, const unsigned int n, ...);

/* 2. print_strings - Prints strings, followed by a new line. */
void print_strings(const char *separator, const unsigned int n, ...);

/* 3. print_all - Prints anything.(char, int, float, string) */
void print_all(const char * const format, ...);

/* 3.1 printcha - Printf a character. */
void printcha(va_list arg);

/* 3.2 printint - Prints an integer number.*/
void printint(va_list arg);

/* 3.3 printflo - Prints a float type number. */
void printflo(va_list arg);

/* 3.4 printstr - Prints a string. */
void printstr(va_list arg);

#endif /* __FILE___H_ */
