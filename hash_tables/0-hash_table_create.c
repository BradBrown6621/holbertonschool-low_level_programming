#include "hash_tables.h"

/**
 * hash_table_t - Generates a new, blank hash table
 *
 * @size: The size of the table
 *
 * Return: The pointer to the hash table [SUCCESS], NULL [FAIL]
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;

	hashtable = malloc(sizeof(hash_table_t));

	if (hashtable == NULL)
	{
		return NULL;
	}

	hashtable->size = size;
	hashtable->array = malloc(size * sizeof(hash_node_t*));

	if (hashtable->array == NULL)
	{
		free(hashtable);
		return NULL;
	}

	memset(hashtable->array, 0, size * sizeof(hash_node_t*));

	return (hashtable);
}
