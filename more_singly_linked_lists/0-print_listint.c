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
	int n;
	int nodes;

	if (h == NULL)
	{
		return (0);
	}

	for (nodes = 0; ptr != NULL; nodes++)
	{
		n = ptr->n;
		if (n < 0)
		{
			n = n * -1;
			putchar(45);
		}
		printf("%i\n", n);
		ptr = ptr->next;
	}
	return (nodes);
}
