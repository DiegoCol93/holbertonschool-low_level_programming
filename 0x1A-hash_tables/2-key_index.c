#include "hash_tables.h"
/**
 * key_index  - Calculates the corresponding hash index, for the size of table.
 *
 * Arguments:
 *    @key:   - Pointer to key string to calculate the index from.
 *   @size:   - Size of the hash table.
 *
 *  Return:   - The corresponding index for the given key.
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
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
