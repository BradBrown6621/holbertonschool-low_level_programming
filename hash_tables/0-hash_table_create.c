#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table
 *
 * @size: The number of indexes for the table
 *
 * Return: New hash table (or NULL if malloc fails)
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));

	if (!table)
	{
		printf("failed to create table");
		return (NULL);
	}

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (!table->array)
	{
		printf("failed to create table->array");
		free(table);
		return (NULL);
	}

	return (table);
}
