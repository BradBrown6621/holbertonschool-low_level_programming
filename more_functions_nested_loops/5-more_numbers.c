#include "main.h"

/**
 * more_numbers - Entry point
 */

void more_numbers(void)
{
	int linesprinted = 0;
	int num10 = 0;
	int num1 = 0;

	while (linesprinted < 11)
	{
		if (num10 > 9)
		{
			_putchar(1 + 48);
			if (num10 == 10)
			{
				num1 = 0;
			}
		}
		while (num10 < 15)
		{
			_putchar(num1 + 48);
			num10++;
			num1++;
		}
		_putchar(10);
		linesprinted++;
	}
}
