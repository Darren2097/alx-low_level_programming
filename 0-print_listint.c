#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of list listint
 * @h: head of linked list
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
