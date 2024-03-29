#include "main.h"

/**
 * binary_to_uint - Conversion function
 *
 * @b: String representing binary number
 *
 * Return: Int conversion of b
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		result  = result * 2;
		if (b[i] == '1')
		{
			result = result + 1;
		}
		i++;
	}
	return (result);
}
