#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char character;
	int integer;
	long int longinteger;
	long long int longerinteger;
	float floatnum;

	printf("Size of a char: %ld byte(s)\n", sizeof(character));
	printf("Size of a int: %ld byte(s)\n", sizeof(integer));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longinteger));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longerinteger));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatnum));
	return (0);
}
