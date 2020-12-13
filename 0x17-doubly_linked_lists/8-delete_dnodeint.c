#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node on a doubly linked
 *                            list.
 *        Arguments:
 *          @head:          - Pointer to head of linked list.
 *          @index:         - Position of node to remove.
 *
 *         Return:          -  1 if succesfully removed,
 *                            (-1) if failed.
 *             _____   __  ______  ______  ______
 *            /\  __-./\ \/\  ___\/\  ___\/\  __ \
 *            \ \ \/\ \ \ \ \  __\\ \ \__ \ \ \/\ \
 *             \ \____-\ \_\ \_____\ \_____\ \_____\
 *              \/____/ \/_/\/_____/\/_____/\/_____/
 *             __      ______  ______  ______  ______
 *            /\ \    /\  __ \/\  == \/\  ___\/\___  \
 *            \ \ \___\ \ \/\ \ \  _-/\ \  __\\/_/  /__
 *             \ \_____\ \_____\ \_\   \ \_____\/\_____\
 *              \/_____/\/_____/\/_/    \/_____/\/_____/
 *
 *                             Dec-2020
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *removed = NULL;

	if (head && *head)
	{
		removed = *head;
		if (index == 0)
		{
			*head = removed->next; /* Move head to new 1st node*/
			if (removed->next) /* If next node exist. */
				/* Set next node's previous to NULL */
				removed->next->prev = NULL;
		}
		else
		{
			for (; index > 0; index--) /* Move through list. */
			{
				removed = removed->next;
				if (!removed)
					return (-1);
			}
			if (removed->prev) /* If previous node exists. */
				removed->prev->next = removed->next;
			if (removed->next) /* If next node exists. */
				removed->next->prev = removed->prev;
		}
		if (removed)
			free(removed);
		return (1);
	}
	return (-1);
}
