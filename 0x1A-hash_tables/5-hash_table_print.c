#include "hash_tables.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *node;
	bool first_item = true;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		while (node != NULL)
		{
			if (first_item == true)
			{
				printf("'%s': '%s'", node->key, node->value);
				first_item = false;
			}
			else
			{
				printf(", '%s': '%s'", node->key, node->value);
			}
			node = node->next;
		}
	}
	printf("}\n");
}
