#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of linked list
 * @idx: index of the list where the new node should be added
 * @n: integer
 *
 * Return: Address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *node, *nxtnode;
	unsigned int count;

	if (*head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	node = *head;
	nxtnode = *head;
	new->n = n;
	new->next = NULL;
	count = 0;
	if (idx == 0)
		new->next = node;
		*head = new;
		return (new);
	while (node != NULL)
	{
		if (count == idx)
		{
			new->next = node;
			nxtnode->next = new;
			return (new);
		}
		else
		{
			nxtnode = node;
			node = node->next;
			count++;
		}
	}
	if (count == idx)
	{
		nxtnode->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
