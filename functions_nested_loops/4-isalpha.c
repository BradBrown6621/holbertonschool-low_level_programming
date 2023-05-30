#include "main.h"

/**
 * _isalpha - Entry point
 *
 *
 */

int _isalpha(int c)
{
	if ((c < 91 && c > 64) || (c < 123 && c > 96))
	{
		return (1);
	}
	return (0);
}
