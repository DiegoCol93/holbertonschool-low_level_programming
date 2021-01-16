#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 *
 *    Arguments:
 *      @size:      - Size of the hash table to create.
 *
 *     Return:      - The newly created table, or NULL
 *                    if not able to allocate.
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
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int index = 0;

	/* Allocates table struct. */
	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	/* Sets size of the table. */
	table->size = size;

	/* Allocates the number of head pointers. */
	table->array = malloc(size * sizeof(hash_node_t *));
	if (!table->array)
		return (NULL);

	/* Initialize to NULL each cell. */
	for (; index < size; index++)
		table->array[index] = NULL;

	return (table);
}
