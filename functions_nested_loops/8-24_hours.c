#include "main.h"

/**
 * jack_bauer - Entry point
 */

void jack_bauer(void)
{
	int hour10 = 0;
	int hour1 = 0;
	int min10 = 0;
	int min1 = 0;

	while ((hour10 * 10) + hour1 < 25)
	{
		_putchar(hour10 + 48);
		_putchar(hour1 + 48);
		_putchar(58);
		_putchar(min10 + 48);
		_putchar(min1 + 48);
		_putchar(10);

		if (min1 < 9)
		{
			min1++;
		} else
		{
			min1 = 0;
			if (min10 < 5)
			{
				min10++;
			} else
			{
				min10 = 0;
				if (hour1 < 9)
				{
					hour1++;
				} else
				{
					hour1 = 0;
					hour10++;
				}
			}
		}
	}
}
