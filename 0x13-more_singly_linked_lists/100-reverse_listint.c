#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list
 * @head: head of linked list
 *
 * Return: first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node, *next, *prev;

	node = *head;
	while (node != NULL)
	{
		next = node->next;
		node->next = prev;
		prev = node;
		node = next;
	}
	node = prev;
	return (node);
}
