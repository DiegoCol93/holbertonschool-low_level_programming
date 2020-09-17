#include <stdio.h>
/**
 *main - Prints sizes of types
 *
 *Return: 0, on completion.
 */
int main(void)
{

char;
int;
long;
double;
float;

printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d bytes(s)\n", sizeof(int));
printf("Size of a long int: %d bytes(s)\n", sizeof(long));
printf("Size of a long long int: %d bytes(s)\n", sizeof(double));
printf("Size of a float: %d bytes(s)\n", sizeof(float));
return (0);
}
