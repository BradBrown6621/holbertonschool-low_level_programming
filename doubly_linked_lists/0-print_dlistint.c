#include "lists.h"
/**
 * print_dlistint - Prints dlistint_t to STDOUT
 *
 * @h - Doubly linked list to print
 *
 * Return: Number of nodes as size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%i\n", h->n);
		if (h->next)
		{
			h = h->next;
		}
		else
		{
			return (nodes);
		}
	}
	return (nodes);
}
