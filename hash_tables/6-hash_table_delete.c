#include "hash_tables.h"

void node_delete(hash_node_t *node)
{
	if (node == NULL)
	{
		return;
	}
	node_delete(node->next);
	free(node);
}

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
	{
		return;
	}

	for (i = 0; i != ht->size; i++)
	{
		node_delete(ht->array[i]);
	}
	free(ht);
}
