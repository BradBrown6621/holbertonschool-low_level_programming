#include "main.h"

/**
 * rev_string - Entry point
 *
 * @s: String to be reversed
 */

void rev_string(char *s)
{
	char temp[] = &s;
	int lengths = _strlen(s);


	while (s[0] != 0)
	{
		temp[lengths] = s[0];
		lengths--;
		s++;
	}
	while (s[0] != 0)
	{
		_putchar(s[0]);
		_putchar(temp[0]);
		s++;
		temp++;
	}
}
