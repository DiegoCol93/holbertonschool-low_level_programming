#include "lists.h"
/**
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *get_node = NULL;

	if (head)
	{
		get_node = *head;
		for (; index > 0; index--)
		{
			if (!get_node)
				return(NULL);
			get_node = get_node->next;
		}
	}
	return(get_node);
}
