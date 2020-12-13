#include "lists.h"
/**
 * add_dnodeint - Pushes a node into a doubly linked list.
 *
 *   Arguments:
 *     @head:   - Pointer to the head of the list.
 *       @n:    - Integer data to add to new node.
 *
 *     Return:  - Pointer to newly created node or
 *                NULL if failed to create.
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
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *current = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (head)
	{
		if (*head)
		{
			current = *head;
			current->prev = new_node;
		}
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}
