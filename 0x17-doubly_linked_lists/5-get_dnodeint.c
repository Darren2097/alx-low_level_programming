#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - gets the nth node of a dlistint_t linked list
 * @head: head of doubly linked list
 * @index: index of the node, starting from 0
 *
 * Return: the nth node or NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;

	while (temp != NULL)
	{
		if (i == index)
			return (temp);

		temp = temp->next;
		i++;
	}
	return (NULL);
}
