#include "lists.h"

/**
 * free_listint - Calls free_helper
 *
 * @head: Start of list to free
 *
 * Return: NOTHING!!!
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
