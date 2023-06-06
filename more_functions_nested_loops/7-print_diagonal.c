#include "main.h"

/**
 * <function name goes here> - Entry point
 *
 * <@parameters go here>: Description
 *
 * Return: <insert return value>
 */

void print_diagonal(int n)
{
	int numlines = 0;
	int numspaces = 0;

	while (numlines <= n)
	{
		while (numspaces <= numlines)
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
\
 \
  \
   \
