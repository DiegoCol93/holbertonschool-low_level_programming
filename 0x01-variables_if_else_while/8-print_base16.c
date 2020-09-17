#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all Hex numbers.
 *
 * Return: 0 Always, on completion.
 */
int main(void)
{
char ch = '0';

while (ch <= '9')
{
putchar(ch);
ch++;

if (ch > '9')
{
ch = 'a';
while (ch <= 'f')
{
putchar(ch);
ch++;

if (ch > 'f')
{
putchar('\n');
}
}

}
}

return (0);
}
