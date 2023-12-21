#include "hash_tables.h"

int print_hash_nodes(hash_node_t *node)
{
	if (!node)
	{
		return (0);
	}
	printf("'%s': '%s'", node->key, node->value);
	print_hash_nodes(node->next);
	return (0);
}

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int notStart = 0;

	if (!ht)
	{
		return;
	}

	printf("{");

	for (i = 0; i != ht->size; i++)
	{
		if (ht->array[i] == NULL)
		{
			continue;
		}
		if (notStart)
		{
			printf(",");
		} else
		{
			notStart = 1;
		}
		print_hash_nodes(ht->array[i]);
	}

	printf("}\n");
}
