#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main()
{
	char character;
	int interger;
	long int longint;
	long long longlong;
	float floatint;

	printf("Size of a char: %ld bytes\n",sizeof(character));
	printf("Size of an int: %ld bytes\n",sizeof(interger));
	printf("Size of long int: %ld bytes\n",sizeof(longint));
	printf("Size of long long int: %ld byte\n",sizeof(longlong));
	printf("Size of float: %ld byte\n",sizeof(floatint));

	return 0;
}

