#include "hash_tables.h"

void node_prepend(hash_node_t *node, hash_table_t *ht, unsigned long int index)
{
	if (ht->array[index] != NULL)
	{
		free(ht->array[index]);
	}
	ht->array[index] = node;
}

int validate_params(hash_table_t *ht, const char *key, const char *value)
{
	if (!ht)
		return (0);

	if (!key || strcmp(key, "") == 0)
		return (0);

	if(!value || strcmp(value, "") == 0)
		return (0);

	return (1);
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	unsigned long int size = ht->size;
	char *key_cpy = NULL;
	char *value_cpy = NULL;
	hash_node_t *node = NULL;

	validate_params(ht, key, value);

	node = malloc(sizeof(hash_node_t));
	key_cpy = malloc(strlen(key) + 1);
	value_cpy = malloc(strlen(value) + 1);

	if (!node || !key_cpy || !value_cpy)
		return (0);

	strcpy(key_cpy, key);
	strcpy(value_cpy, value);

	node->key = key_cpy;
	node->value = value_cpy;
	node->next = NULL;

	index = key_index((const unsigned char *)key, size);

	node_prepend(node, ht, index);

	return (1);
}
