#include "lists.h"
/**
 * list_len - Prints all the elements of a list_t list.
 *
 * @h: Pointer to head of the list.
 *
 * Return: Number of nodes printed.
 */
size_t list_len(const list_t *h)
{
	unsigned int node = 0;

	if (h)
	{
		while (h)
		{
			h = h->next;
			node++;
		}
		return (node);
	}
	return (node);
}
