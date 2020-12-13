#include "lists.h"
/**
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *previous = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return(NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if(head)
	{
		if (!*head)
		{
			*head = new_node;
			return (*head);
		}
		previous = *head;
		while (previous && previous->next)
			previous = previous->next;
		previous->next = new_node;
		new_node->prev = previous;
	}
	return(new_node);
}
