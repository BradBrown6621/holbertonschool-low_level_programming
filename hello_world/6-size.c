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

	printf("Size of a %c: %d byte(s)", &character, sizeof(&character));
	printf("Size of a %c: %d byte(s)", &integer, sizeof(&integer));
	printf("Size of a %c: %d byte(s)", &longinteger, sizeof(&longinteger));
	printf("Size of a %c: %d byte(s)", &longerinteger, sizeof(&longerinteger));
	printf("Size of a %c: %d byte(s)", &floatnum, sizeof(&floatnum));
}
