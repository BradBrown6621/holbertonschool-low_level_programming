#include <stdio.h>

/**
 * <function name goes here> - Entry point
 *
 * <@parameters go here>: Description
 *
 * Return: <insert return value>
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i, ", a[i]);
	}
	if (i == n)
	{
		printf("%i\n", a[i]);
	}
}
