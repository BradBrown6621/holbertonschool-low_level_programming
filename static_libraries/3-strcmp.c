#include "main.h"

/**
 * _strcmp - Entry point
 *
 * @s1: Points to the string to be compared against
 * @s2: Points to the string to compare with
 *
 * Return: Positive num, negative nu 0 if otherwise
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 > s2)
	{
		return (s1 - s2);
	} else
	{
			if (s1 < s2)
		{
			return (-1 * (s1 - s2));
		} else
		{
			return (0);
		}
	}
}
