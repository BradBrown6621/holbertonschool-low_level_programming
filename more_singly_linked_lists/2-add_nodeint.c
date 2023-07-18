#include "main.h"

/**
 * add_nodeint- Entry point
 *
 * @head: Description
 * @n: Desc
 *
 * Return: new node;
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode -- NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = *head;
	*head = newnode;
	newnode->n = n;

	return (newnode);
}
