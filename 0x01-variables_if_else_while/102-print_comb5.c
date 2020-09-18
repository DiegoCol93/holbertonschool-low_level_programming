#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints 00 00 to 99 99 no repeating digits.
 *
 * Return: 0 Always, on completion.
 */
int main(void)
{
int num0 = 48;
int num1;
int num2;
int num3;

while (num0 <= 57)
{
for (num1 = 48; num1 <= 57; num1++)
{
for (num2 = 48; num2 <= 57; num2++)
{
for (num3 = 48; num3 <= 57; num3++)
{
if (num1 < num3 && num0 <= num2)
{
putchar(num0);
putchar(num1);
putchar(32);
putchar(num2);
putchar(num3);
if (num0 != 54 || num1 != 55 || num2 != 56 || num3 != 57)
{
if ((num0 + num1 + num2 + num3) == 227)
{
putchar(10);
break;
}
putchar(44);
putchar(32);
}
}
}
}
}
num0++;
}
return (0);
}
