#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * @n: Description
 */

void print_diagonal(int n)
{
	int numlines = 0;
	int numspaces = 0;

	while (numlines <= n)
	{
		while (numspaces < numlines)
		{
			if (numspaces == numlines)
			{
				_putchar(92);
			} else
			{
				_putchar(32);
			}
			numspaces++;
		}
		_putchar(10);
		numlines++;
		numspaces = 0;
	}
}
