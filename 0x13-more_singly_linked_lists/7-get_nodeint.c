#include "lists.h"

/**
 * get_nodeint_at_index - Gets the nth node of a listint_t linked list
 * @head: head of linked list
 * @index: index of the node, starting at 0
 *
 * Return: The nth node of the linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	node = head;
	count = 0;
	while (node != NULL)
	{
		if (count == index)
		{
			return (node);
		}
		else
		{
			node = node->next;
			count++;
		}
	}
	return (NULL);
}
