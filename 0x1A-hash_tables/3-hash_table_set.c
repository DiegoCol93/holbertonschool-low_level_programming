#include "hash_tables.h"
/**
 * hash_table_set - Sets a key:value pair on the table.
 *
 *    Arguments:
 *       @ht:     - Pointer to the hash table.
 *      @key:     - Pointer to key string.
 *    @value:     - Pointer to value string.
 *
 *     Return:    - 0 If succesful, 1 if
 *                  something ocurred.
 *         _____   __  ______  ______  ______
 *        /\  __-./\ \/\  ___\/\  ___\/\  __ \
 *        \ \ \/\ \ \ \ \  __\\ \ \__ \ \ \/\ \
 *         \ \____-\ \_\ \_____\ \_____\ \_____\
 *          \/____/ \/_/\/_____/\/_____/\/_____/
 *         __      ______  ______  ______  ______
 *        /\ \    /\  __ \/\  == \/\  ___\/\___  \
 *        \ \ \___\ \ \/\ \ \  _-/\ \  __\\/_/  /__
 *         \ \_____\ \_____\ \_\   \ \_____\/\_____\
 *          \/_____/\/_____/\/_/    \/_____/\/_____/
 *                                      Jan - 2021
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *tmp = NULL;
	unsigned long int index = 0;

	/* If empty or NULL key or NULL table. or NULL value */
	if (!strcmp(key, "") || !key || !ht || !value)
		return (1);
	/* Get index using hash function. */
	index = key_index((unsigned char *)key, ht->size);

	/* If there's a node in the current index. */
	if (ht->array[index])
	{       /* Set tmp pointer. */
		tmp = ht->array[index];
		while (tmp)
		{       /* While tmp exists. */
			if (strcmp(tmp->key, key) == 0) /* If == keys. */
			{
				/* Set new value. */
				tmp->value = strdup(value);
				return (1);
			}
			/* Move the tmp pointer. */
			tmp = tmp->next;
		}
	}
	/* Allocate memory for new new_node. */
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	/* Set the key for the new_node. */
	new_node->key = strdup(key);
	/* Set the value data for the new node. */
	new_node->value = strdup(value);
	/* Set the new_node' next to NULL. */
	new_node->next = ht->array[index];
	/* Set "head" pointer. */
	ht->array[index] = new_node;
	return (1);
}
