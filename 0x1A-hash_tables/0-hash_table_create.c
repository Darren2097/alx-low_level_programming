#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - function that creates a hash table
 * @size: size of array
 *
 * Return: pointer to the newly created hash table, or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	if (size < 1)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;

	}

	return (table);
}
