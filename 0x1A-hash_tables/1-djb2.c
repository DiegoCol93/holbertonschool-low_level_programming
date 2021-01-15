#include "hash_tables.h"
/**
 * hash_djb2   - djb2 hashing algorithm.
 *
 *  Arguments:
 *    @str:    - Target string to calculate hash from.
 *
 *    Return:  - Corresponding, hash value.
 *       _____   __  ______  ______  ______
 *      /\  __-./\ \/\  ___\/\  ___\/\  __ \
 *      \ \ \/\ \ \ \ \  __\\ \ \__ \ \ \/\ \
 *       \ \____-\ \_\ \_____\ \_____\ \_____\
 *        \/____/ \/_/\/_____/\/_____/\/_____/
 *       __      ______  ______  ______  ______
 *      /\ \    /\  __ \/\  == \/\  ___\/\___  \
 *      \ \ \___\ \ \/\ \ \  _-/\ \  __\\/_/  /__
 *       \ \_____\ \_____\ \_\   \ \_____\/\_____\
 *        \/_____/\/_____/\/_/    \/_____/\/_____/
 *                                      Jan - 2021
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
