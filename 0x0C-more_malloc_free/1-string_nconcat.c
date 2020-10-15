#include "holberton.h"
/**
 * string_nconcat - Concatenates two strings up to n bytes of s2.
 *
 *      @s1:      - String 1.
 *      @s2:      - String 2.
 *      @n:       - Amount of bytes to concatenate.
 *
 *   Return:  *s  - pointer to new string, NULL if fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ls1 = 0, ls2 = 0, i;
	char *s;

	if (s1 == NULL) /*             if string 1 == NULL, set to empty.     */
		s1 = "";
	if (s2 == NULL) /*             if string 2 == NULL, set to empty.     */
		s2 = "";
	while (s1[ls1])
		(ls1++); /*                Counts lenght of string s1.        */
	while (s2[ls2])
		(ls2++); /*                Counts lenght of string s2.        */
	if (n >= ls2)
	{
		n = ls2;
	}
	s = malloc(ls1 + n + 1);
	if (s) /*                             If string s is not NULL.        */
	{
		for (i = 0; i <= (ls1 + n); i++)
		{ /*                        For while i < total lenght.       */
			if (i >= ls1) /*  If i more than lenght of string 1.  */
				s[i] = s2[i - ls1]; /*  Set string 2.         */
			else
				s[i] = s1[i]; /* Else, Initializes array.     */
		}
	s[i] = '\0'; /*                    Set NUL character at the end.      */
	}
	return (s); /*                    Returns new concatenated string.    */
}
