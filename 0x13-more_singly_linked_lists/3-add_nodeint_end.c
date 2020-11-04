#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a liked list.
 *
 *    Receives:
 *     @head:      - Pointer to head of liked list.
 *       @n:       - Data added to the newly created node.
 *
 *     Return:     - Pointer to the new element added at the
 *                      end of the list or NULL if failed.
 *
 *     MACRO:      - NODE, sizeof(listint_t).
 *
 * |-------- Written by Diego Lopez, November 3rd 2020. --------|
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *new = NULL;

	last = *head;
	new = malloc(sizeof(NODE));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head)
	{
		while (last->next)
			last = last->next;
		last->next = new;
	}
	else
		*head = new;
	return (*head);
}
