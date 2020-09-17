#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints alphabet, except q and e
 *
 * Return: 0 Always, on completion.
 */
int main(void)
{
char ch = 'a';

while (ch <= 'z')
{

if (ch == 'e' || ch == 'q')
{
ch++;
}

putchar(ch);
ch++;

if (ch > 'z')
{
putchar('\n');
}
}

return (0);
}
