#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints lowcase alphabet backwards
 *
 * Return: 0 Always, on completion.
 */
int main(void)
{
char ch = 'z';

while (ch >= 'a')
{
putchar(ch);
ch--;

if (ch < 'a')
{
putchar('\n');
}
}

return (0);
}
