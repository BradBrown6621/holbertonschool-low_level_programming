#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: Input value
 *
 * Return: 1 [Lower], 0 [Upper]
 */

int _islower(int c)
{
	if (c < 123)
	{
		if (c < 97)
		{
			return(1);
		} else
		{
			return(0);
		}
	} else
	{
	return(0);
	}
}
