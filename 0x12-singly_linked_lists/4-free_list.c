#include "lists.h"
/**
 * free_list - Frees a linked list type list_t.
 *
 * @head: Pointer to target list.
 */
void free_list(list_t *head)
{
	list_t *tmp_node;

	if (head)
	{
		while (head)
		{
			free(head->str);
			tmp_node = head;
			head = head->next;
			free(tmp_node);
		}
	}
}
