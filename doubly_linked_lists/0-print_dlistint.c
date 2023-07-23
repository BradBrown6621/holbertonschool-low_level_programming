#include "lists.h"

/**
 * print_dlistint - Prints the data from a doubly-linked list
 *
 * @h: The list to be printed
 *
 * Return: The size of the list that was printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t ncount;

	for (ncount = 0; h != NULL; ncount++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (ncount);
}
