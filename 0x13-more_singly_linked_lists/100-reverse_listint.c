#include "lists.h"
/**
 * reverse_listint - Reverses the contents of a linked list.
 *
 *  Arguments:
 *    @head:       - Pointer to head of target list.
 *
 *    Return:      - Pointer to head of reversed list.
 *
 * |----- Written by Diego Lopez, November 3rd 2020. -----|
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *current = NULL;
	listint_t *next = NULL;

	current = *head;
	next = *head;
	while (current)
	{
		next = next->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*head = previous;
	return (*head);
}
