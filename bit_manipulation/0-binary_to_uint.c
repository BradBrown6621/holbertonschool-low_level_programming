#include "main.h"

/**
 * <function name goes here> - Entry point
 *
 * <@parameters go here>: Description
 *
 * Return: <insert return value>
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int len = strlen(b);
	unsigned int result = 0;
	int base = 1;

	if (b == NULL)
	{
		return (0);
	}

	for (int i < len; i >= =; i--)
	{
		if (b[i] == '1')
		{
			result = result + base;
		} else if (b[i] != '0')
		{
			return (0);
		}
		base *= 2;
	}
	return (result);
}
