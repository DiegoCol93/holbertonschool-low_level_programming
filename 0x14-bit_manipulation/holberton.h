#ifndef __FILE___H_
#define __FILE___H_
#include <stdio.h>
/* Writes the character c to stdout. */
int _putchar(char c);

/* 0. Converts a binary number to an unsigned int.*/
unsigned int binary_to_uint(const char *b);

/* 1. Prints the binary form of a positive int number. */
void print_binary(unsigned long int n);

/* 2. Returns the value of a bit at a given index. */
int get_bit(unsigned long int n, unsigned int index);

/* 3. Sets the value of a bit to 1 at a given index. */
int set_bit(unsigned long int *n, unsigned int index);

/* 4. Sets the value of a bit to 0 at a given index. */
int clear_bit(unsigned long int *n, unsigned int index);

/* 5. Returns the number of bits to flip to reach a number. */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif /* End of if __FILE___H_ exists */
