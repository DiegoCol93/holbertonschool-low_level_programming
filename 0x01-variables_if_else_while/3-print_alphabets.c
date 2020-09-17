#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints lower and upper case alphabet
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
}

ch = 'A';

while (ch <= 'Z')
{
putchar(ch);
ch++;

if (ch > 'Z')
{
putchar('\n');
}

}

return (0);
}
