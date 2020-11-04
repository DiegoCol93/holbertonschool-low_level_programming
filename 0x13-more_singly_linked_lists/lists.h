#ifndef __FILE___H_
#define __FILE___H_
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* MACRO for sizeof(listint_t) */
#define NODE sizeof(listint_t)

/* 0. Prints all the elements of a listint_t list. */
size_t print_listint(const listint_t *h);

/* 1. Returns the number of elements in a linked listint_t list. */
size_t listint_len(const listint_t *h);

/* 2. Adds a new node at the beginning of a listint_t list. */
listint_t *add_nodeint(listint_t **head, const int n);

/* 3. Adds a new node at the end of a listint_t list. */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* 4. Frees a listint_t list. */
void free_listint(listint_t *head);

/* 5. Frees a listint_t list. */
void free_listint2(listint_t **head);

/* 6. Deletes the head node of linked list, returns the head node's data. */
int pop_listint(listint_t **head);

/* 7. Returns the nth node of a listint_t linked list. */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* 8. Returns the sum of all the data (n) of a listint_t linked list. */
int sum_listint(listint_t *head);

/* 9. Inserts a new node at a given position. */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/* 10. Deletes the node at index index of a listint_t linked list. */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/* 11. Reverses a listint_t linked list. */
listint_t *reverse_listint(listint_t **head);

/* 12. Prints a listint_t linked list. */
size_t print_listint_safe(const listint_t *head);

/* 13. Frees a listint_t list. */
size_t free_listint_safe(listint_t **h);

/* 14. Finds the loop in a linked list. */
listint_t *find_listint_loop(listint_t *head);

#endif /* __FILE___H_ end if file header. */
