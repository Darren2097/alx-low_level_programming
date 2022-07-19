#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t list
 * @head: head of linked list
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if successful, else -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *temp;
	unsigned int count;

	if (head == NULL)
		return (-1);

	node = *head;
	temp = *head;
	count = 0;
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	while (node != NULL)
	{
		if (count == index)
		{
			temp = node;
			free (temp);
			return (1);
		}
		node->next = node;
		count++;
	}
	if (count == index)
	{
		node->next = NULL;
		free(node);
		return (1);
	}
	return (-1);
}
