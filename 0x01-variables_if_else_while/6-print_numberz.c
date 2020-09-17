#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints numbers 0 to 9 using putchar.
 *
 * Return: 0 Always, on completion.
 */
int main(void)
{
int num = 48;

while (num <= 57)
{
putchar(num);
num++;
if (num > 57)
{
putchar('\n');
}
}

return (0);
}
