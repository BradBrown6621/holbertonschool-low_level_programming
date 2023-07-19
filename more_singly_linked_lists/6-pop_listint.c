#include "lists.h"

/**
 * pop_listint - pops the first node of the linked list
 *
 * @head: pointer to the start of the linked list
 *
 * Return: the head list's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
