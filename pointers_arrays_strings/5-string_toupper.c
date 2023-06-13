#include "main.h"
#include "2-strlen.c"

/**
 * string_toupper - Entry point
 *
 * @s: String to be made uppercase
 *
 * Return: s [Success]
 */

char *string_toupper(char *s)                                               
{
	int lengths = _strlen(s) - 1;
	int i;

	for (i = 0; i <= lengths; i++)
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
