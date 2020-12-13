#include "lists.h"
/**
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = NULL;
	unsigned int nodes = 0;

	if (h)
	{
		current = h;
		while(current)
		{
			nodes++;
			current = current->next;
		}
	}
	return (nodes);
}
