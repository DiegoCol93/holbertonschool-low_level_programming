#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints numbers 0 to 9
 *
 * Return: 0 Always, on completion.
 */
int main(void)
{
int num = 0;

while (num <= 9)
{
printf("%d", num);
num++;
if (num > 9)
{
printf("\n");
}
}

return (0);
}
