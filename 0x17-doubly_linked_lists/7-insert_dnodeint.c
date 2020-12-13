#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a node a given position on a doubly
 *                            linked list.
 *       Arguments:
 *           @h:            - Pointer to head of linked list.
 *          @idx:           - Index of new node.
 *           @n:            - Data (n) for new node.
 *
 *        Return:           - Pointer to newly created node, or
 *                            NULL if failed to create.
 *
 *               _____   __  ______  ______  ______
 *              /\  __-./\ \/\  ___\/\  ___\/\  __ \
 *              \ \ \/\ \ \ \ \  __\\ \ \__ \ \ \/\ \
 *               \ \____-\ \_\ \_____\ \_____\ \_____\
 *                \/____/ \/_/\/_____/\/_____/\/_____/
 *               __      ______  ______  ______  ______
 *              /\ \    /\  __ \/\  == \/\  ___\/\___  \
 *              \ \ \___\ \ \/\ \ \  _-/\ \  __\\/_/  /__
 *               \ \_____\ \_____\ \_\   \ \_____\/\_____\
 *                \/_____/\/_____/\/_/    \/_____/\/_____/
 *
 *                               Dec-2020
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *current = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return(NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (h)
	{
		if (!*h)
		{
			*h = new_node;
			return (*h);
		}
		current = *h;
		if (idx == 0)
		{
			new_node->next = *h;
			*h = new_node;
			return(new_node);
		}
		for(; idx > 0; idx--)
		{
			current = current->next;
			if (!current->next)
				return(add_dnodeint_end(h, n));
		}
		if (!current)
			return(NULL);
		new_node->next = current;
		if (current->prev)
		{
			current = current->prev;
			current->next = new_node;
		}
		current->prev = new_node;
	}
	return(new_node);
}
