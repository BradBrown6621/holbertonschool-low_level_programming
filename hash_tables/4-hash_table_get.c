#include "hash_tables.h"

/**
 * hash_table_get - Retrieves value associated with key
 *
 * @ht: Hash table to be searched
 * @key: Key used for lookup
 *
 * Return: value of the key/value pair
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);

		temp = temp->next;
	}

	return (NULL);

}
