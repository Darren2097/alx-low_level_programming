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

	if (head == NULL || *head == NULL)
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
	while (node->next != NULL)
	{
		if (count == index)
		{
			temp->next = node->next;
			free(node);
			return (1);
		}
		temp = node;
		node = node->next;
		count++;
	}
	if (count == index)
	{
		temp->next = NULL;
		free(node);
		return (1);
	}
	return (-1);
}
