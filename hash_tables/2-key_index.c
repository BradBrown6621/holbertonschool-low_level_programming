#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in a hash table
 *
 * @key: String to be generated into a hash value
 * @size: The size of the array of the hash table
 *
 * Return: Index where the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
