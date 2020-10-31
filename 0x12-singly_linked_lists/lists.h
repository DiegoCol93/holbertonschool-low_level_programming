#ifndef __FILE___H_
#define __FILE___H_
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define NODE sizeof(list_t)

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* 0. print_list - Prints all the elements of a list_t list. */
size_t print_list(const list_t *h);

/* 1. list_len - Returns the number of elements in a linked list_t list. */
size_t list_len(const list_t *h);

/* 2. add_node - Adds a new node at the beginning of a list_t list. */
list_t *add_node(list_t **head, const char *str);

/* 3. Adds a new node at the end of a list_t list. */
list_t *add_node_end(list_t **head, const char *str);

/* 4. Frees a list_t list. */
void free_list(list_t *head);

/* 100. Prints a stirng before execution of main function. */
void pre_main_fun (void) __attribute__ ((constructor));

#endif /* __FILE___H_ end if file header. */
