#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns number of elements in linked list
 * @h: head of linked list
 *
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t num;

	for (num = 0; h != NULL; num++)
	{
		h = h->next;
	}

	return (num);
}
