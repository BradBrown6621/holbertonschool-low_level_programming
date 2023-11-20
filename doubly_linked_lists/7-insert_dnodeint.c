#include "lists.h"

/**
 * find_index - Finds node to insert node after
 *
 * @head: Head of doubly linked list
 * @idx: Index to insert into
 *
 * Return: Double pointer to node to be added after
 */

dlistint_t **find_index(dlistint_t **head, unsigned int idx)
{
	unsigned int i;

	for (i = 0; i < idx; i++)
	{
		if (!(*head))
		{
			return (NULL);
		}
		if ((*head)->next)
		{
			head = &(*head)->next;
		}
		else
		{
			return (NULL);
		}
	}
	return (head);
}

/**
 * insert_dnodeint_at_index - Inserts new node at index of dlinked list
 *
 * @h: Head of doubly linked list
 * @idx: Index to insert at
 * @n: Data to add to new node
 *
 * Return: The address of the new node (or NULL if failure)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t **head = h;
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));

	if (!node)
	{
		return (NULL);
	}

	head = find_index(head, idx);
	
	if (!head)
	{
		return (NULL);
	}
	node->next = NULL;
	node->prev = NULL;
	node->n = n;

	node->next = *head;
	node->prev = (*head)->prev;
	if ((*head)->prev)
	{
		(*head)->prev->next = node;
	}
	(*head)->prev = node;

	return (node);
}
