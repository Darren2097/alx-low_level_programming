#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: head of linked list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes;

	if (head == NULL)
		exit(98);

	nodes = 0;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		nodes++;
	}

	return (nodes);
}
