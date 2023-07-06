#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 *
 * @s1: Description
 * @s2: Description
 *
 * Return: Char
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i;
	char *crawler;

	ptr = malloc(((sizeof(s1) - 1) + (sizeof(s2) - 1)) - 2);

	if (ptr == NULL)
	{
		return (NULL);
	}

	crawler = *&s1;
	i = 0;

	while (*crawler != 0)
	{
		ptr[i] = *crawler;
		crawler++;
		i++;
	}

	crawler = *&s2;

	while (*crawler != 0)
	{
		ptr[i] = *crawler;
		crawler++;
		i++;
	}

	ptr[i] = 0;

	return (ptr);
}
