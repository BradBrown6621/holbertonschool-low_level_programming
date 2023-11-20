#include "lists.h"

/**
 * sum_dlistint - Sums the data in a doubly linked list together
 *
 * @head: The head of the list
 *
 * Return: The summed data as an int
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
