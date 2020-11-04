#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginnig of a liked list.
 *
 *  Arguments:
 *    @head:   - Pointer to the head of the list.
 *      @n:    - Data added to the newly created node.
 *
 *    Return:  - Pointer to the new element pushed into
 *               the list or NULL if fails.
 *
 *    MACRO:   - NODE, sizeof(list_t).
 *
 * |-------- Written by Diego Lopez, November 3rd 2020. --------|
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(NODE));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
