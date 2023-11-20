#include "lists.h"

/**
 * free_dlistint - Free's a doubly linked list
 *
 * @head: The head pointer of the list
 *
 * Return - VOID
 */

void free_dlistint(dlistint_t *head)
{
	if (!head)
	{
		return;
	}

	if (!head->next)
	{
		head->prev = NULL;
		head->next = NULL;
		free(head);
		return;
	}
	free_dlistint(head->next);
	free(head);
	return;
}
