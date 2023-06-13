#include "main.h"

/**
 * reverse_array - Entry point
 *
 * @a: The array to be reversed
 * @n: The sizeof *a
 */

void reverse_array(int *a, int n)
{
	int lengths = n - 1;
	int temp[1];
	int i;

	for (i = 0; i < (n / 2) - 1; i++, lengths--)
	{
		temp[0] = a[i];
		a[i] = a[lengths];
		a[lengths] = temp[0];
	}
}
