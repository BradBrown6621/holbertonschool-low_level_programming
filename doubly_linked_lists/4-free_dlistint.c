#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 *
 * @head: A pointer to the first node in the list
 *
 * Return: NOTHING!!!
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *temp;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
