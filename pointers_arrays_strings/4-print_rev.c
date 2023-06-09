#include "main.h"

/**
 * print_rev - Entry point
 *
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int length = _strlen(s);

	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
}
