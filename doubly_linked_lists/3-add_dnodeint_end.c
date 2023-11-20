#include "lists.h"

/**
 * traverse_to_end - Returns a pointer to the end of a dlinked list
 *
 * @head: The head pointer of the list
 *
 * Return: The head pointer of the list
 */

dlistint_t **traverse_to_end(dlistint_t **head)
{
	while (*head)
	{
		if ((*head)->next)
		{
			head = &(*head)->next;
		}
		else
		{
			return (head);
		}
	}
	return (NULL);
}

/**
 * add_dnodeint_end - Adds a new node to the tail of a list
 *
 * @head: Head node of the list
 * @n: Data to be stored in node
 *
 * Return: Address of new element in the list (or NULL on failure)
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t **tail;

	node = malloc(sizeof(dlistint_t));

	if (!node)
	{
		return (NULL);
	}

	node->next = NULL;
	node->prev = NULL;
	node->n = n;

	if (*head)
	{
		tail = traverse_to_end(head);
		node->prev = *tail;
		(*tail)->next = node;
	}
	else
	{
		*head = node;
	}
	return (node);
}
