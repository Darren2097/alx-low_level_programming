#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: head of linked list
 *
 * Return: size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t size;

	if (h == NULL)
		return (-1);

	temp = *h;
	size = 0;
	while (temp != NULL)
	{
		size++;
		temp = temp->next;
		free(*h);
		*h = temp;
	}

	*h = NULL;
	return (size);
}
