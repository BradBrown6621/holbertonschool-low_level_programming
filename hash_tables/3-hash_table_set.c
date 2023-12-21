#include "hash_tables.h"

hash_node_t *traverse_for_key(hash_node_t *node, const char *key)
{
	if (node == NULL)
	{
		return (NULL);
	}
	if (strcmp(node->key, key) == 0)
	{
		return (node);
	}
	return (traverse_for_key(node->next, key));
}

int validate_params(hash_table_t *ht, const char *key, const char *value)
{
	if (!ht)
		return (0);

	if (!key || strcmp(key, "") == 0)
		return (0);

	if (!value || strcmp(value, "") == 0)
		return (0);

	return (1);
}

int add_node_to_ht(hash_table_t *ht, hash_node_t *node, unsigned long int index)
{
	if (ht->array[index] != NULL)
	{
		node->next = ht->array[index];
	}
	ht->array[index] = node;
	return (1);
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	unsigned long int size;
	char *key_cpy = NULL;
	char *value_cpy = NULL;
	hash_node_t *node = NULL;
	hash_node_t *targetNode = NULL;

	if (validate_params(ht, key, value) == 0)
	{
		return (0);
	}

	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	targetNode = traverse_for_key(ht->array[index], key);

	value_cpy = malloc(strlen(value + 1));
	if (!value_cpy)
		return (0);
	strcpy(value_cpy, value);

	if (ht->array[index] != NULL && targetNode != NULL)
	{
		free(targetNode->value);
		targetNode->value = value_cpy;
		return (1);
	}

	node = malloc(sizeof(hash_node_t));
	key_cpy = malloc(strlen(key) + 1);

	if (!node || !key_cpy)
		return (0);

	strcpy(key_cpy, key);

	node->key = key_cpy;
	node->value = value_cpy;
	node->next = NULL;

	return (add_node_to_ht(ht, node, index));
}
