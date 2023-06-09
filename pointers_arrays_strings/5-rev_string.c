#include "main.h"
#include "2-strlen.c"
#include "_putchar.c"

/**
 * rev_string - Entry point
 *
 * @s: String to be reversed
 */

void rev_string(char *s)
{
	int lengths = _strlen(s);
	char temp[lengths];


	while (s[0] != 0)
	{	
		temp[lengths] = s[0];
		_putchar(s[0]);
		_putchar(temp[0]);
		lengths--;
		s++;
	}
}
