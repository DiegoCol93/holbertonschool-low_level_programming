#include "holberton.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width:    - J coordinate.
 * @height:   - I coordinate.
 *
 * Return: pointer n, NULL if fails.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **n;
	if (width <= 0 || height <= 0)
		return (NULL);
	n = malloc(sizeof(int *) * height);
	for (j = 0; j <= height; j++) /*Allocates colums.*/
	{
		n[j] = malloc(sizeof(int) * width);
	}
	if (n != NULL)
	{
		for (i = 0; i <= height; i++)
		{
			for (j = 0; j <= width; j++)
			{
				n[i][j] = 0;
			}
		}
		return (n);
	}
	return (NULL);
}
