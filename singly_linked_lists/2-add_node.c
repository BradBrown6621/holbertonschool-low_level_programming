#include "lists.h"

/**
 * add_node - A function that adds a newnode with new values to a list
 *
 * @head: The pointer that points to the first node in the list
 * @str: String to be copied to the new node
 *
 * Return: Pointer to the newly created node
 */

list_t *add_node(list_t **head, const char *str)
{
	const char *s = strdup(str);
	
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = *head;
	head = newnode;
	newnode->str = s;
	newnode->len = strlen(s);

	return (newnode);
}
