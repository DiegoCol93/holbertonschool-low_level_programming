#include "holberton.h"
/**
 * rot13 - Encodes string into rot13
 * @s: Target String.
 *
 * Return: Encoded string.
 */
char *rot13(char *s)
{
	int i, j;
	char chs[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char rot13[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; chs[j] != '\0'; j++)
		{
			if (s[i] == chs[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}
