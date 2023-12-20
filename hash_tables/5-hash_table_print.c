#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	unsigned long int numElems = ht->size;

	printf("{");

	for (i = 0; i != ht->size; i++)
	{
		if (ht->array[i] == NULL)
		{
			numElems--;
		}
	}

	for (i = 0; i != ht->size; i++)
	{
		if (ht->array[i] == NULL)
		{
			continue;
		}
		numElems--;
		printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		if (numElems >= 1)
		{
			printf(", ");
		}
	}

	printf("}\n");
}
