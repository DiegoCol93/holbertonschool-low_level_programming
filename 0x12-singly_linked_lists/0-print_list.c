#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list.
 *
 * @h: Pointer to head of the list.
 *
 * Return: Number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	unsigned int node = 0;

	if (h)
	{
		while (h)
		{
			if (!h->str)
			{
				printf("[0] (nil)\n");
				node++;
				h = h->next;
			}
			else
			{
				printf("[%d] %s\n", h->len, h->str);
				node++;
				h = h->next;
			}
		}
		return (node);
	}
	return (0);
}
