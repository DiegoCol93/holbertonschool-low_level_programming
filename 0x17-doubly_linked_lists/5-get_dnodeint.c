#include "lists.h"
/**
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *get_node = NULL;
	unsigned int i = 0;

	if (head)
	{
		get_node = head;
		for (i = 0; i < index; i++)
		{
			if (!get_node)
				return(NULL);
			get_node = get_node->next;
		}
	}
	return(get_node);
}
