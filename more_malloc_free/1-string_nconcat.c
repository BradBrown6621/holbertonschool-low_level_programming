#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates n bytes of s2 to s1
 *
 * @s1: String to be concatenated to
 * @s2: String to be concatenated from
 * @n: Num of bytes to concat from s2 to s1
 *
 * Return: Result of concatenations (ptr) [SUCCESS]
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i;
	unsigned int ii;
	char *crawler;

	if (strlen(s2) < n)
	{
		n = strlen(s2);
	}

	ptr = malloc ((strlen(s1) + n) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	crawler = *&s1;
	i = 0;
	ii = 0;

	while (*crawler != 0)
	{
		ptr[i] = *crawler;
		crawler++;
		i++;
	}

	crawler = *&s2;
	ii = 0;

	while ((*crawler != 0) && (ii < n))
	{
		ptr[i] = *crawler;
		crawler++;
		ii++;
		i++;
	}

	ptr[i] = 0;

	return(ptr);
}
