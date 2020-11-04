#include "lists.h"
/**
 * free_listint - Frees a linked list.
 *
 *  Recieves:
 *   @head:     - Pointer to head of target list.
 *
 * |- Written by Diego Lopez, November 3rd 2020. -|
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head)
	{
		while (head)
		{
			tmp = head;
			head = head->next;
			free(tmp);
		}
	}
}
