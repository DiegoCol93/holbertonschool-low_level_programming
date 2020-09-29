#include "holberton.h"
/**
 * puts_half - Prints half of a string.
 * @str: Input String.
 */
void puts_half(char *str)
{
	int length_of_the_string = 0;
	int n;
	
	while (str[length_of_the_string] != 0)
	{
		length_of_the_string++;
	}
	if ((length_of_the_string % 2) != 0)
	{
		n = (length_of_the_string - 1) / 2;
	}
	else 
	{
		n = length_of_the_string / 2;
	}
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar(10);

}
