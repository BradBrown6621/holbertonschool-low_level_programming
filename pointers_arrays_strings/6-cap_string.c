#include <stdio.h>
#include "main.h"
#include "_islower.c"

/**
 * cap_string: Capitalizes all words
 *
 * @str: The uncapitalized string
 *
 * Return: Capitalized string
 */

int end_word(char *str, int i)
{
	i++;

	while ((str[i] >= 97) && (str[i] <= 122))
	{
		i++;
	}
	return (i);
}

char *cap_string(char *str)
{
	char *ptr;
	int i;

	ptr = str;

	if (_islower(ptr[0]) == 0)
	{
		ptr[0] = ptr[0] - 32;
	}

	for (i = 0; ptr[i] != 0; i++)
	{
		if (ptr[i] == 32 || ptr[i] == 9 || ptr[i] == 10 || ptr[i] == 46)
		{
			if (_islower(ptr[i + 1]) == 0)
			{
				ptr[i + 1] = ptr[i + 1] - 32;
				i = end_word(ptr, i);
			}
		}
	}
	return (ptr);
}
