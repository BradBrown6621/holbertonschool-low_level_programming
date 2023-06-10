#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - Entry point
 *
 * @str: A pointer to a string to be manipulated
 */

void puts2(char *str)
{
	int lengthstr = _strlen(str);
	int i = 0;

	while (i <= lengthstr)
	{
		_putchar(str[i]);
		i++;
		i++;
	}
}
