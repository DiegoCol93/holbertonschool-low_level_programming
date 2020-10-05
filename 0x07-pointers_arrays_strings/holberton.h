/* NULL definition. */
#define NUL '\0'

/* _putchar - Prints one character. */
int _putchar(char c);

/* 0. _memset - Fills memory with a constant byte. */
char *_memset(char *s, char b, unsigned int n);

/* 1. _memcpy - Copies memory area. */
char *_memcpy(char *dest, char *src, unsigned int n);

/* 2. _strchr - Locates a character in a string. */
char *_strchr(char *s, char c);

/* 3. _strspn - Gets the length of a prefix substring. */
unsigned int _strspn(char *s, char *accept);

/* 4. _strpbrk - Searches a string for any of a set of bytes */
char *_strpbrk(char *s, char *accept);

/* 5. _strstr - Locates a substring. */
char *_strstr(char *haystack, char *needle);

/* 6. print_chessboard - Prints the chessboard. */
void print_chessboard(char (*a)[8]);

/**
 * 7. print_diagsums - prints the sum of the two diagonals
 *                  of a square matrix of integers.
 */
void print_diagsums(int *a, int size);

/* 8. set_string - Sets the value of a pointer to a char. */
void set_string(char **s, char *to);
