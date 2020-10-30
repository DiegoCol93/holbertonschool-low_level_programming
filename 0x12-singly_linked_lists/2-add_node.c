#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list.
 *
 * @head: Target list, poiter to the head.
 * @str: String to add to the new node.
 *
 * Return: Pointer to the new head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len;

	new_node = malloc(NODE);
	if (!new_node)
		return (NULL);
	for (len = 0; str[len]; len++)
	{}
	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
