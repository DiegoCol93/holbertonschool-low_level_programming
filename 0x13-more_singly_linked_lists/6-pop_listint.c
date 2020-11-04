#include "lists.h"
/**
 * pop_listint - Pops out the head node of a linked list.
 *
 *  Arguments:
 *    @head:   - Pointer to head of target list.
 *
 *   Return:   - Data n inside of the popped node or
 *               0 if linked list is empty.
 *
 * |---- Written by Diego Lopez, November 3rd 2020. ----|
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *tmp;

	if (head)
	{
		tmp = *head;
		n = tmp->n;
		*head = tmp->next;
		free(tmp);
	}
	return (n);
}
