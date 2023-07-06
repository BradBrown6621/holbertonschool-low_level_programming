#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Entry point
 *
 * @separator: Description
 * @n: Num of arguements
 *
 * Return: NOTHING!!
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vars;
	unsigned int i;
	char *s;

	va_start(vars, n);

	i = 0;

	while (i < n)
	{
		s = va_arg(vars, char *);

		if (s == NULL)
		{
			printf("%s", "(nil)");
		} else
		{
			printf("%s", s);
		}

		if ((separator != NULL) && (i != (n - 1)))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");

	va_end(vars);
}
