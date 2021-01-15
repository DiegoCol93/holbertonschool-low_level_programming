#ifndef __FILE___H_
#define __FILE___H_
#include <stdlib.h>
#include <string.h>

/*---------------------------------------------------------------------------*/
/*- - - - - - - - - - - - - - Given Structures. - - - - - - - - - - - - - - -*/
/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

/* Structure for a linked list of chained hash nodes. - - - - - - - - - - -*/
/**
 * struct hash_node_s - Node of a hash table
 *
 *     Arguments:
 *       @key:        - The key, string; The key is unique in the HashTable
 *      @value:       - The value corresponding to a key
 *       @next:       - A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/* Structure for a hash table. - - - - - - - - - - - - - - - - - - - - - -*/
/**
 * struct hash_table_s - Hash table data structure
 *
 *     Arguments:
 *       @size:        - The size of the array
 *       @array:       - An array of size @size
 *
 *  Each cell of this array is a pointer to the first node of a linked list,
 *  because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/*---------------------------------------------------------------------------*/
/*- - - - - - - - - - - - - - Function prototypes. - - - - - - - - - - - - - */
/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

/* 0. hash_table_create - Creates a hash table. */
hash_table_t *hash_table_create(unsigned long int size);

/* 1. hash_djb2 - djb2 hashing algorithm. */
unsigned long int hash_djb2(const unsigned char *str);

/* 2. key_index - Calculates the corresponding hash index. */
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/* 3. hash_table_set - Sets a key:value pair on the table. */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

/* 4. */
char *hash_table_get(const hash_table_t *ht, const char *key);

/* 5. */
void hash_table_print(const hash_table_t *ht);

/* 6. */
void hash_table_delete(hash_table_t *ht);


#endif /* __FILE___H_ end if file header. */
