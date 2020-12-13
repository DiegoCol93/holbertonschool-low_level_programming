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
	dlistint_t *new = NULL, *past = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return(NULL);
	new->n = n;
	past = *h;
	if (idx > 0)
	{
		for (; idx > 1; idx--)
		{
			past = past->next;
			if (!past)
				return(NULL);
		}
		new->next = past->next;
		new->prev = past;
		past->next->prev = new;
		past->next = new;
	}
	else
	{
		new->next = past;
		past->prev = new;
		new->prev = NULL;
		*h = new;
	}
	return (new);
}
