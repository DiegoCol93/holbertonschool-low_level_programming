#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at indicated position by idx.
 *
 *  Arguments:
 *    @head:   -     -     - Pointer to target linked list.
 *     @idx:   -     -     - Number to indicate the index of the new node.
 *      @n:    -     -     - Data to include in the new node.
 *
 *    Return:  -     -     - Pointer to newly added node.
 *
 *    MACRO:   -     -     - NODE, sizeof(listint_t).
 *
 * |------------- Written by Diego Lopez, November 3rd 2020. --------------|
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL;
	listint_t *pre = NULL;
	unsigned int i = 0;

	new = malloc(sizeof(NODE));
	if (!new)
		return (NULL);
	if (*head)
	{
		pre = *head;
		if (idx)
		{
			while (i < idx - 1)
			{
				pre = pre->next;
				i++;
				if (!pre)
					return (NULL);
			}
			new->n = n;
			new->next = pre->next;
			pre->next = new;
		}
		else
		{
			new->n = n;
			new->next = *head;
			pre->next = new;
		}
	}
	return (new);
}
