#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints non repeating numbers from 000 to 999
 *
 * Return: 0 Always, on completion
 */
int main(void)
{
int num0 = 48;
int num1;
int num2;
while (num0 <= 57)
{
for (num1 = 48; num1 <= 57; num1++)
{
for (num2 = 48; num2 <= 57; num2++)
{
if (num0 < num1 && num1 < num2)
{
putchar(num0);
putchar(num1);
putchar(num2);
if (num0 != 55 || num1 != 56 || num2 != 57)
{
putchar(44);
putchar(32);
}
}
}
}
num0++;
}
putchar(10);
return (0);
}
