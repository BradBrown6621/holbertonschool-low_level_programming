#include "main.h"

/**
 * get_bit - Gets bit from a specified index
 *
 * @n: int to get the bit of
 * @index: The index of n we want to access
 *
 * Return: The value at index of n
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 0)
	{
		n = get_bit(n >> 1, index);
	}
	return (n & 1);
}
