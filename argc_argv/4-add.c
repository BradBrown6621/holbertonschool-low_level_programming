#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Num of arguements
 *
 * @argv: Pointer to array of arguements
 *
 * Return: 0 [Success]
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int i = 1;

	if (argc < 3)
	{
		if (argc < 2)
		{
			printf("0\n");
			return (0);
		}
		printf("%d\n", atoi(argv[1]));
		return (0);
	}
	while (i != argc)
	{
		if ((*argv[i] < 48) && (*argv[i] > 57))
		{
			printf("%s\n", "Error");
			return (1);
		}
		result = result + atoi(argv[i]);
		i++;
	}

	printf("%d\n", result);
	return (0);
}
