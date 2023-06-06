#include "main.h"

/**
 * swap_int - Entry point
 *
 * @a: First int to be swapped to second int
 *
 * @b: Second int to be swapped to first int
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
