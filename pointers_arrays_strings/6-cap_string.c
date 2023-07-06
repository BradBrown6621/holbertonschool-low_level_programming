#include <stdio.h>
#include "main.h"

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

	for (i = 0; ptr[i] != 0; i++)
	{
		if ((ptr[i] >= 65) && (ptr[i] <= 90))
		{
			i = end_word(ptr, i);
		}
		if ((ptr[i] >= 97) && (ptr[i] <= 122))
		{
			if ((ptr[i + 1] >= 97) && (ptr[i] <= 122))
			{
				ptr[i] = ptr[i] - 32;
				i = end_word(ptr, i);
			}
		}
	}
	return (ptr);
}
