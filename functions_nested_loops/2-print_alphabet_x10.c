#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * @alphabet[]: array of the alphabet :)
 */

void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int nestedi;

	while (i < 10)
	{
		nestedi = 0;
		while (alphabet[nestedi] != 0)
		{
			_putchar(alphabet[nestedi]);
			nestedi++;
		}
		i++;
		_putchar(10);
	}
}
