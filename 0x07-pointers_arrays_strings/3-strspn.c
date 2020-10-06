#include "holberton.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Target string.
 * @accept: Prefixed string to search for.
 *
 * Return: times, Number of bytes from accept showing on s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int times = 0;

	for ( ; s[i]; i++)
	{
		j = 0;
		for ( ; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				times++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (times);
}
