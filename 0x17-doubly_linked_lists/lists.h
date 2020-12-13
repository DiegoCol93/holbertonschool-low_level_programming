#ifndef __FILE___H_
#define __FILE___H_
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* 0. print_dlistint - Prints all the elements of a doubly linked list. */
size_t print_dlistint(const dlistint_t *h);

/* 1. dlistint_len - Returns the number of nodes. */
size_t dlistint_len(const dlistint_t *h);

/* 2. add_dnodeint - Pushes a node on a doubly linked list. */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/* 3. add_dnodeint_end - Creates a node at the end of a doubly linked list. */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/* 4. free_dlistint - Frees a doubly linked list. */
void free_dlistint(dlistint_t *head);

/* 5. get_dnodeint_at_index - Returns the Nth node from a doubly linked list. */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/* 6. sum_dlistint - Returns sum of all data(n) from a doubly linked list. */
int sum_dlistint(dlistint_t *head);

/* 7. insert_dnodeint_at_index - Inserts a node on a doubly linked list. */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/* 8. insert_dnodeint_at_index - Deletes a node on a doubly linked list. */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
