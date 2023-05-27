#include <stdio.h>
/**
 * main - Entry point
 *
 * Return - Always 0 (Success)
 */

int main(void)
{
	char character;
	int integer;
	long int longinteger;
	long long int longerinteger;
	float floatnum;

	printf("Size of a char: %ld byte(s)\n", character, sizeof(character));
	printf("Size of a %i: %ld byte(s)\n", integer, sizeof(integer));
	printf("Size of a %li: %ld byte(s)\n", longinteger, sizeof(longinteger));
	printf("Size of a %lli: %ld byte(s)\n", longerinteger, sizeof(longerinteger));
	printf("Size of a %f: %ld byte(s)\n", floatnum, sizeof(floatnum));
	return (0);
}
