#include "main.h"

/**
 * print_alphabet - Entry point
 */

void print_alphabet_x10(void)
{	
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int nestedi = 0;

	while (i < 9)
	{
		while (alphabet[nestedi] != 0)
		{
			_putchar(alphabet[nestedi]);
			nestedi++;
		}
		i++;
		_putchar(10);
	}
}
