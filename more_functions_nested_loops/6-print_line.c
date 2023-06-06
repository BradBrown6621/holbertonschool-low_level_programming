#include "main.h"

/**
 * print_line - Entry point
 *
 * @n: n is the number of underscores printed
 */

void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		_putchar(95);
		i++;
	}
}
