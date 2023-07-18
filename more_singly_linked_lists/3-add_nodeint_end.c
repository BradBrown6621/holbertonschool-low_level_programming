#include "lists.h"

/**
 * add_node_end- A function that initializes a newnode to the end of a list
 *
 * @head: The pointer that points to the first node in the list
 * @n: int to be copied to the new node
 *
 * Return: Pointer to the newly created node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;

	listint_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = NULL;
	newnode->n = n;

	if (*head == NULL)
	{
		*head = newnode;
	}

	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = newnode;
	newnode->next = NULL;

	return (newnode);
}
