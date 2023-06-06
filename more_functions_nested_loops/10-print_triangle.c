#include "main.h"

/**
 * print_triangle - Entry point
 *
 * @size: dictates the size of the triangle to be printed
 */

void print_triangle(int size)
{
	int rows = 0;
	int stop = size;
	int printout;
	int i = 0;

	if (size <= 0)
	{
		_putchar(10);
	} else
	{
		while (rows < size)
		{
			while (i < size)
			{
				i++;
				if (i < stop)
				{
					printout = 32;
				} else
				{
					printout = 35;
				}
				_putchar(printout);
			}
			rows++;
			stop--;
			i = 0;
			_putchar(10);
		}
	}
}
