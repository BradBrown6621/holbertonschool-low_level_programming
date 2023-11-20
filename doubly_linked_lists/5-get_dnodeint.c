#include "lists.h"

/**
 * get_dnodeint_at_index - Indexes a doubly linked list
 *
 * @head: Head of doubly linked list
 * @index: Index of list to return
 *
 * Return: The nth node of a doubly linked list (or NULL on failure)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;
	dlistint_t *node = head;

	for (n = 0; n != index; n++)
	{
		node = node->next;
	}
	return (node);
}
