#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all data (n)
 *                from a doubly linked list.
 *   Argument:
 *     @head:   - Pointer to head of the list.
 *
 *    Return:   - Sum of all data found.
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
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = NULL;
	int data = 0;

	if (head)
	{
		node = head;
		while (node && node->next)
		{
			data += node->n;
			node = node->next;
		}
		data += node->n;
	}
	return(data);
}
