#include "lists.h"
/**
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = NULL;
	unsigned int nodes = 0;

	if (h)
	{
		current = h;
		while (current)
		{
			printf("%d\n", current->n);
			current = current->next;
			nodes++;
		}
	}
	return (nodes);
}
