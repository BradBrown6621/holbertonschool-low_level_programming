#include "main.h"

/**
 * _strlen_recursion - Entry point
 *
 * @s: Input string
 *
 * Return: Integer (length of string) [Success]
 */

int _strlen_recursion(char *s)
{
	int lengths;

	if (s[0] == 0)
	{
		lengths = 0;
		return (lengths);
	}
	lengths = _strlen_recursion(s + 1);
	lengths++;
	return (lengths);
}
