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

	printf("Size of a %c: %ld byte(s)", character, sizeof(character));
	printf("Size of a %i: %ld byte(s)", integer, sizeof(integer));
	printf("Size of a %li: %ld byte(s)", longinteger, sizeof(longinteger));
	printf("Size of a %lli: %ld byte(s)", longerinteger, sizeof(longerinteger));
	printf("Size of a %f: %ld byte(s)", floatnum, sizeof(floatnum));
}
