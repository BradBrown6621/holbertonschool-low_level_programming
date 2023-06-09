#include "main.h"

/**
 * rev_string - Entry point
 *
 * @s: String to be reversed
 */

void rev_string(char *s)
{
	while (s[0] != 0)
	{
		_putchar(s[0]);
		s++;
	}
}
