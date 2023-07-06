#include "variadic_functions.h"

/**
 * print_numbers - Prints a formatted list of numbers passed in
 *
 * @separator: Divider for formatting print
 * @n: Nums
 *
 * Return: NOTHING!!!
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vars;
	unsigned int i;

	va_start(varg, n);

	i = 0;

	while (i < n)
	{
		printf("%d", va_arg(varg, int));
		if ((separator != NULL) && (i != (n - 1)))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");

	va_end(varg);
}
