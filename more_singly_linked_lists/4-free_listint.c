#include "lists.h"

/**
 * free_listint - Calls free_helper
 *
 * @head: Start of list to free
 *
 * Return: NOTHING!!!
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	if (head == NULL)
	{
		return;
	}

	next = head->next;
	free(head->n);
	free(head);

	free_list(next);
}
