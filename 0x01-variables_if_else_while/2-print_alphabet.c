#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabet with putchar
 *
 * Return: 0 Always, on completion.
 */
int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
putchar(ch);
ch++;

if (ch > 'z')
{
putchar('\n');
}

}

return (0);
}
