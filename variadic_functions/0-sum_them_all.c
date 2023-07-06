#include "variadic_functions.h"

/**
 * sum_them_all - Adds all args together
 *
 * @n: Description
 *
 * Return: result [SUCCESS]
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vars;
	int result;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(vars, n);

	result = 0;
	i = 0;

	while (i < n)
	{
		result = result + va_arg(vars, int);
		i++;
	}

	va_end(vars);
	return (result);
}
