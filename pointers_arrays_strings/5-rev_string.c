#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

/**
 * rev_string - Entry point
 *
 * @s: String to be reversed
 */

void rev_string(char *s)
{
	long int lengths = (_strlen(s) - 1);
	long int i = 0;
	char temp[1];

	printf("%li", lengths);
	putchar(10);

	while (i <= (lengths + 3))
	{
		lengths--;
		temp[0] = s[0];
		s[0] = s[lengths];
		s[lengths] = temp[0];
		i++;
		lengths--;
		s++;
	}
}
