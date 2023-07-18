#include "lists.h"

/**
 * free_list - Calls free_helper
 *
 * @head: Start of list to free
 *
 * Return: NOTHING!!!
 */

void free_list(list_t *head)
{
	list_t *next;

	if (head == NULL)
	{
		return;
	}
	
	next = head->next;
	free(head->str);
	free(head);

	free_list(next);
	return;
}
