#include "lists.h"

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

	if (h == NULL)
	{
		return (0);
	}

	for (nodes = 0; ptr != NULL; nodes++)
	{
		if (ptr->n < 0)
		{
			ptr->n = ptr->n * -1;
			putchar(45);
		}
		printf("%i\n", ptr->n);
		ptr = ptr->next;
	}
	return (nodes);
}
