#include "lists.h"

/**
 * add_dnodeint_end - Adds a node to the end of a dlistint_t list
 *
 * @head: A pointer to the first entry in the list
 * @n: Data to be stored in the new node
 *
 * Return: Address of new element [SUCCESS], or NULL [FAIL]
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;
	dlistint_t *current = NULL;

	newnode = malloc(sizeof(dlistint_t));
	
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	if (*head == NULL)
	{
		newnode-> = n;
		newnode->next = NULL;
		*head = newnode;
		newnode->prev = NULL;

		return (newnode);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	newnode->n = n;
	current->next = newnode;
	newnode->prev = current;
	newnode->next = NULL;

	return (newnode);
}
