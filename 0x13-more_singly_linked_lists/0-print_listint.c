#include "lists.h"
/**
 * print_listint - Prints all the elements of a linked list.
 *
 *  Arguments:
 *     @h:       - Pointer to the head of the list.
 *
 *   Return:     - Number of nodes printed.
 *
 * |----- Written by Diego Lopez, November 3rd 2020. -----|
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			nodes++;
			h = h->next;
		}
	}
	return (nodes);
}
