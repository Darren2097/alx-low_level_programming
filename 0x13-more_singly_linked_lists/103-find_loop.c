#include "lists.h"

/**
 * find_listint_loop - Finds the loop in linked list
 * @head: head of linked list
 *
 * Return: Address of the node where the loop starts, or NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one, *two;

	one = head;
	two = head;

	while (head != NULL)
	{
		if (one != two)
		{
			one = one->next;
			two = two->next->next;
			head = head->next;
		}
		else
		{
			return (one);
		}
	}
	return (NULL);
}
