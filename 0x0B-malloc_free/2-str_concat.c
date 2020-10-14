#include "holberton.h"
/**
 * str_concat - Concatenates two strings.
 *
 * @s1: String 1.
 * @s2: String 2.
 *
 * Return: pointer s to a new string, NULL if fails.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, len3, i = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1]; len1++)
	{}
	for (len2 = 0; s2[len2]; len2++)
	{}
	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s != NULL)
	{
		for (len3 = 0; len3 < len1; len3++)
		{
			s[len3] = s1[len3];
		}
		for (; len3 <= (len1 + len2); len3++)
		{
			s[len3] = s2[i];
			i++;
		}
		return (s);
	}
	return (NULL);
}
