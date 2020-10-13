#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#define NULL '\0'
#include <stdlib.h>

/* Writes the character c to stdout */
int _putchar(char c);

/* Creates an array of chars, and initializes it with a specific char. */
char *create_array(unsigned int size, char c);

/**
 *  _strdup - returns a pointer to a newly allocated space in memory, which
 *            contains a copy of the string given as a parameter.
 */
char *_strdup(char *str);

/* str_concat - Concatenates two strings. */
char *str_concat(char *s1, char *s2);

/* alloc_grid - Returns a pointer to a 2 dimensional array of integers. */
int **alloc_grid(int width, int height);

/* free_grid -  Frees a 2 dimensional grid previously created */
void free_grid(int **grid, int height);

/* argstostr - Concatenates all the arguments of your program. */
char *argstostr(int ac, char **av);

#endif
