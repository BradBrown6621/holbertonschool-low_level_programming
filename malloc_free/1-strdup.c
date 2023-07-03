#include <stdio.h>
#include <stdlib.h>
#include "_strlen.c"

/**
 * _strdup - Duplicates a string and returns the result
 *
 * @str: Character array (string) to be duplicated
 *
 * Return: dupstr (Duplicate of string) [Success]
 */

char *_strdup(char *str)
{
	char *dupstr;
	int i = 0;
	char *mtchck = &str[0];

	if (mtchck == NULL)
	{
		return(NULL);
	}

	dupstr = malloc(sizeof(char) * _strlen(str));

	if (dupstr == NULL)
	{
		return (NULL);
	}

	while (*mtchck != 0)
	{
		dupstr[i] = str[i];
		mtchck++;
		i++;
	}

	dupstr[i] = 0;

	return(dupstr);
}
