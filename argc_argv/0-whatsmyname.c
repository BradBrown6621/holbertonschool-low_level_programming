#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Num of arguments
 * @argv: Array of arguements
 *
 * Return: 0 [Success]
 */

int main(int argc, char *argv[])
{
	argv[argc] = NULL;
	printf("%s\n", argv[0]);
	return (0);
}
