#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Creates and tells sign of a random number
 *
 * Return: 0 Always (Succes)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
if (n < 0)
{
printf("%d is is negative\n", n);
}
return (0);
}
