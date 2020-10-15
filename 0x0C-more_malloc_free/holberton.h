#include <stdlib.h>
#include <limits.h>

/* Writes the character c to stdout. */
int _putchar(char c);

/* malloc_checked - Allocates a space in memory. */
void *malloc_checked(unsigned int b);

/* string_nconcat - Concatenates two strings up to n bytes of s2. */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* _calloc - Allocates an initialized space in memory. */
void *_calloc(unsigned int nmemb, unsigned int size);

/* array_range - Creates an array of integers. */
int *array_range(int min, int max);

/*  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
