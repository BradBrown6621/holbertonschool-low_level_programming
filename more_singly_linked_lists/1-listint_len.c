#include "lists.h"

/**
 * listint_len - Entry point
 *
 * @h: Description
 *
 * Return: unsigned int
 */

size_t listint_len(const listint_t *h)
{
	unsigned int nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		h = h->next;
	}
	return (nodes);
}
