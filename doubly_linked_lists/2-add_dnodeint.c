#include "lists.h"
/**
 * add_dnodeint - Adds a new node to the head of a list
 *
 * @head: Head node of the list
 * @n: Data to be stored in node
 *
 * Return: Address of new element in the list (or NULL on failure)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

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
		node->next = *head;
		(*head)->prev = node;
	}
	*head = node;
	return (node);
}
