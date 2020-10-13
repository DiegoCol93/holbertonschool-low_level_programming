#include "holberton.h"
/**
 * _strdup - Returns a pointer to a new copy of the string str.
 *
 * @str: Source string.
 *
 * Return: Pointer cpy to new string.
 */
char *_strdup(char *str)
{
	unsigned int i, lenght;
	char *cpy;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
	}
		lenght = i + 1;

	cpy = malloc(sizeof(char) * lenght);

		if (cpy != NULL)
			for (i = 0; i <= lenght - 1; i++)
				cpy[i] = str[i];
		else
			return (NULL);

	return (cpy);
}
