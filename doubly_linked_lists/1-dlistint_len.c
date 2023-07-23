#include "lists.h"

/**
 * dlistint_len - Finds the number of elements in a linked list
 *
 * @h: The list to be checked
 *
 * Return: size_t of list h
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t ncount;

	for (ncount = 0; h != NULL; ncount++)
	{
		h = h->next;
	}
	return (ncount);
}
