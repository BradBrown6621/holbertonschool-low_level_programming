#include "main.h"

/**
 * print_alphabet - Entry point
 */

void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alphabet[i] != 0)
	{
		_putchar(alphabet[i]);
		i++;
	}
}
