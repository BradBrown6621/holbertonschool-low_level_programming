#include "lists.h"

/**
 * add_node_end- A function that adds a newnode with new values to the end of a list
 *
 * @head: The pointer that points to the first node in the list
 * @str: String to be copied to the new node
 *
 * Return: Pointer to the newly created node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *s = strdup(str);

	list_t **ptr = head;

	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL || s == NULL)
	{
		free(s);
		free(newnode);
		return(NULL);
	}

	newnode->next = NULL;
	newnode->str = s;
	newnode->len = strlen(s);

	if (*head == NULL)
	{
		*head = newnode;
	}

	list_t *ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = newnode;
	newnode->next = NULL;

	return (newnode);
}
