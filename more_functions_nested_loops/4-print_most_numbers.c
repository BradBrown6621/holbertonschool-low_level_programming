#include "main.h"

/**
 * print_most_numbers - Entry point
 */

void print_most_numbers(void)
{
	int i;

	while (i < 10)
	{
		if ((i != 2) || (i != 4))
		{
			_putchar(i + 48);
		}
		_putchar(10);
		i++;
	}
}
