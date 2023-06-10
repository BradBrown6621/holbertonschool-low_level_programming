#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - Entry point
 *
 * @s: String to be reversed
 */

void rev_string(char *s)
{
	int lengths = (_strlen(s) - 1);
	int i = 0;
	char temp[1];

	while (i <= lengths + 2)
	{
		temp[0] = s[0];
		s[0] = s[lengths];
		s[lengths] = temp[0];
		i++;
		lengths--;
		lengths--;
		s++;
	}
}
