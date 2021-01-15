#include "hash_tables.h"
/**
 * hash_table_get - Gets the value from the key in the dictionary.
 *
 *   Arguments:
 *      @ht:      - Pointer to the hash table.
 *     @key:      - Pointer to string of the key.
 *
 *    Return:     - The pointer to the string of the corresponding
 *                   value or NULL if no key exist or no key is
 *		     given or no hash table exists.
 *              _____   __  ______  ______  ______
 *             /\  __-./\ \/\  ___\/\  ___\/\  __ \
 *             \ \ \/\ \ \ \ \  __\\ \ \__ \ \ \/\ \
 *              \ \____-\ \_\ \_____\ \_____\ \_____\
 *               \/____/ \/_/\/_____/\/_____/\/_____/
 *              __      ______  ______  ______  ______
 *             /\ \    /\  __ \/\  == \/\  ___\/\___  \
 *             \ \ \___\ \ \/\ \ \  _-/\ \  __\\/_/  /__
 *              \ \_____\ \_____\ \_\   \ \_____\/\_____\
 *               \/_____/\/_____/\/_/    \/_____/\/_____/
 *                                          Jan - 2021
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
				return (tmp->value);
			tmp = tmp->next;
		}
	}
	return (NULL);
}
