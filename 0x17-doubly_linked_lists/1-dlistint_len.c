#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head of doubly linked list
 *
 * Return: Number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_elements = 0;

	while (h)
	{
		num_elements++;
		h = h->next;
	}

	return (num_elements);
}
