#include "main.h"

/**
 * _strlen - Entry point
 *
 * @s : String array (pointer?)
 *
 * Return: Always length [SUCCESS]
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != 0)
	{
		length++;
		s++;
	}
	return (length);
}
