#include "lists.h"

/**
 * add_dnodeint - Adds a node to the beginning of a dlistint
 *
 * @head: A pointer to the first node of a doubly linked list
 * @n: Int data to be added to new node
 *
 * Return: The address of the new element [SUCCESS], or NULL [FAIL]
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;
	dlistint_t *next = NULL;
	int toggle = 0;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	if (*head == NULL)
	{
		toggle = 1;
	}

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	newnode->prev = NULL;

	if (toggle == 0)
	{
		next = newnode->next;
		next->prev = newnode;
	}

	return (newnode);
}
