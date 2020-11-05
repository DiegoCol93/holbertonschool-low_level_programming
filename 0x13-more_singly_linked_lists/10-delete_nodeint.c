#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes a node at a given position.
 *
 *  Arguments:
 *    @head:   -     -     - Pointer to target linked list.
 *   @index:   -     -     - Index to the target node to delete.
 *
 *    Return:  -     -     - Pointer to newly added node.
 *
 * |------- Written by Diego Lopez, November 3rd 2020. --------|
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pre, *tmp;
	unsigned int i = 1;

	if (*head)
	{
		pre = *head;
		if (index > 0)
		{
			while (i <= index - 1 && pre)
			{
				pre = pre->next;
				i++;
				if (!pre)
					return (-1);
			}
			tmp = pre->next;
			pre->next = tmp->next;
			free(tmp);
			return (1);
		}
		else
		{
			*head = pre->next;
			free(pre);
			return (1);
		}
	}
	return (-1);
}
