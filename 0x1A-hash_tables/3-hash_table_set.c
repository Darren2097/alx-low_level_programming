#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table that needs to be updated
 * @key: the key
 * @value: value associated with the key
 *
 * Return: 1 if successful, otherwise 0 if it failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node, *head;

	if (ht == NULL)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = node;
	}
	else
	{
		head = ht->array[idx];
		if (strcmp(key, head->key) == 0)
		{
			head->value = strdup(value);
		}
		else
		{
			node->next = head;
			ht->array[idx] = node;
		}
	}
	return (1);
}
