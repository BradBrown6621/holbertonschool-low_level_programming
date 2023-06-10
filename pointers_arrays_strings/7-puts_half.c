#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - Entry point
 *
 * @str: A pointer to a string to be manipulated
 */

void puts_half(char *str)
{
	int lengthstr = _strlen(str);
	int i = 0;

	while (i < (lengthstr / 2))
	{
		i++;
	}

	if (lengthstr % 2 != 0)
	{
		i++;
	}

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
