#include "lists.h"
/**
 * sum_listint - Returns the sum of all the data in the nodes of a linked list.
 *
 *  Arguments:
 *    @head:   - Pointer to the head of the target list.
 *
 *   Return:   - Value of sum.
 *
 * |-------------- Written by Diego Lopez, November 3rd 2020. ---------------|
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
