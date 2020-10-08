#include "holberton.h"
/**
 * _pali - Checks for palindrome.
 * @len: Lenght of string.
 * @s1: Target string.
 * @i: 0, Init of string.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int _pali(int len, char *s1, int i)
{
	if (s1[i] == s1[len - 1])
	{
		_pali((len - 1), s1, i + 1);
		return (1);
	}
	else if (s1[i] != s1[len])
	{
	return (0);
	}
	return (1);
}
/**
 * _lenght - Calculates lenght of a string, recursively.
 * @len: 0, Init value.
 * @s1: Target string.
 *
 * Return: Lenght of string.
 */
int _lenght(int len, char *s1)
{
	if (s1[len] != '\0')
	{
		return (_lenght(len + 1, s1));
	}
	return (len);
}
/**
 * is_palindrome - Checks if a string is palindrome or not.
 * @s: Target string.
 *
 * Return: 1 if it's palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int l = _lenght(0, s);

	return (_pali(l, s, 0));
}
