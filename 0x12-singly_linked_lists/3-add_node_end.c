#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds new node at end of list list_t
 * @head: head of linked list
 * @str: string
 *
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	char *new_string;
	int new_length;
	
	temp = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str != NULL)
	{
		new_string = strdup(str);
		new_length = strlen(str);
	}
	else
	{
		free(new);
		return (NULL);
	}

	new->str = new_string;
	new->len = new_length;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
