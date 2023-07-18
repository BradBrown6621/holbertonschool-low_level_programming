#include "main.h"

/**
 * clear_bit - Sets bit at index n[index] to 0
 *
 * @n: Pointer to int to have value altered
 * @index: Index of n to be referenced
 *
 * Return: 1 if successful, -1 if failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int base = 1;

	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}

	while (index > 0)
	{
		index--;
		base *= 2;
	}

	*n &= ~(base);
	return (1);
}
