#include "holberton.h"
/**
 * _strcmp - Compare two strings.
 * @s1: Target string.
 * @s2: String to compare to.
 *
 * Return: Substraction of s1 - s2 on the different index.
 */
int _strcmp(char *s1, char *s2)
{
	int Comp = 0;
	int Num;

	while (s1[Comp] == s2[Comp] && s1[Comp] != '\0')
	{
		Comp++;
	}
	if (s1[Comp] == '\0')
	{
		return (0);
	}
	Num = s1[Comp] - s2[Comp];
	return (Num);
}
