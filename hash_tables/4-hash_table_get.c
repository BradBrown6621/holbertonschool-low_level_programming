#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value = NULL;
	unsigned long int hashIndex;
	hash_node_t *node = NULL;

	if (!ht)
	{
		return (NULL);
	}

	hashIndex = (hash_djb2((const unsigned char *)key)) % ht->size;

	node = ht->array[hashIndex];

	if (node == NULL)
	{
		return (NULL);
	}

	while (node->next != NULL)
	{
		node = node->next;
	}
	
	value = node->value;
	return (value);
}
