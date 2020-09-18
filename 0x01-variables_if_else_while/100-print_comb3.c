#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints single digit numbers
 *
 * Return: 0 Always, on completion.
 */
int main(void)
{
int num = 48;
int num2;
while (num <= 57)
{
for (num2 = 48; num2 <= 57; num2++)
{
if (num < num2)
{
putchar(num);
putchar(num2);
if (num != 56 || num2 != 57)
{
putchar(44);
putchar(32);
}
}
}
num++;
}
putchar(10);
return (0);
}
