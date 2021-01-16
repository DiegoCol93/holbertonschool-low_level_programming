#include "hash_tables.h"
/**
 * hash_table_print - Prints the contents of a hash table.
 *
 *     Argument:
 *        @ht:      - Pointer to the hash node table.
 *           _____   __  ______  ______  ______
 *          /\  __-./\ \/\  ___\/\  ___\/\  __ \
 *          \ \ \/\ \ \ \ \  __\\ \ \__ \ \ \/\ \
 *           \ \____-\ \_\ \_____\ \_____\ \_____\
 *            \/____/ \/_/\/_____/\/_____/\/_____/
 *           __      ______  ______  ______  ______
 *          /\ \    /\  __ \/\  == \/\  ___\/\___  \
 *          \ \ \___\ \ \/\ \ \  _-/\ \  __\\/_/  /__
 *           \ \_____\ \_____\ \_\   \ \_____\/\_____\
 *            \/_____/\/_____/\/_/    \/_____/\/_____/
 *                                       Jan - 2021
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int number_of_keys = 0;
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;

	if (!ht)
		printf("{}\n");
	else
	{
		number_of_keys = count_keys(ht);
		putchar('{');
		for (; index < ht->size; index++)
		{
			if (ht->array[index])
			{
				tmp = ht->array[index];
				while (tmp)
				{
					printf("'%s: %s'", tmp->key, tmp->value);
					if (number_of_keys > 1)
						printf(", ");
					number_of_keys -= 1;
					tmp = tmp->next;
				}
			}
		}
		putchar('}');
		putchar('\n');
	}
}

/**
 * count_keys - Counts the number of keys on a hash table.
 *
 *  Argument:
 *     @ht:   - Pointer to the hash node table.
 *
 *   Return:  - Number of keys present on the hash table.
 *           _____   __  ______  ______  ______
 *          /\  __-./\ \/\  ___\/\  ___\/\  __ \
 *          \ \ \/\ \ \ \ \  __\\ \ \__ \ \ \/\ \
 *           \ \____-\ \_\ \_____\ \_____\ \_____\
 *            \/____/ \/_/\/_____/\/_____/\/_____/
 *           __      ______  ______  ______  ______
 *          /\ \    /\  __ \/\  == \/\  ___\/\___  \
 *          \ \ \___\ \ \/\ \ \  _-/\ \  __\\/_/  /__
 *           \ \_____\ \_____\ \_\   \ \_____\/\_____\
 *            \/_____/\/_____/\/_/    \/_____/\/_____/
 *                                       Jan - 2021
 */
unsigned long int count_keys(const hash_table_t *ht)
{
	unsigned long int number = 0, index = 0;
	hash_node_t *tmp = NULL;

	tmp = ht->array[index];

	for (; index < ht->size; index++)
		if (ht->array[index])
		{
			tmp = ht->array[index];
			while (tmp)
			{
				number += 1;
				tmp = tmp->next;
			}
		}
	return (number);
}
