#include "holberton.h"
/**
 * _strpbrk - Search a string for first appearance of any byte in accept.
 * @s: Target string.
 * @accept: String of bytes to look for.
 *
 * Return: ptr, Pointer to first appearance.
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr = NULL; /* <<- - - - - - - - - - - -Declaring NULL pointer. */
	int len_S = 0; /* <<- - - - - - -Declaring counter for string lenght. */
	int len_Ac = 0; /* <<- - - - - - Declaring counter for accept lenght. */

	while (s[len_S] != 0) /* <<- - - - - - - -  - -Runs through string s. */
	{
		len_Ac = 0; /* <<- - - - - -Resets counter for string accept. */

		while (accept[len_Ac] != 0) /* << Runs through string accept. */
		{
			if (s[len_S] == accept[len_Ac]) /* Compare for equal. */
			{
				ptr = &s[len_S]; /* <<-Set ptr to firt match. */
				return (ptr); /* <<- - - - Return ptr matched.*/
			}
			len_Ac++; /* <<- - - - - - - -Accept string nex step. */
		}
		len_S++; /* <<- - - - - - - - - - -Target string s next step. */
	}
	return ('\0'); /* <<- - - - - - - - - - - - - - - - - - -Return NULL. */
}
