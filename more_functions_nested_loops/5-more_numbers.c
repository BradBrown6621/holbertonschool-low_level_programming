#include "main.h"

/**
 * more_numbers - Entry point
 */

void more_numbers(void)
{
	int io;
	int ii;

	while (io < 11)
	{
		while (ii < 15)
		{
			_putchar(ii + 48);
			ii++;
		}
		_putchar(10);
		io++;
		ii = 0;
	}
}
