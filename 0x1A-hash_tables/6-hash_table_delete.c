#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *node, *next_node;

	if (ht ==  NULL)
		return;

	idx = 0;
	while (idx < ht->size)
	{
		node = ht->array[idx];
		while (node != NULL)
		{
			next_node = node->next;
			free(node->key);
			free(node->value);
			free(node);
			if (next_node != NULL)
			{
				node = next_node;
			}
			else
				break;
		}
		idx++;
	}
	free(ht->array);
	free(ht);
}
