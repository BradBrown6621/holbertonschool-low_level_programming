#include "main.h"

/**
 * _atoi - Entry point
 *
 * @s: the string that we will find the number for
 *
 * Return: s if there is a number, 0 is there are no numbers
 */

int _atoi(char *s)
{
	int i = 0;

	while (s[0] != 0)
	{
		if ((s[0] == 43) || (s[0] == 45) || (s[0] >= 48))
		{
			if (s[0] <= 57)
			{
				if ((s[1] >= 48) && (s[1] <= 57))
				{
					if ((s[i] >= 48) && (s[i] <= 57))
					{
						i++;
					} else
					{
						s[i] = 0;
						return (*s);
					}
				} else
				{
					s++;
				}
			} else
			{
				s++;
			}
		} else
		{
			s++;
		}
	}
	return (0);
}
