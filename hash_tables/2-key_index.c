#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in a hash table
 *
 * @key: Key to find index of
 * @size: Size of the hash table
 *
 * Return: Index where key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (!key)
	{
		return (0);
	}

	index = (hash_djb2(key)) % size;

	return (index);
}
