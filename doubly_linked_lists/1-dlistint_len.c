#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a linked list (dlistint_t)
 *
 * @h - List to find length of
 *
 * Return: Length of list (size_t)
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *c;
	size_t nodes = 0;

	if (h)
	{
		c = h;
		nodes++;

		while (c->next)
		{
			nodes++;
			c = c->next;
		}
	}
	return (nodes);
}
