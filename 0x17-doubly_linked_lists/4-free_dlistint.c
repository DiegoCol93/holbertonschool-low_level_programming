#include "lists.h"
/**
 * free_dlistint - Frees the memory of a doubly
 *                 linked list.
 *
 *   Argument:
 *     @head:    - Pointer to head of list.
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
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	if (head)
	{
		temp = head;
		while (temp && temp->next)
		{
			temp = temp->next;
			free(temp->prev);
		}
		free(temp);
	}
}
