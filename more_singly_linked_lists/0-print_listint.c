#include "main.h"

/**
 * print_listint - Entry point
 *
 * @h: Description
 *
 * Return: nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	int nodes;

	for (nodes = 0; ptr != NULL; nodes++)
	{
		printf("%i\n", ptr->n);
		ptr = ptr->next;
	}
	return (nodes);
}
