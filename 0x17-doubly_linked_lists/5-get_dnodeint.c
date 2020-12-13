#include "lists.h"
/**
 * get_dnodeint_at_index - Returns a node at the given index, from a
 *                         doubly linked list.
 *       Arguments:
 *         @head:        - Pointer to head of linked list.
 *        @index:        - Number of node to get.
 *
 *        Return:        - Node at given index, or
 *                         NULL if no node exists or failed to get it.
 *              _____   __  ______  ______  ______
 *             /\  __-./\ \/\  ___\/\  ___\/\  __ \
 *             \ \ \/\ \ \ \ \  __\\ \ \__ \ \ \/\ \
 *              \ \____-\ \_\ \_____\ \_____\ \_____\
 *               \/____/ \/_/\/_____/\/_____/\/_____/
 *              __      ______  ______  ______  ______
 *             /\ \    /\  __ \/\  == \/\  ___\/\___  \
 *             \ \ \___\ \ \/\ \ \  _-/\ \  __\\/_/  /__
 *              \ \_____\ \_____\ \_\   \ \_____\/\_____\
 *               \/_____/\/_____/\/_/    \/_____/\/_____/
 *
 *                              Dec-2020
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
				return (NULL);
			get_node = get_node->next;
		}
	}
	return (get_node);
}
