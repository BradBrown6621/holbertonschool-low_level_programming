#include "main.h"

/**
 * set_bit - Sets bit at index of n to 1
 *
 * @n: Int to be set
 * @index: The index of n to be set
 *
 * Return: 1 on success, -1 on failure
 */

int main(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
	{
		return (-1);
	}

	*n |= (1 << index);
	return (1);
}
