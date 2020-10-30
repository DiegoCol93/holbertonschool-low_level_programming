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
	{} /* Counts lenght of given string. */
	anew_node = malloc(NODE); /* Allocates node in memory */
	if (!anew_node) /* If no new node allocated. */
		return (NULL);
	anew_node->str = strdup(str); /* Duplicates given string into node. */
	anew_node->len = len; /* Sets number for len of str. */
	anew_node->next = NULL; /* Sets tail of new node. */
	last_node = *head; /* Sets aux pointer for running the list. */
	if (*head)
	{ /* If head exists, run through lenght of list. */
		while (last_node->next) /* Loop for moving. */
			last_node = last_node->next;
		last_node->next = anew_node; /* Sets tail of list to new node */
	}
	else /* Else, when head does not exist. */
		*head = anew_node; /* Set new node as the head. */
	return (*head); /* Return edited list. */
}
