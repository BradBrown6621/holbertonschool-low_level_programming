#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to a hash table
 *
 * @ht: Hash table to be altered
 * @key: A non-empty string
 * @value: Data associated with key
 *
 * Return: 1 [SUCCESS], 0 [FAIL]
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *valuedup = strdup(value);
	unsigned long int index;
	hash_node_t *newnode;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	newnode = malloc(sizeof(hash_node_t));

	if (newnode == NULL)
	{
		return (0);
	}

	newnode->key = strdup(key);
	newnode->value = valuedup;
	newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}
