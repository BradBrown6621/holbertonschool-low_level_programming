#include "lists.h"

/**
 * print_list - Prints the data contained in each member of list_t h
 *
 * @h: The list of which each members will be printed
 *
 * Return: Num of members in the list
 */

size_t print_list(const list_t *h)
{
	unsigned int i;

	for (i = 0; h->next != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			i++;
			return (i);
		} else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	i++;
	return (i);
}
