#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: head of linked list
 *
 * Return: the head node's data(n) or 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	n = 0;
	if (*head == NULL)
		return (0);

	temp = *head;
	temp->next = *head;
	temp->n = n;
	free(temp);
	return (n);
}
