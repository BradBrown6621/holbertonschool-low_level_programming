#include "main.h"

/**
 * print_square - Entry point
 *
 * @size: The num of columns and rows of hashtags to be printed
 */

void print_square(int size)
{
	int rows = 0;
	int columns = 0;

	while (numlines < size)
	{
		while (columns < size)
		{
			_putchar(35);
			columns++;
		}
		rows++;
	}
	_putchar(10);
}
