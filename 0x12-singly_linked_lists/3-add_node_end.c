#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 *
 * @head: Pointer to head of target list.
 * @str: String to add to the newly created node.
 *
 * Return: Pointer to head of modified list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *anew_node;
	list_t *last_node;

	for (len = 0; str[len]; len++)
	{}
	anew_node = malloc(NODE);
	if (!anew_node)
		return (NULL);
	anew_node->str = strdup(str);
	anew_node->len = len;
	anew_node->next = NULL;
	last_node = *head;
	if (*head)
	{
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = anew_node;
	}
	else
		*head = anew_node;
	return (*head);
}
