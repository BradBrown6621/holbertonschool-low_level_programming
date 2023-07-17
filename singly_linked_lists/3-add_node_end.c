#include "lists.h"

/**
 * add_node_end- A function that initializes a newnode to the end of a list
 *
 * @head: The pointer that points to the first node in the list
 * @str: String to be copied to the new node
 *
 * Return: Pointer to the newly created node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *s = strdup(str);

	list_t *ptr;

	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL || s == NULL)
	{
		free(s);
		free(newnode);
		return (NULL);
	}

	newnode->next = NULL;
	newnode->str = s;
	newnode->len = strlen(s);

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
