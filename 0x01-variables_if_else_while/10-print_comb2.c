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
int num2 = 48;
while (num <= 57)
{
for ( ; num2 <= 57; num2++)
{
putchar(num);
putchar(num2);
if (num2 == 57 && num == 57)
{
putchar('\n');
break;
}
putchar(',');
putchar(' ');
}
num2 = 48;
num++;
}
return (0);
}
