#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all elements of a list_t list
 * @h: Head of linked lists
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; nodes != NULL; nodes++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (nodes);
}
