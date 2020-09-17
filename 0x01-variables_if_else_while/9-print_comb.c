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

while (num <= 57)
{
putchar(num);
if (num == 57)
{
putchar('\n');
break;
}

putchar(',');
putchar(' ');
num++;
}

return (0);
}
