#include "lists.h"
/**
 * dlistint_len - Returns number of nodes of a
 *                doubly linked list.
 *
 *   Arguments:
 *      @h:     - Pointer to head of the list.
 *
 *    Return:   - Number of nodes.
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
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = NULL;
	unsigned int nodes = 0;

	if (h)
	{
		current = h;
		while (current)
		{
			nodes++;
			current = current->next;
		}
	}
	return (nodes);
}
