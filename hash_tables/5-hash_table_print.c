#include "hash_tables.h"

int print_hash_nodes(hash_node_t *node)
{
	static int notEnds = 0;
	if (!node)
	{
		notEnds = 0;
		return (0);
	}
	if (notEnds)
	{
		printf(", ");
	}
	printf("'%s': '%s'", node->key, node->value);
	notEnds = 1;
	print_hash_nodes(node->next);
	return (0);
}

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int notEnds = 0;

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
		if (notEnds)
		{
			printf(", ");
		}
		print_hash_nodes(ht->array[i]);
		notEnds = 1;
	}

	printf("}\n");
}
