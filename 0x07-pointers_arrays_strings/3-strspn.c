#include "holberton.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Target string.
 * @accept: Prefixed string to search for.
 *
 * Return: n, Number of bytes from accept showing on s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int len_S = 0; /* <<- - - - Declaring counter for lenght of string s. */
	int len_Ac = 0; /* <<- Declaring counter for lenght of string accept. */
	int comp = 0; /* <<- - - - - - - - - - -Declaring comparison counter. */
	unsigned int times = 0; /* <<- - - Declaring counter for times found. */

	for (; accept[len_Ac] != 0; len_Ac++)
	{/* ^^ - - - - - - - - - - - - - - - - - - -Calculates prefix lenght. */
	}
	while (s[len_S] != 0) /* <<- - - -Runs through string up to a space. */
	{
		comp = 0; /* <<- - - - - - - - - - Resets comparison counter. */
		while (comp <= len_Ac) /* <<- - - - - - - - - Comparison loop. */
		{
			if (s[len_S] == accept[comp]) /* Comparing statement. */
			{
				times++; /* <<- - - Times character appeared. */
				break; /* <<- - - Jumps to not repeat a char. */
			}
			comp++; /* <<- - - - - - - -Comparison plus one step. */
		}
		len_S++; /* <<- - - - - - - - - - Run to next step on string. */
	}
	return (times); /* <<- - - Return times characters appeared b4 space. */
}
