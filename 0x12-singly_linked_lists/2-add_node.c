#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds new node to beginning of list list_t
 * @head: head of linked list
 * @str: string
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *new_string;
	int new_length;

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
		new_string = NULL;
		new_length = 0;
	}

	new->str = new_string;
	new->len = new_length;
	new->next = *head;
	*head = new;

	return (*head);
}
