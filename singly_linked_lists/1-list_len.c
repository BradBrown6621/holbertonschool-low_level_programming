#include "main.h"

/**
 * list_len - Gets the length of a singly-linked list
 *
 * @h: The list whose length will be determined
 *
 * Return: The length of the list in an long unsigned int i
 */

size_t list_len(const list_t *h)
{
	long unsigned int i;

	if (h == NULL)
	{
		return (0);
	}

	for (i = 0; h->next != NULL; i++)
	{
		h = h->next;
	}
	i++;
	return (i);
}
