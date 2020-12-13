#include "lists.h"
/**
 * print_dlistint - Prints a doubly linked list.
 *
 *   Arguments:
 *      @h:       - Pointer to head of the list.
 *
 *    Return:     - Number of nodes printed.
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
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = NULL;
	unsigned int nodes = 0;

	if (h)
	{
		current = h;
		while (current)
		{
			printf("%d\n", current->n);
			current = current->next;
			nodes++;
		}
	}
	return (nodes);
}
