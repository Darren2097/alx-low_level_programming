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

	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		while (node != NULL)
		{
			next_node = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next_node;
			if (node == NULL)
				break;
		}
	}
	free(ht->array);
	free(ht);
}
