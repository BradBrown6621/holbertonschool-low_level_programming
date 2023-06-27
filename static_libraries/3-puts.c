#include "main.h"

/**
 * _puts - Entry point
 *
 * @str: Description
 */

void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(str[0]);
		str++;
	}
	_putchar(10);
}
