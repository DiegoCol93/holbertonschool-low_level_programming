#include "lists.h"
/**
 * add_dnodeint_end - Add a node at the end of a doubly
 *                    linked list.
 *   Arguments:
 *     @head:       - Pointer to the head of the list.
 *       @n:        - Integer data to add to new node.
 *
 *     Return:      - Pointer to newly created node or
 *                    NULL if failed to create.
 *      _____   __  ______  ______  ______
 *     /\  __-./\ \/\  ___\/\  ___\/\  __ \
 *     \ \ \/\ \ \ \ \  __\\ \ \__ \ \ \/\ \
 *      \ \____-\ \_\ \_____\ \_____\ \_____\
 *       \/____/ \/_/\/_____/\/_____/\/_____/
 *      __      ______  ______  ______  ______
 *     /\ \    /\  __ \/\  == \/\  ___\/\___  \
 *     \ \ \___\ \ \/\ \ \  _-/\ \  __\\/_/  /__
 *      \ \_____\ \_____\ \_\   \ \_____\/\_____\
 *       \/_____/\/_____/\/_/    \/_____/\/_____/
 *
 *                     Dec-2020
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *previous = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (head)
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
	return (new_node);
}
