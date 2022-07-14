#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: head of linked list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(head->str);
		free(head);
		head = temp;
	}
}
