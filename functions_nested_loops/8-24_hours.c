#include "main.h"

/**
 * jack_bauer - Entry point
 */

void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	while (hour < 25)
	{
		while (minute < 60)
		{
			if (hour < 10)
			{
				printf("0%i:", hour);
			} else
			{
				printf("%i:", hour);
			}
			if (minute < 10)
			{
				printf("0%i\n", minute);
			} else
			{
				printf("%i:\n", minute);
}
