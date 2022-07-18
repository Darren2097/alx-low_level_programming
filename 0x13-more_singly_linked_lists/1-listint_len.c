#include "lists.h"

/**
 * listint_len - Gets the number of elements in a linked listint_t list
 * @h: head of linked list
 *
 * Return: Number of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
