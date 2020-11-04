#include "lists.h"
/**
 * free_listint2 - Frees a linked list, and sets the head to NULL.
 *
 *    Recieves:
 *     @head:    - Pointer to head of target list.
 *
 * |--------- Written by Diego Lopez, November 3rd 2020. ---------|
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head)
	{
		while (*head)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
		}
	}
	head = NULL;
}
