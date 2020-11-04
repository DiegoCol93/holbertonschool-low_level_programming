#include "lists.h"
/**
 * listint_len - Returns the number of elements in a linked list.
 *
 *  Arguments:
 *     @h:     - Pointer to the head of the list.
 *
 *   Return:   - Number of nodes on the list.
 *
 * |------- Written by Diego Lopez, November 3rd 2020. -------|
 */
size_t listint_len(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
