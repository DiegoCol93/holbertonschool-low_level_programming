#include "lists.h"
/**
 * get_nodeint_at_index - Returns pointer to an indicated node.
 *
 *  Arguments:
 *    @head:  -    -    - Pointer to target head of the linked list.
 *   @index:  -    -    - Position for the node to return.
 *
 *   Return:  -    -    - Pointer to the indicated node.
 *
 * |--------- Written by Diego Lopez, November 3rd 2020. ----------|
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head)
	{
		while (i < index)
		{
			head = head->next;
			i++;
			if (!head)
				return (NULL);
		}
	}
	return (head);
}
