#include "main.h"

/**
 * swap - Entry point
 *
 * @a: First int to be swapped to second int
 *
 * @b: Second int to be swapped to first int
 *
 * Return: <insert return value>
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
