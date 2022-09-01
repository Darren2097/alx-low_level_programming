#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - gets the sum of all the data (n) of a dlistint_t linked list
 * @head: head of doubly linked list
 *
 * Return: The sum of all data in list or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node;

	if (head == NULL)
		return (0);

	node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
