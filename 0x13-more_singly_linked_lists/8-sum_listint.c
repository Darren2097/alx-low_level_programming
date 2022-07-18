#include "lists.h"

/**
 * sum_listint - Gets the sum of the data(n) of a listint_t list
 * @head: head of linked list
 *
 * Return: The sum of all the data of the linked list
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum;

	if (head == NULL)
		return (0);

	node = head;
	sum = 0;
	while (node != NULL)
	{
		sum = sum + node->n;
		node = node->next;
	}
	return (sum);
}
